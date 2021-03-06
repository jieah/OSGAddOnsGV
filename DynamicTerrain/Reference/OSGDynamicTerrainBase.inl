/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class DynamicTerrain!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &DynamicTerrainBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 DynamicTerrainBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
DynamicTerrainPtr DynamicTerrainBase::create(void) 
{
    DynamicTerrainPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = DynamicTerrainPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
DynamicTerrainPtr DynamicTerrainBase::createEmpty(void) 
{ 
    DynamicTerrainPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the DynamicTerrain::_sfLevelSize field.
inline
const SFInt32 *DynamicTerrainBase::getSFLevelSize(void) const
{
    return &_sfLevelSize;
}

//! Get the DynamicTerrain::_sfLevelSize field.
inline
SFInt32 *DynamicTerrainBase::editSFLevelSize(void)
{
    return &_sfLevelSize;
}

#ifndef OSG_2_PREP
//! Get the DynamicTerrain::_sfLevelSize field.
inline
SFInt32 *DynamicTerrainBase::getSFLevelSize(void)
{
    return &_sfLevelSize;
}
#endif

//! Get the DynamicTerrain::_sfHeightData field.
inline
const SFImagePtr *DynamicTerrainBase::getSFHeightData(void) const
{
    return &_sfHeightData;
}

//! Get the DynamicTerrain::_sfHeightData field.
inline
SFImagePtr *DynamicTerrainBase::editSFHeightData(void)
{
    return &_sfHeightData;
}

#ifndef OSG_2_PREP
//! Get the DynamicTerrain::_sfHeightData field.
inline
SFImagePtr *DynamicTerrainBase::getSFHeightData(void)
{
    return &_sfHeightData;
}
#endif

//! Get the DynamicTerrain::_sfHeightDataScale field.
inline
const SFReal32 *DynamicTerrainBase::getSFHeightDataScale(void) const
{
    return &_sfHeightDataScale;
}

//! Get the DynamicTerrain::_sfHeightDataScale field.
inline
SFReal32 *DynamicTerrainBase::editSFHeightDataScale(void)
{
    return &_sfHeightDataScale;
}

#ifndef OSG_2_PREP
//! Get the DynamicTerrain::_sfHeightDataScale field.
inline
SFReal32 *DynamicTerrainBase::getSFHeightDataScale(void)
{
    return &_sfHeightDataScale;
}
#endif

//! Get the DynamicTerrain::_sfHeightDataOffset field.
inline
const SFReal32 *DynamicTerrainBase::getSFHeightDataOffset(void) const
{
    return &_sfHeightDataOffset;
}

//! Get the DynamicTerrain::_sfHeightDataOffset field.
inline
SFReal32 *DynamicTerrainBase::editSFHeightDataOffset(void)
{
    return &_sfHeightDataOffset;
}

#ifndef OSG_2_PREP
//! Get the DynamicTerrain::_sfHeightDataOffset field.
inline
SFReal32 *DynamicTerrainBase::getSFHeightDataOffset(void)
{
    return &_sfHeightDataOffset;
}
#endif

//! Get the DynamicTerrain::_sfSampleDistance field.
inline
const SFReal32 *DynamicTerrainBase::getSFSampleDistance(void) const
{
    return &_sfSampleDistance;
}

//! Get the DynamicTerrain::_sfSampleDistance field.
inline
SFReal32 *DynamicTerrainBase::editSFSampleDistance(void)
{
    return &_sfSampleDistance;
}

#ifndef OSG_2_PREP
//! Get the DynamicTerrain::_sfSampleDistance field.
inline
SFReal32 *DynamicTerrainBase::getSFSampleDistance(void)
{
    return &_sfSampleDistance;
}
#endif

//! Get the DynamicTerrain::_sfTextureData field.
inline
const SFImagePtr *DynamicTerrainBase::getSFTextureData(void) const
{
    return &_sfTextureData;
}

//! Get the DynamicTerrain::_sfTextureData field.
inline
SFImagePtr *DynamicTerrainBase::editSFTextureData(void)
{
    return &_sfTextureData;
}

#ifndef OSG_2_PREP
//! Get the DynamicTerrain::_sfTextureData field.
inline
SFImagePtr *DynamicTerrainBase::getSFTextureData(void)
{
    return &_sfTextureData;
}
#endif

//! Get the DynamicTerrain::_sfHeightColorTexture field.
inline
const SFTextureChunkPtr *DynamicTerrainBase::getSFHeightColorTexture(void) const
{
    return &_sfHeightColorTexture;
}

//! Get the DynamicTerrain::_sfHeightColorTexture field.
inline
SFTextureChunkPtr *DynamicTerrainBase::editSFHeightColorTexture(void)
{
    return &_sfHeightColorTexture;
}

#ifndef OSG_2_PREP
//! Get the DynamicTerrain::_sfHeightColorTexture field.
inline
SFTextureChunkPtr *DynamicTerrainBase::getSFHeightColorTexture(void)
{
    return &_sfHeightColorTexture;
}
#endif

//! Get the DynamicTerrain::_sfSampleUpdateBudget field.
inline
const SFInt32 *DynamicTerrainBase::getSFSampleUpdateBudget(void) const
{
    return &_sfSampleUpdateBudget;
}

//! Get the DynamicTerrain::_sfSampleUpdateBudget field.
inline
SFInt32 *DynamicTerrainBase::editSFSampleUpdateBudget(void)
{
    return &_sfSampleUpdateBudget;
}

#ifndef OSG_2_PREP
//! Get the DynamicTerrain::_sfSampleUpdateBudget field.
inline
SFInt32 *DynamicTerrainBase::getSFSampleUpdateBudget(void)
{
    return &_sfSampleUpdateBudget;
}
#endif

//! Get the DynamicTerrain::_sfEnableFrustumCulling field.
inline
const SFBool *DynamicTerrainBase::getSFEnableFrustumCulling(void) const
{
    return &_sfEnableFrustumCulling;
}

//! Get the DynamicTerrain::_sfEnableFrustumCulling field.
inline
SFBool *DynamicTerrainBase::editSFEnableFrustumCulling(void)
{
    return &_sfEnableFrustumCulling;
}

#ifndef OSG_2_PREP
//! Get the DynamicTerrain::_sfEnableFrustumCulling field.
inline
SFBool *DynamicTerrainBase::getSFEnableFrustumCulling(void)
{
    return &_sfEnableFrustumCulling;
}
#endif

//! Get the DynamicTerrain::_sfUseGpuRenderer field.
inline
const SFBool *DynamicTerrainBase::getSFUseGpuRenderer(void) const
{
    return &_sfUseGpuRenderer;
}

//! Get the DynamicTerrain::_sfUseGpuRenderer field.
inline
SFBool *DynamicTerrainBase::editSFUseGpuRenderer(void)
{
    return &_sfUseGpuRenderer;
}

#ifndef OSG_2_PREP
//! Get the DynamicTerrain::_sfUseGpuRenderer field.
inline
SFBool *DynamicTerrainBase::getSFUseGpuRenderer(void)
{
    return &_sfUseGpuRenderer;
}
#endif

//! Get the DynamicTerrain::_sfUseVboExtension field.
inline
const SFBool *DynamicTerrainBase::getSFUseVboExtension(void) const
{
    return &_sfUseVboExtension;
}

//! Get the DynamicTerrain::_sfUseVboExtension field.
inline
SFBool *DynamicTerrainBase::editSFUseVboExtension(void)
{
    return &_sfUseVboExtension;
}

#ifndef OSG_2_PREP
//! Get the DynamicTerrain::_sfUseVboExtension field.
inline
SFBool *DynamicTerrainBase::getSFUseVboExtension(void)
{
    return &_sfUseVboExtension;
}
#endif

//! Get the DynamicTerrain::_sfEnableSmoothTransition field.
inline
const SFBool *DynamicTerrainBase::getSFEnableSmoothTransition(void) const
{
    return &_sfEnableSmoothTransition;
}

//! Get the DynamicTerrain::_sfEnableSmoothTransition field.
inline
SFBool *DynamicTerrainBase::editSFEnableSmoothTransition(void)
{
    return &_sfEnableSmoothTransition;
}

#ifndef OSG_2_PREP
//! Get the DynamicTerrain::_sfEnableSmoothTransition field.
inline
SFBool *DynamicTerrainBase::getSFEnableSmoothTransition(void)
{
    return &_sfEnableSmoothTransition;
}
#endif

//! Get the DynamicTerrain::_sfShowBoundingBoxes field.
inline
const SFBool *DynamicTerrainBase::getSFShowBoundingBoxes(void) const
{
    return &_sfShowBoundingBoxes;
}

//! Get the DynamicTerrain::_sfShowBoundingBoxes field.
inline
SFBool *DynamicTerrainBase::editSFShowBoundingBoxes(void)
{
    return &_sfShowBoundingBoxes;
}

#ifndef OSG_2_PREP
//! Get the DynamicTerrain::_sfShowBoundingBoxes field.
inline
SFBool *DynamicTerrainBase::getSFShowBoundingBoxes(void)
{
    return &_sfShowBoundingBoxes;
}
#endif

//! Get the DynamicTerrain::_sfShowTransitionRegions field.
inline
const SFBool *DynamicTerrainBase::getSFShowTransitionRegions(void) const
{
    return &_sfShowTransitionRegions;
}

//! Get the DynamicTerrain::_sfShowTransitionRegions field.
inline
SFBool *DynamicTerrainBase::editSFShowTransitionRegions(void)
{
    return &_sfShowTransitionRegions;
}

#ifndef OSG_2_PREP
//! Get the DynamicTerrain::_sfShowTransitionRegions field.
inline
SFBool *DynamicTerrainBase::getSFShowTransitionRegions(void)
{
    return &_sfShowTransitionRegions;
}
#endif

//! Get the DynamicTerrain::_sfDisableUpdate field.
inline
const SFBool *DynamicTerrainBase::getSFDisableUpdate(void) const
{
    return &_sfDisableUpdate;
}

//! Get the DynamicTerrain::_sfDisableUpdate field.
inline
SFBool *DynamicTerrainBase::editSFDisableUpdate(void)
{
    return &_sfDisableUpdate;
}

#ifndef OSG_2_PREP
//! Get the DynamicTerrain::_sfDisableUpdate field.
inline
SFBool *DynamicTerrainBase::getSFDisableUpdate(void)
{
    return &_sfDisableUpdate;
}
#endif

//! Get the DynamicTerrain::_sfCpuVertexProgram field.
inline
const SFString *DynamicTerrainBase::getSFCpuVertexProgram(void) const
{
    return &_sfCpuVertexProgram;
}

//! Get the DynamicTerrain::_sfCpuVertexProgram field.
inline
SFString *DynamicTerrainBase::editSFCpuVertexProgram(void)
{
    return &_sfCpuVertexProgram;
}

#ifndef OSG_2_PREP
//! Get the DynamicTerrain::_sfCpuVertexProgram field.
inline
SFString *DynamicTerrainBase::getSFCpuVertexProgram(void)
{
    return &_sfCpuVertexProgram;
}
#endif

//! Get the DynamicTerrain::_sfCpuFragmentProgram field.
inline
const SFString *DynamicTerrainBase::getSFCpuFragmentProgram(void) const
{
    return &_sfCpuFragmentProgram;
}

//! Get the DynamicTerrain::_sfCpuFragmentProgram field.
inline
SFString *DynamicTerrainBase::editSFCpuFragmentProgram(void)
{
    return &_sfCpuFragmentProgram;
}

#ifndef OSG_2_PREP
//! Get the DynamicTerrain::_sfCpuFragmentProgram field.
inline
SFString *DynamicTerrainBase::getSFCpuFragmentProgram(void)
{
    return &_sfCpuFragmentProgram;
}
#endif


//! Get the value of the DynamicTerrain::_sfLevelSize field.
inline
Int32 &DynamicTerrainBase::editLevelSize(void)
{
    return _sfLevelSize.getValue();
}

//! Get the value of the DynamicTerrain::_sfLevelSize field.
inline
const Int32 &DynamicTerrainBase::getLevelSize(void) const
{
    return _sfLevelSize.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the DynamicTerrain::_sfLevelSize field.
inline
Int32 &DynamicTerrainBase::getLevelSize(void)
{
    return _sfLevelSize.getValue();
}
#endif

//! Set the value of the DynamicTerrain::_sfLevelSize field.
inline
void DynamicTerrainBase::setLevelSize(const Int32 &value)
{
    _sfLevelSize.setValue(value);
}

//! Get the value of the DynamicTerrain::_sfHeightData field.
inline
ImagePtr &DynamicTerrainBase::editHeightData(void)
{
    return _sfHeightData.getValue();
}

//! Get the value of the DynamicTerrain::_sfHeightData field.
inline
const ImagePtr &DynamicTerrainBase::getHeightData(void) const
{
    return _sfHeightData.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the DynamicTerrain::_sfHeightData field.
inline
ImagePtr &DynamicTerrainBase::getHeightData(void)
{
    return _sfHeightData.getValue();
}
#endif

//! Set the value of the DynamicTerrain::_sfHeightData field.
inline
void DynamicTerrainBase::setHeightData(const ImagePtr &value)
{
    _sfHeightData.setValue(value);
}

//! Get the value of the DynamicTerrain::_sfHeightDataScale field.
inline
Real32 &DynamicTerrainBase::editHeightDataScale(void)
{
    return _sfHeightDataScale.getValue();
}

//! Get the value of the DynamicTerrain::_sfHeightDataScale field.
inline
const Real32 &DynamicTerrainBase::getHeightDataScale(void) const
{
    return _sfHeightDataScale.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the DynamicTerrain::_sfHeightDataScale field.
inline
Real32 &DynamicTerrainBase::getHeightDataScale(void)
{
    return _sfHeightDataScale.getValue();
}
#endif

//! Set the value of the DynamicTerrain::_sfHeightDataScale field.
inline
void DynamicTerrainBase::setHeightDataScale(const Real32 &value)
{
    _sfHeightDataScale.setValue(value);
}

//! Get the value of the DynamicTerrain::_sfHeightDataOffset field.
inline
Real32 &DynamicTerrainBase::editHeightDataOffset(void)
{
    return _sfHeightDataOffset.getValue();
}

//! Get the value of the DynamicTerrain::_sfHeightDataOffset field.
inline
const Real32 &DynamicTerrainBase::getHeightDataOffset(void) const
{
    return _sfHeightDataOffset.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the DynamicTerrain::_sfHeightDataOffset field.
inline
Real32 &DynamicTerrainBase::getHeightDataOffset(void)
{
    return _sfHeightDataOffset.getValue();
}
#endif

//! Set the value of the DynamicTerrain::_sfHeightDataOffset field.
inline
void DynamicTerrainBase::setHeightDataOffset(const Real32 &value)
{
    _sfHeightDataOffset.setValue(value);
}

//! Get the value of the DynamicTerrain::_sfSampleDistance field.
inline
Real32 &DynamicTerrainBase::editSampleDistance(void)
{
    return _sfSampleDistance.getValue();
}

//! Get the value of the DynamicTerrain::_sfSampleDistance field.
inline
const Real32 &DynamicTerrainBase::getSampleDistance(void) const
{
    return _sfSampleDistance.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the DynamicTerrain::_sfSampleDistance field.
inline
Real32 &DynamicTerrainBase::getSampleDistance(void)
{
    return _sfSampleDistance.getValue();
}
#endif

//! Set the value of the DynamicTerrain::_sfSampleDistance field.
inline
void DynamicTerrainBase::setSampleDistance(const Real32 &value)
{
    _sfSampleDistance.setValue(value);
}

//! Get the value of the DynamicTerrain::_sfTextureData field.
inline
ImagePtr &DynamicTerrainBase::editTextureData(void)
{
    return _sfTextureData.getValue();
}

//! Get the value of the DynamicTerrain::_sfTextureData field.
inline
const ImagePtr &DynamicTerrainBase::getTextureData(void) const
{
    return _sfTextureData.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the DynamicTerrain::_sfTextureData field.
inline
ImagePtr &DynamicTerrainBase::getTextureData(void)
{
    return _sfTextureData.getValue();
}
#endif

//! Set the value of the DynamicTerrain::_sfTextureData field.
inline
void DynamicTerrainBase::setTextureData(const ImagePtr &value)
{
    _sfTextureData.setValue(value);
}

//! Get the value of the DynamicTerrain::_sfHeightColorTexture field.
inline
TextureChunkPtr &DynamicTerrainBase::editHeightColorTexture(void)
{
    return _sfHeightColorTexture.getValue();
}

//! Get the value of the DynamicTerrain::_sfHeightColorTexture field.
inline
const TextureChunkPtr &DynamicTerrainBase::getHeightColorTexture(void) const
{
    return _sfHeightColorTexture.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the DynamicTerrain::_sfHeightColorTexture field.
inline
TextureChunkPtr &DynamicTerrainBase::getHeightColorTexture(void)
{
    return _sfHeightColorTexture.getValue();
}
#endif

//! Set the value of the DynamicTerrain::_sfHeightColorTexture field.
inline
void DynamicTerrainBase::setHeightColorTexture(const TextureChunkPtr &value)
{
    _sfHeightColorTexture.setValue(value);
}

//! Get the value of the DynamicTerrain::_sfSampleUpdateBudget field.
inline
Int32 &DynamicTerrainBase::editSampleUpdateBudget(void)
{
    return _sfSampleUpdateBudget.getValue();
}

//! Get the value of the DynamicTerrain::_sfSampleUpdateBudget field.
inline
const Int32 &DynamicTerrainBase::getSampleUpdateBudget(void) const
{
    return _sfSampleUpdateBudget.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the DynamicTerrain::_sfSampleUpdateBudget field.
inline
Int32 &DynamicTerrainBase::getSampleUpdateBudget(void)
{
    return _sfSampleUpdateBudget.getValue();
}
#endif

//! Set the value of the DynamicTerrain::_sfSampleUpdateBudget field.
inline
void DynamicTerrainBase::setSampleUpdateBudget(const Int32 &value)
{
    _sfSampleUpdateBudget.setValue(value);
}

//! Get the value of the DynamicTerrain::_sfEnableFrustumCulling field.
inline
bool &DynamicTerrainBase::editEnableFrustumCulling(void)
{
    return _sfEnableFrustumCulling.getValue();
}

//! Get the value of the DynamicTerrain::_sfEnableFrustumCulling field.
inline
const bool &DynamicTerrainBase::getEnableFrustumCulling(void) const
{
    return _sfEnableFrustumCulling.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the DynamicTerrain::_sfEnableFrustumCulling field.
inline
bool &DynamicTerrainBase::getEnableFrustumCulling(void)
{
    return _sfEnableFrustumCulling.getValue();
}
#endif

//! Set the value of the DynamicTerrain::_sfEnableFrustumCulling field.
inline
void DynamicTerrainBase::setEnableFrustumCulling(const bool &value)
{
    _sfEnableFrustumCulling.setValue(value);
}

//! Get the value of the DynamicTerrain::_sfUseGpuRenderer field.
inline
bool &DynamicTerrainBase::editUseGpuRenderer(void)
{
    return _sfUseGpuRenderer.getValue();
}

//! Get the value of the DynamicTerrain::_sfUseGpuRenderer field.
inline
const bool &DynamicTerrainBase::getUseGpuRenderer(void) const
{
    return _sfUseGpuRenderer.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the DynamicTerrain::_sfUseGpuRenderer field.
inline
bool &DynamicTerrainBase::getUseGpuRenderer(void)
{
    return _sfUseGpuRenderer.getValue();
}
#endif

//! Set the value of the DynamicTerrain::_sfUseGpuRenderer field.
inline
void DynamicTerrainBase::setUseGpuRenderer(const bool &value)
{
    _sfUseGpuRenderer.setValue(value);
}

//! Get the value of the DynamicTerrain::_sfUseVboExtension field.
inline
bool &DynamicTerrainBase::editUseVboExtension(void)
{
    return _sfUseVboExtension.getValue();
}

//! Get the value of the DynamicTerrain::_sfUseVboExtension field.
inline
const bool &DynamicTerrainBase::getUseVboExtension(void) const
{
    return _sfUseVboExtension.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the DynamicTerrain::_sfUseVboExtension field.
inline
bool &DynamicTerrainBase::getUseVboExtension(void)
{
    return _sfUseVboExtension.getValue();
}
#endif

//! Set the value of the DynamicTerrain::_sfUseVboExtension field.
inline
void DynamicTerrainBase::setUseVboExtension(const bool &value)
{
    _sfUseVboExtension.setValue(value);
}

//! Get the value of the DynamicTerrain::_sfEnableSmoothTransition field.
inline
bool &DynamicTerrainBase::editEnableSmoothTransition(void)
{
    return _sfEnableSmoothTransition.getValue();
}

//! Get the value of the DynamicTerrain::_sfEnableSmoothTransition field.
inline
const bool &DynamicTerrainBase::getEnableSmoothTransition(void) const
{
    return _sfEnableSmoothTransition.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the DynamicTerrain::_sfEnableSmoothTransition field.
inline
bool &DynamicTerrainBase::getEnableSmoothTransition(void)
{
    return _sfEnableSmoothTransition.getValue();
}
#endif

//! Set the value of the DynamicTerrain::_sfEnableSmoothTransition field.
inline
void DynamicTerrainBase::setEnableSmoothTransition(const bool &value)
{
    _sfEnableSmoothTransition.setValue(value);
}

//! Get the value of the DynamicTerrain::_sfShowBoundingBoxes field.
inline
bool &DynamicTerrainBase::editShowBoundingBoxes(void)
{
    return _sfShowBoundingBoxes.getValue();
}

//! Get the value of the DynamicTerrain::_sfShowBoundingBoxes field.
inline
const bool &DynamicTerrainBase::getShowBoundingBoxes(void) const
{
    return _sfShowBoundingBoxes.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the DynamicTerrain::_sfShowBoundingBoxes field.
inline
bool &DynamicTerrainBase::getShowBoundingBoxes(void)
{
    return _sfShowBoundingBoxes.getValue();
}
#endif

//! Set the value of the DynamicTerrain::_sfShowBoundingBoxes field.
inline
void DynamicTerrainBase::setShowBoundingBoxes(const bool &value)
{
    _sfShowBoundingBoxes.setValue(value);
}

//! Get the value of the DynamicTerrain::_sfShowTransitionRegions field.
inline
bool &DynamicTerrainBase::editShowTransitionRegions(void)
{
    return _sfShowTransitionRegions.getValue();
}

//! Get the value of the DynamicTerrain::_sfShowTransitionRegions field.
inline
const bool &DynamicTerrainBase::getShowTransitionRegions(void) const
{
    return _sfShowTransitionRegions.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the DynamicTerrain::_sfShowTransitionRegions field.
inline
bool &DynamicTerrainBase::getShowTransitionRegions(void)
{
    return _sfShowTransitionRegions.getValue();
}
#endif

//! Set the value of the DynamicTerrain::_sfShowTransitionRegions field.
inline
void DynamicTerrainBase::setShowTransitionRegions(const bool &value)
{
    _sfShowTransitionRegions.setValue(value);
}

//! Get the value of the DynamicTerrain::_sfDisableUpdate field.
inline
bool &DynamicTerrainBase::editDisableUpdate(void)
{
    return _sfDisableUpdate.getValue();
}

//! Get the value of the DynamicTerrain::_sfDisableUpdate field.
inline
const bool &DynamicTerrainBase::getDisableUpdate(void) const
{
    return _sfDisableUpdate.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the DynamicTerrain::_sfDisableUpdate field.
inline
bool &DynamicTerrainBase::getDisableUpdate(void)
{
    return _sfDisableUpdate.getValue();
}
#endif

//! Set the value of the DynamicTerrain::_sfDisableUpdate field.
inline
void DynamicTerrainBase::setDisableUpdate(const bool &value)
{
    _sfDisableUpdate.setValue(value);
}

//! Get the value of the DynamicTerrain::_sfCpuVertexProgram field.
inline
std::string &DynamicTerrainBase::editCpuVertexProgram(void)
{
    return _sfCpuVertexProgram.getValue();
}

//! Get the value of the DynamicTerrain::_sfCpuVertexProgram field.
inline
const std::string &DynamicTerrainBase::getCpuVertexProgram(void) const
{
    return _sfCpuVertexProgram.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the DynamicTerrain::_sfCpuVertexProgram field.
inline
std::string &DynamicTerrainBase::getCpuVertexProgram(void)
{
    return _sfCpuVertexProgram.getValue();
}
#endif

//! Set the value of the DynamicTerrain::_sfCpuVertexProgram field.
inline
void DynamicTerrainBase::setCpuVertexProgram(const std::string &value)
{
    _sfCpuVertexProgram.setValue(value);
}

//! Get the value of the DynamicTerrain::_sfCpuFragmentProgram field.
inline
std::string &DynamicTerrainBase::editCpuFragmentProgram(void)
{
    return _sfCpuFragmentProgram.getValue();
}

//! Get the value of the DynamicTerrain::_sfCpuFragmentProgram field.
inline
const std::string &DynamicTerrainBase::getCpuFragmentProgram(void) const
{
    return _sfCpuFragmentProgram.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the DynamicTerrain::_sfCpuFragmentProgram field.
inline
std::string &DynamicTerrainBase::getCpuFragmentProgram(void)
{
    return _sfCpuFragmentProgram.getValue();
}
#endif

//! Set the value of the DynamicTerrain::_sfCpuFragmentProgram field.
inline
void DynamicTerrainBase::setCpuFragmentProgram(const std::string &value)
{
    _sfCpuFragmentProgram.setValue(value);
}


OSG_END_NAMESPACE

#define OSGDYNAMICTERRAINBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.22 2008/06/09 12:26:59 vossg Exp $"

