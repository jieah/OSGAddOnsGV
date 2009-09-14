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
 **     class RTTarget!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGRTTargetBase.h"
#include "OSGRTTarget.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::RTTarget
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var UInt32          RTTargetBase::_sfWidth
    
*/

/*! \var UInt32          RTTargetBase::_sfHeight
    
*/


void RTTargetBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "width",
        "",
        WidthFieldId, WidthFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&RTTarget::editHandleWidth),
        static_cast<FieldGetMethodSig >(&RTTarget::getHandleWidth));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "height",
        "",
        HeightFieldId, HeightFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&RTTarget::editHandleHeight),
        static_cast<FieldGetMethodSig >(&RTTarget::getHandleHeight));

    oType.addInitialDesc(pDesc);
}


RTTargetBase::TypeObject RTTargetBase::_type(
    RTTargetBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&RTTargetBase::createEmptyLocal),
    RTTarget::initMethod,
    RTTarget::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&RTTargetBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"RTTarget\"\n"
    "    parent=\"FieldContainer\"\n"
    "    library=\"ContribRRT\"\n"
    "    pointerfieldtypes=\"single\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    libnamespace=\"OSG\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"width\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"height\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &RTTargetBase::getType(void)
{
    return _type;
}

const FieldContainerType &RTTargetBase::getType(void) const
{
    return _type;
}

UInt32 RTTargetBase::getContainerSize(void) const
{
    return sizeof(RTTarget);
}

/*------------------------- decorator get ------------------------------*/


SFUInt32 *RTTargetBase::editSFWidth(void)
{
    editSField(WidthFieldMask);

    return &_sfWidth;
}

const SFUInt32 *RTTargetBase::getSFWidth(void) const
{
    return &_sfWidth;
}


SFUInt32 *RTTargetBase::editSFHeight(void)
{
    editSField(HeightFieldMask);

    return &_sfHeight;
}

const SFUInt32 *RTTargetBase::getSFHeight(void) const
{
    return &_sfHeight;
}






/*------------------------------ access -----------------------------------*/

UInt32 RTTargetBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        returnValue += _sfWidth.getBinSize();
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        returnValue += _sfHeight.getBinSize();
    }

    return returnValue;
}

void RTTargetBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyToBin(pMem);
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        _sfHeight.copyToBin(pMem);
    }
}

void RTTargetBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        _sfHeight.copyFromBin(pMem);
    }
}

//! create a new instance of the class
RTTargetTransitPtr RTTargetBase::createLocal(BitVector bFlags)
{
    RTTargetTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<RTTarget>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
RTTargetTransitPtr RTTargetBase::create(void)
{
    RTTargetTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<RTTarget>(tmpPtr);
    }

    return fc;
}

RTTarget *RTTargetBase::createEmptyLocal(BitVector bFlags)
{
    RTTarget *returnValue;

    newPtr<RTTarget>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
RTTarget *RTTargetBase::createEmpty(void)
{
    RTTarget *returnValue;

    newPtr<RTTarget>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr RTTargetBase::shallowCopyLocal(
    BitVector bFlags) const
{
    RTTarget *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const RTTarget *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr RTTargetBase::shallowCopy(void) const
{
    RTTarget *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const RTTarget *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

RTTargetBase::RTTargetBase(void) :
    Inherited(),
    _sfWidth                  (),
    _sfHeight                 ()
{
}

RTTargetBase::RTTargetBase(const RTTargetBase &source) :
    Inherited(source),
    _sfWidth                  (source._sfWidth                  ),
    _sfHeight                 (source._sfHeight                 )
{
}


/*-------------------------- destructors ----------------------------------*/

RTTargetBase::~RTTargetBase(void)
{
}


GetFieldHandlePtr RTTargetBase::getHandleWidth           (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfWidth,
             this->getType().getFieldDesc(WidthFieldId)));

    return returnValue;
}

EditFieldHandlePtr RTTargetBase::editHandleWidth          (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfWidth,
             this->getType().getFieldDesc(WidthFieldId)));


    editSField(WidthFieldMask);

    return returnValue;
}

GetFieldHandlePtr RTTargetBase::getHandleHeight          (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfHeight,
             this->getType().getFieldDesc(HeightFieldId)));

    return returnValue;
}

EditFieldHandlePtr RTTargetBase::editHandleHeight         (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfHeight,
             this->getType().getFieldDesc(HeightFieldId)));


    editSField(HeightFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void RTTargetBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    RTTarget *pThis = static_cast<RTTarget *>(this);

    pThis->execSync(static_cast<RTTarget *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *RTTargetBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    RTTarget *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const RTTarget *>(pRefAspect),
                  dynamic_cast<const RTTarget *>(this));

    return returnValue;
}
#endif

void RTTargetBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<RTTarget *>::_type("RTTargetPtr", "FieldContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(RTTarget *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           RTTarget *,
                           0);


OSG_END_NAMESPACE
