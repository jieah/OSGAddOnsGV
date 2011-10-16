/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
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
 **     class LabelForeground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"



#include "OSGTextureEnvChunk.h"         // TextureEnvironment Class

#include "OSGLabelForegroundBase.h"
#include "OSGLabelForeground.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::LabelForeground
    \ingroup GrpSystemWindowForegroundsStatistics

    LabelForeground displays the labels of the scenegraph as a text representation close to the projected location of the label in pixelOffset distance.

    See \ref PageSystemWindowForegroundLabelSimple
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Real32          LabelForegroundBase::_sfImportanceThreshold
    Only labels with an importance value equal/greater than the
    importanceThreshold will be displayed. The default value for
    importanceThreshold is 0, i.e. all labels are displayed.
    The range of the importanceThreshold is up to you. We suggest [0,1].
*/

/*! \var TextureEnvChunk * LabelForegroundBase::_sfTextureEnvironment
    Internal texture object representing the label.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<LabelForeground *, nsOSG>::_type(
    "LabelForegroundPtr", 
    "ForegroundPtr", 
    LabelForeground::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(LabelForeground *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           LabelForeground *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           LabelForeground *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void LabelForegroundBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "importanceThreshold",
        "Only labels with an importance value equal/greater than the\n"
        "importanceThreshold will be displayed. The default value for\n"
        "importanceThreshold is 0, i.e. all labels are displayed.\n"
        "The range of the importanceThreshold is up to you. We suggest [0,1].\n",
        ImportanceThresholdFieldId, ImportanceThresholdFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&LabelForeground::editHandleImportanceThreshold),
        static_cast<FieldGetMethodSig >(&LabelForeground::getHandleImportanceThreshold));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecTextureEnvChunkPtr::Description(
        SFUnrecTextureEnvChunkPtr::getClassType(),
        "textureEnvironment",
        "Internal texture object representing the label.\n",
        TextureEnvironmentFieldId, TextureEnvironmentFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&LabelForeground::editHandleTextureEnvironment),
        static_cast<FieldGetMethodSig >(&LabelForeground::getHandleTextureEnvironment));

    oType.addInitialDesc(pDesc);
}


LabelForegroundBase::TypeObject LabelForegroundBase::_type(
    LabelForegroundBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&LabelForegroundBase::createEmptyLocal),
    LabelForeground::initMethod,
    LabelForeground::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&LabelForeground::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"LabelForeground\"\n"
    "\tparent=\"Foreground\"\n"
    "\tlibrary=\"ContribLabeling\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    ">\n"
    "\\ingroup GrpSystemWindowForegroundsStatistics\n"
    "\n"
    "LabelForeground displays the labels of the scenegraph as a text representation close to the projected location of the label in pixelOffset distance.\n"
    "\n"
    "See \\ref PageSystemWindowForegroundLabelSimple\n"
    "\t<Field\n"
    "\t\tname=\"importanceThreshold\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tOnly labels with an importance value equal/greater than the\n"
    "        importanceThreshold will be displayed. The default value for\n"
    "        importanceThreshold is 0, i.e. all labels are displayed.\n"
    "        The range of the importanceThreshold is up to you. We suggest [0,1].\n"
    "\t</Field>\n"
    "\n"
    "\n"
    "  <!-- protected fields -->\n"
    "\t<Field\n"
    "\t\tname=\"textureEnvironment\"\n"
    "\t\ttype=\"TextureEnvChunk\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "                category=\"pointer\"\n"
    "\t>\n"
    "        Internal texture object representing the label.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemWindowForegroundsStatistics\n"
    "\n"
    "LabelForeground displays the labels of the scenegraph as a text representation close to the projected location of the label in pixelOffset distance.\n"
    "\n"
    "See \\ref PageSystemWindowForegroundLabelSimple\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &LabelForegroundBase::getType(void)
{
    return _type;
}

const FieldContainerType &LabelForegroundBase::getType(void) const
{
    return _type;
}

UInt32 LabelForegroundBase::getContainerSize(void) const
{
    return sizeof(LabelForeground);
}

/*------------------------- decorator get ------------------------------*/


SFReal32 *LabelForegroundBase::editSFImportanceThreshold(void)
{
    editSField(ImportanceThresholdFieldMask);

    return &_sfImportanceThreshold;
}

const SFReal32 *LabelForegroundBase::getSFImportanceThreshold(void) const
{
    return &_sfImportanceThreshold;
}


//! Get the LabelForeground::_sfTextureEnvironment field.
const SFUnrecTextureEnvChunkPtr *LabelForegroundBase::getSFTextureEnvironment(void) const
{
    return &_sfTextureEnvironment;
}

SFUnrecTextureEnvChunkPtr *LabelForegroundBase::editSFTextureEnvironment(void)
{
    editSField(TextureEnvironmentFieldMask);

    return &_sfTextureEnvironment;
}





/*------------------------------ access -----------------------------------*/

UInt32 LabelForegroundBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ImportanceThresholdFieldMask & whichField))
    {
        returnValue += _sfImportanceThreshold.getBinSize();
    }
    if(FieldBits::NoField != (TextureEnvironmentFieldMask & whichField))
    {
        returnValue += _sfTextureEnvironment.getBinSize();
    }

    return returnValue;
}

void LabelForegroundBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ImportanceThresholdFieldMask & whichField))
    {
        _sfImportanceThreshold.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TextureEnvironmentFieldMask & whichField))
    {
        _sfTextureEnvironment.copyToBin(pMem);
    }
}

void LabelForegroundBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ImportanceThresholdFieldMask & whichField))
    {
        editSField(ImportanceThresholdFieldMask);
        _sfImportanceThreshold.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TextureEnvironmentFieldMask & whichField))
    {
        editSField(TextureEnvironmentFieldMask);
        _sfTextureEnvironment.copyFromBin(pMem);
    }
}

//! create a new instance of the class
LabelForegroundTransitPtr LabelForegroundBase::createLocal(BitVector bFlags)
{
    LabelForegroundTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<LabelForeground>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
LabelForegroundTransitPtr LabelForegroundBase::createDependent(BitVector bFlags)
{
    LabelForegroundTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<LabelForeground>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
LabelForegroundTransitPtr LabelForegroundBase::create(void)
{
    LabelForegroundTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<LabelForeground>(tmpPtr);
    }

    return fc;
}

LabelForeground *LabelForegroundBase::createEmptyLocal(BitVector bFlags)
{
    LabelForeground *returnValue;

    newPtr<LabelForeground>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
LabelForeground *LabelForegroundBase::createEmpty(void)
{
    LabelForeground *returnValue;

    newPtr<LabelForeground>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr LabelForegroundBase::shallowCopyLocal(
    BitVector bFlags) const
{
    LabelForeground *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const LabelForeground *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr LabelForegroundBase::shallowCopyDependent(
    BitVector bFlags) const
{
    LabelForeground *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const LabelForeground *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr LabelForegroundBase::shallowCopy(void) const
{
    LabelForeground *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const LabelForeground *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

LabelForegroundBase::LabelForegroundBase(void) :
    Inherited(),
    _sfImportanceThreshold    (Real32(0)),
    _sfTextureEnvironment     (NULL)
{
}

LabelForegroundBase::LabelForegroundBase(const LabelForegroundBase &source) :
    Inherited(source),
    _sfImportanceThreshold    (source._sfImportanceThreshold    ),
    _sfTextureEnvironment     (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

LabelForegroundBase::~LabelForegroundBase(void)
{
}

void LabelForegroundBase::onCreate(const LabelForeground *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        LabelForeground *pThis = static_cast<LabelForeground *>(this);

        pThis->setTextureEnvironment(source->getTextureEnvironment());
    }
}

GetFieldHandlePtr LabelForegroundBase::getHandleImportanceThreshold (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfImportanceThreshold,
             this->getType().getFieldDesc(ImportanceThresholdFieldId),
             const_cast<LabelForegroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr LabelForegroundBase::editHandleImportanceThreshold(void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfImportanceThreshold,
             this->getType().getFieldDesc(ImportanceThresholdFieldId),
             this));


    editSField(ImportanceThresholdFieldMask);

    return returnValue;
}

GetFieldHandlePtr LabelForegroundBase::getHandleTextureEnvironment (void) const
{
    SFUnrecTextureEnvChunkPtr::GetHandlePtr returnValue(
        new  SFUnrecTextureEnvChunkPtr::GetHandle(
             &_sfTextureEnvironment,
             this->getType().getFieldDesc(TextureEnvironmentFieldId),
             const_cast<LabelForegroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr LabelForegroundBase::editHandleTextureEnvironment(void)
{
    SFUnrecTextureEnvChunkPtr::EditHandlePtr returnValue(
        new  SFUnrecTextureEnvChunkPtr::EditHandle(
             &_sfTextureEnvironment,
             this->getType().getFieldDesc(TextureEnvironmentFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&LabelForeground::setTextureEnvironment,
                    static_cast<LabelForeground *>(this), _1));

    editSField(TextureEnvironmentFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void LabelForegroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    LabelForeground *pThis = static_cast<LabelForeground *>(this);

    pThis->execSync(static_cast<LabelForeground *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *LabelForegroundBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    LabelForeground *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const LabelForeground *>(pRefAspect),
                  dynamic_cast<const LabelForeground *>(this));

    return returnValue;
}
#endif

void LabelForegroundBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<LabelForeground *>(this)->setTextureEnvironment(NULL);


}


OSG_END_NAMESPACE
