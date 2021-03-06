// OpenSG Tutorial Example: Hello World
//
// Minimalistic OpenSG cluster client program
// 
// To test it, run 
//   ./12ClusterServer -geometry 300x300+200+100 -m -w test1 &
//   ./12ClusterServer -geometry 300x300+500+100 -m -w test2 &
//   ./13ClusterClient -m -fData/tie.wrl test1 test2
//
// The client will open an emoty window that you can use to navigate. The
// display is shown in the server windows.
//
// This will run all three on the same machine, but you can also start the 
// servers anywhere else, as long as you can reach them via multicast.
//
// Note: This will run two VERY active OpenGL programs on one screen. Not all
// OpenGL drivers are happy with that, so if it crashes your X, it's not our
// fault! ;)

// GLUT is used for window handling
#include <OpenSG/OSGGLUT.h>

// General OpenSG configuration, needed everywhere
#include <OpenSG/OSGConfig.h>

// Methods to create simple geometry: boxes, spheres, tori etc.
#include <OpenSG/OSGSimpleGeometry.h>

// The GLUT-OpenSG connection class
#include <OpenSG/OSGGLUTWindow.h>

// A little helper to simplify scene management and interaction
#include <OpenSG/OSGSimpleSceneManager.h>

// A little helper to simplify scene management and interaction
#include <OpenSG/OSGMultiDisplayWindow.h>

// Scene file handler for loading geometry files
#include <OpenSG/OSGSceneFileHandler.h>

#include <OpenSG/OSGImageFileHandler.h>

#include <OpenSG/OSGTextureChunk.h>

#include "OSGDynamicTerrain.h"

// Activate the OpenSG namespace
OSG_USING_NAMESPACE

// The SimpleSceneManager to manage simple applications
SimpleSceneManager *mgr;

DynamicTerrainPtr		terrainNode;

const bool testHugeTerrain = false;
const bool testPerformance = false;

TextureChunkPtr makeTexture( const char* texname )
{
	ImagePtr heightData = ImageFileHandler::the().read(texname);
	TextureChunkPtr texChunkPtr   = TextureChunk::create();

	beginEditCP( texChunkPtr );
	{
		texChunkPtr->setImage( heightData);
		texChunkPtr->setWrapS( GL_CLAMP );
		texChunkPtr->setWrapT( GL_CLAMP );
		texChunkPtr->setWrapR( GL_CLAMP );

		texChunkPtr->setMinFilter( GL_LINEAR );
		texChunkPtr->setMagFilter( GL_LINEAR );
		texChunkPtr->setEnvMode( GL_MODULATE );
	}

	endEditCP( texChunkPtr );

	return texChunkPtr;
}


// forward declaration so we can have the interesting stuff upfront
int setupGLUT( int *argc, char *argv[] );

// Initialize GLUT & OpenSG and set up the scene
int main(int argc, char **argv)
{
    char     *opt;
    NodePtr   scene=NullFC;

    // OSG init
    ChangeList::setReadWriteDefault();
    osgInit(argc,argv);

    // GLUT init
    int winid = setupGLUT(&argc, argv);

    // the connection between this client and the servers
    MultiDisplayWindowPtr mwin= MultiDisplayWindow::create();

    // all changes must be enclosed in beginEditCP and endEditCP
    // otherwise the changes will not be transfered over the network.
    beginEditCP(mwin);

    // evaluate params
    for(int a=1 ; a<argc ; ++a)
    {
        if(argv[a][0] == '-')
        {
            switch(argv[a][1])
            {
                case 'm': mwin->setConnectionType("Multicast");
                          break;
                case 'p': mwin->setConnectionType("SockPipeline");
                          break;
                case 'i': opt = argv[a][2] ? argv[a]+2 : argv[++a];
                          if(opt != argv[argc])
                              mwin->setConnectionInterface(opt);
                          break;
                case 'f': opt = argv[a][2] ? argv[a]+2 : argv[++a];
                          if(opt != argv[argc])
                              scene = SceneFileHandler::the().read(
                                  opt,0);
                          break;
                case 'x': opt = argv[a][2] ? argv[a]+2 : argv[++a];
                          if(opt != argv[argc])
                              mwin->setHServers(atoi(opt));
                          break;
                case 'y': opt = argv[a][2] ? argv[a]+2 : argv[++a];
                          if(opt != argv[argc])
                              mwin->setVServers(atoi(opt));
                          break;
                default:  std::cout << argv[0]  
                                    << " -m"
                                    << " -p"
                                    << " -i interface"
                                    << " -f file"
                                    << " -x horizontal server cnt"
                                    << " -y vertical server cnt"
                                    << endLog;
                          return 0;
            }
        }
        else
        {
            printf("%s\n",argv[a]);
            mwin->getServers().push_back(argv[a]);
        }
    }

    // dummy size for navigator
    mwin->setSize(300,300);

    // end edit of cluster window
    endEditCP(mwin);

    // create default scene
    if(scene == NullFC)
	{
       //scene = makeTorus(.5, 2, 16, 16);
		// Create the DynamicTerrain Data:
		ImagePtr heightData;
		ImagePtr textureData;

		TextureChunkPtr texture = makeTexture( "ps_texture_1k.png" );;

		if( testHugeTerrain )
		{
			heightData = ImageFileHandler::the().read( "ps_height_16k.png" );	
			textureData = ImageFileHandler::the().read( "ps_texture_16k.png" );			
		}
		else
		{
			heightData = ImageFileHandler::the().read( "ps_height_1k.png" );
			textureData = ImageFileHandler::the().read( "ps_texture_1k.png" );	
		}

		terrainNode = DynamicTerrain::create();

		beginEditCP( terrainNode );
		
		if( testPerformance )
		{
			terrainNode->setLevelSize( 255 );
		}
		else
		{
			terrainNode->setLevelSize( 63 );		// use small level for debugging 
		}

		if( testHugeTerrain )
		{
			terrainNode->setHeightDataScale( 420.0f );
		}
		else
		{
			terrainNode->setHeightDataScale( 42.0f );
		}
		terrainNode->setHeightData( heightData );		
		terrainNode->setTextureData( textureData );
		terrainNode->setMaterial( getDefaultMaterial() );	
		terrainNode->setTexture( texture );

		endEditCP( terrainNode );

		scene = Node::create();
		beginEditCP(scene);
		scene->setCore( terrainNode );
		endEditCP(scene);

	}

    // create the SimpleSceneManager helper
    mgr = new SimpleSceneManager;

    // tell the manager what to manage
    mgr->setWindow(mwin );
    mgr->setRoot  (scene);

    // show the whole scene
    mgr->showAll();
    
    // initialize window
    mwin->init();
    
    // GLUT main loop
    glutMainLoop();

    return 0;
}

//
// GLUT callback functions
//

// redraw the window
void display(void)
{
    // redraw the cluster window
    mgr->redraw();
    // clear change list. If you don't clear the changelist,
    // then the same changes will be transmitted a second time
    // in the next frame. 
    OSG::Thread::getCurrentChangeList()->clearAll();
    // clear local navigation window
    glClear(GL_COLOR_BUFFER_BIT);
    glutSwapBuffers();
}

// react to size changes
void reshape(int w, int h)
{
    glutPostRedisplay();
}

// react to mouse button presses
void mouse(int button, int state, int x, int y)
{
    if (state)
        mgr->mouseButtonRelease(button, x, y);
    else
        mgr->mouseButtonPress(button, x, y);
    glutPostRedisplay();
}

// react to mouse motions with pressed buttons
void motion(int x, int y)
{
    mgr->mouseMove(x, y);
    glutPostRedisplay();
}

// react to keys
void keyboard(unsigned char k, int x, int y)
{
    switch(k)
    {
        case 27:    
        {
            OSG::osgExit();
            exit(0);
        }
        break;
    }
}

// setup the GLUT library which handles the windows for us
int setupGLUT(int *argc, char *argv[])
{
    glutInit(argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);
    
    int winid = glutCreateWindow("OpenSG");
    
    glutReshapeFunc(reshape);
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutKeyboardFunc(keyboard);

    return winid;
}
