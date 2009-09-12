#include <OSGConfig.h>

#include <iostream>

#include <OSGGLUT.h>

#include <OSGFieldContainerFactory.h>
#include <OSGVector.h>
#include <OSGQuaternion.h>
#include <OSGMatrix.h>
#include <OSGMatrixUtility.h>
#include <OSGBoxVolume.h>
#include <OSGLine.h>
#include <OSGNode.h>
#include <OSGGroup.h>
#include <OSGThread.h>
#include <OSGTransform.h>
#include <OSGAction.h>
#include <OSGRenderAction.h>
#include <OSGSimpleGeometry.h>
#include <OSGSceneFileHandler.h>

#include <OSGDirectionalLight.h>

#include "OSGViewport.h"

#include "OSGFBOViewport.h"
#include "OSGFrameBufferObject.h"
#include "OSGRenderBuffer.h"
#include "OSGTextureBuffer.h"

#include "OSGCamera.h"
#include "OSGWindow.h"
#include "OSGGLUTWindow.h"
#include "OSGCamera.h"
#include "OSGPerspectiveCamera.h"
#include "OSGSolidBackground.h"
//#include "OSGUniformBackground.h"
#include "OSGOSGWriter.h"
#include "OSGChangeList.h"
#include "OSGIOStream.h"
#include "OSGTextureObjChunk.h"
#include "OSGTextureEnvChunk.h"
#include "OSGSimpleMaterial.h"
#include "OSGRRTStage.h"
#include "OSGVisitSubTree.h"
#include "OSGPolygonForeground.h"
#include "OSGRTInfoAttachment.h"

#include "OSGTrackball.h"

using namespace OSG;

RenderAction *rentravact = NULL;

NodeUnrecPtr  root;
NodeUnrecPtr  animRoot;

NodeUnrecPtr  file;

FBOViewportUnrecPtr vpScene;
ViewportUnrecPtr    vpPlane;

WindowUnrecPtr    win;

Vec3f             sceneTrans;
TransformUnrecPtr cam_transScene;

TransformUnrecPtr cam_transPlane;

TextureObjChunkUnrecPtr tx1o;
TextureEnvChunkUnrecPtr tx1e;
RRTStageUnrecPtr        pStage;
VisitSubTreeUnrecPtr    pVisit;

Trackball    tball;

Pnt3f min,max;

int mouseb = 0;
int lastx  = 0;
int lasty  = 0;

bool bPrintTransform = false;

void display(void)
{
    Matrix m1, m2, m3;
    Quaternion q1;

    tball.getRotation().getValue(m3);

    q1.setValue(m3);


    m1.setRotate(q1);
    
    m2.setTranslate( tball.getPosition() );

    if(bPrintTransform == true)
    {
        fprintf(stderr, "%f %f %f\n", 
                tball.getPosition()[0],
                tball.getPosition()[1],
                tball.getPosition()[2]);
        fprintf(stderr, "%f %f %f %f\n", 
                q1[0],
                q1[1],
                q1[2],
                q1[3]);

        bPrintTransform = false;
    }
    
    m1.mult( m2 );

    cam_transPlane->editSFMatrix()->setValue(m1);


    Thread::getCurrentChangeList()->commitChanges();

    win->render(rentravact);
}

void reshape(int w, int h)
{
    std::cerr << "Reshape: " << w << "," << h << std::endl;
    win->resize( w, h );
}


void animate(void)
{
    glutPostRedisplay();
}

// tballall stuff


void motion(int x, int y)
{   
    Real32 w = win->getWidth(), h = win->getHeight();
    

    Real32 a = -2. * ( lastx / w - .5 );
    Real32 b = -2. * ( .5 - lasty / h );
    Real32 c = -2. * ( x / w - .5 );
    Real32 d = -2. * ( .5 - y / h );

    if(mouseb & (1 << GLUT_LEFT_BUTTON))
    {
        tball.updateRotation(a, b, c, d);     
    }
    else if(mouseb & (1 << GLUT_MIDDLE_BUTTON))
    {
        tball.updatePosition(a, b, c, d);     
    }
    else if(mouseb & (1 << GLUT_RIGHT_BUTTON))
    {
        tball.updatePositionNeg(a, b, c, d);  
    }

    lastx = x;
    lasty = y;
}

void mouse(int button, int state, int x, int y)
{
    if(state == 0)
    {
        switch ( button )
        {
            case GLUT_LEFT_BUTTON:  
                break;
            case GLUT_MIDDLE_BUTTON: 
                tball.setAutoPosition(true);
                break;
            case GLUT_RIGHT_BUTTON:
                tball.setAutoPositionNeg(true);
                break;
        }
        mouseb |= 1 << button;
    }
    else if(state == 1)
    {
        switch(button)
        {
            case GLUT_LEFT_BUTTON:  
                break;
            case GLUT_MIDDLE_BUTTON:
                tball.setAutoPosition(false);
                break;
            case GLUT_RIGHT_BUTTON:     
                tball.setAutoPositionNeg(false);
                break;
        }       
        mouseb &= ~(1 << button);
    }

    lastx = x;
    lasty = y;
}

void vis(int visible)
{
    if(visible == GLUT_VISIBLE) 
    {
        glutIdleFunc(animate);
    } 
    else 
    {
        glutIdleFunc(NULL);
    }
}

void key(unsigned char key, int x, int y)
{
    switch(key)
    {
        case 27:   
            delete rentravact;

            root           = NullFC;
            animRoot       = NullFC;
            file           = NullFC;
            vpScene        = NullFC;
            vpPlane        = NullFC;
            win            = NullFC;
            cam_transScene = NullFC;
            cam_transPlane = NullFC;
            tx1o           = NullFC;
            tx1e           = NullFC;
            pStage         = NullFC;
            pVisit         = NullFC;

            osgExit(); 
            exit(0);

        case 'a':   
            glDisable( GL_LIGHTING );
            std::cerr << "Lighting disabled." << std::endl;
            break;
        case 's':   
            glEnable( GL_LIGHTING );
            std::cerr << "Lighting enabled." << std::endl;
            break;
        case 'z':   
            glPolygonMode( GL_FRONT_AND_BACK, GL_POINT);
            std::cerr << "PolygonMode: Point." << std::endl;
            break;
        case 'x':   
            glPolygonMode( GL_FRONT_AND_BACK, GL_LINE);
            std::cerr << "PolygonMode: Line." << std::endl;
            break;
        case 'c':   
            glPolygonMode( GL_FRONT_AND_BACK, GL_FILL);
            std::cerr << "PolygonMode: Fill." << std::endl;
            break;
        case 'p':
            bPrintTransform = true;
            break;

        case 'd':
        {
#if 1
            char *outFileName = "/tmp/foo.osg";
            
            OSG::IndentFileOutStream outFileStream( outFileName );
            
            if( !outFileStream )
            {
                std::cerr << "Can not open output stream to file: "
                          << outFileName << std::endl;
            }
            else
            {
                std::cerr << "STARTING PRINTOUT:" << std::endl;
                OSGWriter writer( outFileStream, 4 );
                
                writer.write( file );
                
                outFileStream.close();
            }
#endif
        }
    }
}

void initRTStage(void)
{
    // beacon for camera and light  
    NodeUnrecPtr  b1n = Node ::create();
    GroupUnrecPtr b1  = Group::create();

    b1n->setCore(b1);

    // transformation

    NodeUnrecPtr      t1n = Node     ::create();
    TransformUnrecPtr t1  = Transform::create();

    t1n->setCore (t1 );
    t1n->addChild(b1n);

    cam_transScene = t1;

    // light
    
    NodeUnrecPtr             dlight = Node::create();
    DirectionalLightUnrecPtr dl     = DirectionalLight::create();

    dlight->setCore(dl);
    
    dl->setAmbient  (.3, .3, .3, 1);
    dl->setDiffuse  ( 1,  1,  1, 1);
    dl->setDirection( 0,  0,  1   );
    dl->setBeacon   (b1n          );

    // root
    NodeUnrecPtr  root = Node::create();
    GroupUnrecPtr gr1  = Group::create();

    root->setCore (gr1   );

    root->addChild(t1n   );
//    root->addChild(dlight);

    // Load the file
#if 0
    NodePtr file = Node::create();

    file->setCore(Group::create());
    
    if(file == NullFC)
    {
        std::cerr << "Couldn't load file, ignoring" << std::endl;

        file->addChild(makeSphere(4, 0.5f));
    }
    
    
    Thread::getCurrentChangeList()->commitChanges();
    file->updateVolume();

//    file->dump();

#if 0
    char *outFileName = "/tmp/foo.osg";

    OSG::FileOutStream outFileStream( outFileName );

    if( !outFileStream )
    {
        std::cerr << "Can not open output stream to file: "
                  << outFileName << std::endl;
        return -1;
    }

    std::cerr << "STARTING PRINTOUT:" << std::endl;
    OSGWriter writer( outFileStream, 4 );

//    writer.write( file );

    outFileStream.close();
#endif


    file->getVolume().getBounds(min, max);

    std::cout << "Volume: from " << min << " to " << max << std::endl;
#endif


    // Camera
    
    PerspectiveCameraUnrecPtr cam = PerspectiveCamera::create();

    cam->setBeacon(b1n);
    cam->setFov   (osgDegree2Rad(90));
    cam->setNear  (0.1);
    cam->setFar   (100000);

    // Background
    SolidBackgroundUnrecPtr bkgnd = SolidBackground::create();

    bkgnd->setColor(Color3f(1.0,0.5,0.5));
    
    // Viewport

    vpScene = FBOViewport::create();

    vpScene->setCamera    (cam           );
    vpScene->setBackground(bkgnd         );
    vpScene->setRoot      (root          );
    vpScene->setSize      (0, 0, 1, 1);

    FrameBufferObjectUnrecPtr pFBO = FrameBufferObject::create();

//    vpScene->setFrameBufferObject(pFBO);

    TextureBufferUnrecPtr pTexBuffer   = TextureBuffer::create();
    RenderBufferUnrecPtr  pDepthBuffer = RenderBuffer ::create();

    pDepthBuffer->setInternalFormat(GL_DEPTH_COMPONENT24   );

    pTexBuffer->setTexture(tx1o);

    pFBO->setSize(128, 128);
    
    pFBO->setColorAttachment(pTexBuffer, 0);
    pFBO->setDepthAttachment(pDepthBuffer );

    pFBO->editMFDrawBuffers()->clear();
    pFBO->editMFDrawBuffers()->push_back(GL_COLOR_ATTACHMENT0_EXT);
    
    sceneTrans.setValues(min[0] + ((max[0] - min[0]) * 0.5), 
                         min[1] + ((max[1] - min[1]) * 0.5), 
                         max[2] + ( max[2] - min[2]) * 4.5 );
    

    animRoot = root;

    NodeUnrecPtr pStageNode = Node::create();

    pStage = RRTStage::create();

    pStageNode->setCore(pStage);
//    pStageNode->setCore(Group::create());

    pStage->setRenderTarget (pFBO);
    pStage->setTextureTarget(tx1o);
  
    pStage->setSplitThreads(false );
//    pStage->setTiled       (true);
    pStage->setTiled       (false);

            pVisit     = VisitSubTree::create();
    NodeUnrecPtr pVisitNode = Node::create();

//    pVisit    ->setSubTreeRoot(dlight);
//    pVisit    ->setSubTreeRoot(file  );
    pVisitNode->setCore       (pVisit);

    pStageNode->setCore(pStage    );
    pStageNode->addChild(pVisitNode);
  
    root->addChild(pStageNode);
    root->addChild(dlight);
}


void initScene(int argc, char **argv)
{
    // beacon for camera and light  
    NodeUnrecPtr  b1n = Node ::create();
    GroupUnrecPtr b1  = Group::create();

    b1n->setCore(b1);

    // transformation

    NodeUnrecPtr      t1n = Node     ::create();
    TransformUnrecPtr t1  = Transform::create();

    t1n->setCore (t1 );
    t1n->addChild(b1n);

    cam_transPlane = t1;

    // light
    
    NodeUnrecPtr             dlight = Node::create();
    DirectionalLightUnrecPtr dl     = DirectionalLight::create();

    dlight->setCore(dl);
    
    dl->setAmbient  (.3, .3, .3, 1);
    dl->setDiffuse  ( 1,  1,  1, 1);
    dl->setDirection( 0,  0,  1   );
    dl->setBeacon   (b1n          );

    // root
    NodeUnrecPtr  root = Node::create();
    GroupUnrecPtr gr1  = Group::create();

    root->setCore (gr1   );

    root->addChild(t1n     );
    root->addChild(animRoot);
    root->addChild(dlight  );

    // Load the file

    file = NullFC;
    
    if(argc > 1)
    {
        file = SceneFileHandler::the()->read(argv[1], NULL);
    }

    if(file == NullFC)
    {
        file = makeSphere(4, 0.5f);
//        file = makeTorus(.5, 2, 16, 16);
    }

#if 1
    RTInfoAttachmentUnrecPtr pRTInfo = RTInfoAttachment::create();

    file->addAttachment(pRTInfo);


//    pStage->setRayTracingRoot(file);

    pVisit    ->setSubTreeRoot(file  );

    pStage->setWidth (128);
    pStage->setHeight(128);
#endif

    Thread::getCurrentChangeList()->commitChanges();
    file->updateVolume();

//    file->dump();

    file->getVolume().getBounds(min, max);

    std::cout << "VolumXe: from " << min << " to " << max << std::endl;

    TransformUnrecPtr scene_trans = Transform::create();
    NodeUnrecPtr      sceneTrN    = Node     ::create();

    sceneTrN->setCore (scene_trans);
    sceneTrN->addChild(file       );

    dlight->addChild(sceneTrN);

#if 0
    char *outFileName = "/tmp/foo.osg";

    OSG::IndentFileOutStream outFileStream( outFileName );

    if( !outFileStream )
    {
        std::cerr << "Can not open output stream to file: "
                  << outFileName << std::endl;
    }
    else
    {
        std::cerr << "STARTING PRINTOUT:" << std::endl;
        OSGWriter writer( outFileStream, 4 );
        
        writer.write( file );
        
        outFileStream.close();
    }
#endif


    // Camera
    
    PerspectiveCameraUnrecPtr cam = PerspectiveCamera::create();

    cam->setBeacon(b1n);
    cam->setFov   (osgDegree2Rad(90));
    cam->setNear  (0.1);
    cam->setFar   (100000);

    // Background
    SolidBackgroundUnrecPtr bkgnd = SolidBackground::create();

    bkgnd->setColor(Color3f(0.4, 0.4, 0.4));
    
    // Viewport

    vpPlane = Viewport::create();

    vpPlane->setCamera    (cam       );
    vpPlane->setBackground(bkgnd     );
    vpPlane->setRoot      (root      );
    vpPlane->setSize      (0, 0, 1, 1);


    UChar8 imgdata[] =
    {  
        64,64,64, 128,128,128, 192,192,192, 255,255,255 
    };

    ImageUnrecPtr pImg = Image::create();

    pImg->set(Image::OSG_RGB_PF, 128, 128);

    tx1o->setImage    (pImg      ); 
    tx1o->setMinFilter(GL_LINEAR );
    tx1o->setMagFilter(GL_LINEAR );
    tx1o->setWrapS    (GL_CLAMP );
    tx1o->setWrapT    (GL_CLAMP );
    tx1e->setEnvMode  (GL_REPLACE);

    SimpleMaterialUnrecPtr mat = SimpleMaterial::create();
    
    mat->setDiffuse(Color3f(1,1,1));
    mat->setLit    (false         );
    mat->addChunk  (tx1o          );
    mat->addChunk  (tx1e          );

    PolygonForegroundUnrecPtr pFG =  PolygonForeground::create();

    pFG->setMaterial(mat);

    MFPnt2f *pPos = pFG->editMFPositions();
    MFVec3f *pTex = pFG->editMFTexCoords();

    pPos->push_back(Pnt2f(0.0f, 0.0f));
    pPos->push_back(Pnt2f(0.3f, 0.0f));
    pPos->push_back(Pnt2f(0.3f, 0.3f));
    pPos->push_back(Pnt2f(0.0f, 0.3f));

    pTex->push_back(Vec3f(0.0f, 1.0f, 0.0f));
    pTex->push_back(Vec3f(1.0f, 1.0f, 0.0f));
    pTex->push_back(Vec3f(1.0f, 0.0f, 0.0f));
    pTex->push_back(Vec3f(0.0f, 0.0f, 0.0f));

    vpPlane->addForeground(pFG);
}

int doMain (int argc, char **argv)
{
    osgInit(argc,argv);
    
    // GLUT init

    glutInit(&argc, argv);
    glutInitDisplayMode( GLUT_RGBA | GLUT_DEPTH | GLUT_DOUBLE | GLUT_STENCIL);
    int winid = glutCreateWindow("OpenSG");
    glutKeyboardFunc(key);
    glutVisibilityFunc(vis);
    glutReshapeFunc(reshape);
    glutDisplayFunc(display);       
    glutMouseFunc(mouse);   
    glutMotionFunc(motion); 
    
    glutIdleFunc(display);  

    // glPolygonMode( GL_FRONT_AND_BACK, GL_LINE );
    
    glEnable( GL_DEPTH_TEST );
    glEnable( GL_LIGHTING );
    glEnable( GL_LIGHT0 );

    // OSG

    SceneFileHandler::the()->print();

    // create shared texture

    tx1o = TextureObjChunk::create();
    tx1e = TextureEnvChunk::create();

    // create the graph

    initRTStage();

    initScene(argc, argv);


    // Window
    std::cout << "GLUT winid: " << winid << std::endl;

    GLUTWindowUnrecPtr gwin;

    GLint glvp[4];

    glGetIntegerv(GL_VIEWPORT, glvp);

    gwin = GLUTWindow::create();

    gwin->setGlutId(winid           );
    gwin->setSize(glvp[2], glvp[3]);

    win = gwin;

//    win->addPort(vpScene);
    win->addPort(vpPlane);

    win->init();

    // Action
    
    rentravact = RenderAction::create();
    rentravact->setFrustumCulling(false);

    // tball

    Vec3f pos;
    pos.setValues(min[0] + ((max[0] - min[0]) * 0.5), 
                  min[1] + ((max[1] - min[1]) * 0.5), 
                  max[2] + ( max[2] - min[2] ) * 1.5  + 2.f);
    
    float scale = (max[2] - min[2] + max[1] - min[1] + max[0] - min[0]) / 6;

    Pnt3f tCenter(min[0] + (max[0] - min[0]) / 2,
                  min[1] + (max[1] - min[1]) / 2,
                  min[2] + (max[2] - min[2]) / 2);


//    Quaternion q;
//    pos.setValues(0.000000, 0.000000, 1.942173);
//    q.setValueAsQuat(0.911936, -0.384058, 0.115685, -0.086538);
//0.079669 0.330959 -0.201149 0.918509

    tball.setMode( Trackball::OSGObject );
    tball.setStartPosition( pos, true );
//    tball.setStartRotation(q, true);
    tball.setSum( true );
    tball.setTranslationMode( Trackball::OSGFree );
    tball.setTranslationScale(scale);
    tball.setRotationCenter(tCenter);

    return 0;
}

int main (int argc, char **argv)
{
    doMain(argc, argv);

    glutMainLoop();
    
    return 0;
}
