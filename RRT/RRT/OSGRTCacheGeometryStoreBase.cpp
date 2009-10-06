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
 **     class RTCacheGeometryStore!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGGeometry.h"                // Geo Class
#include "OSGState.h"                   // State Class

#include "OSGRTCacheGeometryStoreBase.h"
#include "OSGRTCacheGeometryStore.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::RTCacheGeometryStore
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Geometry *      RTCacheGeometryStoreBase::_sfGeo
    
*/

/*! \var Matrix          RTCacheGeometryStoreBase::_sfMatrix
    
*/

/*! \var State *         RTCacheGeometryStoreBase::_sfState
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<RTCacheGeometryStore *>::_type("RTCacheGeometryStorePtr", "FieldContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(RTCacheGeometryStore *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           RTCacheGeometryStore *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           RTCacheGeometryStore *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void RTCacheGeometryStoreBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecGeometryPtr::Description(
        SFUnrecGeometryPtr::getClassType(),
        "geo",
        "",
        GeoFieldId, GeoFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&RTCacheGeometryStore::editHandleGeo),
        static_cast<FieldGetMethodSig >(&RTCacheGeometryStore::getHandleGeo));

    oType.addInitialDesc(pDesc);

    pDesc = new SFMatrix::Description(
        SFMatrix::getClassType(),
        "matrix",
        "",
        MatrixFieldId, MatrixFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&RTCacheGeometryStore::editHandleMatrix),
        static_cast<FieldGetMethodSig >(&RTCacheGeometryStore::getHandleMatrix));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecStatePtr::Description(
        SFUnrecStatePtr::getClassType(),
        "state",
        "",
        StateFieldId, StateFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&RTCacheGeometryStore::editHandleState),
        static_cast<FieldGetMethodSig >(&RTCacheGeometryStore::getHandleState));

    oType.addInitialDesc(pDesc);
}


RTCacheGeometryStoreBase::TypeObject RTCacheGeometryStoreBase::_type(
    RTCacheGeometryStoreBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&RTCacheGeometryStoreBase::createEmptyLocal),
    RTCacheGeometryStore::initMethod,
    RTCacheGeometryStore::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&RTCacheGeometryStore::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"RTCacheGeometryStore\"\n"
    "\tparent=\"FieldContainer\"\n"
    "\tlibrary=\"ContribRRT\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    "    isNodeCore=\"true\"\n"
    ">\n"
    "    <Field\n"
    "        name=\"geo\"\n"
    "        type=\"GeometryPtr\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        access=\"public\"\n"
    "        defaultValue=\"NULL\"\n"
    "    >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"matrix\"\n"
    "        type=\"Matrix\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        access=\"public\"\n"
    "        defaultValue=\"\"\n"
    "    >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"state\"\n"
    "        type=\"StatePtr\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        access=\"public\"\n"
    "        defaultValue=\"NULL\"\n"
    "    >\n"
    "    </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &RTCacheGeometryStoreBase::getType(void)
{
    return _type;
}

const FieldContainerType &RTCacheGeometryStoreBase::getType(void) const
{
    return _type;
}

UInt32 RTCacheGeometryStoreBase::getContainerSize(void) const
{
    return sizeof(RTCacheGeometryStore);
}

/*------------------------- decorator get ------------------------------*/


//! Get the RTCacheGeometryStore::_sfGeo field.
const SFUnrecGeometryPtr *RTCacheGeometryStoreBase::getSFGeo(void) const
{
    return &_sfGeo;
}

SFUnrecGeometryPtr  *RTCacheGeometryStoreBase::editSFGeo            (void)
{
    editSField(GeoFieldMask);

    return &_sfGeo;
}

SFMatrix *RTCacheGeometryStoreBase::editSFMatrix(void)
{
    editSField(MatrixFieldMask);

    return &_sfMatrix;
}

const SFMatrix *RTCacheGeometryStoreBase::getSFMatrix(void) const
{
    return &_sfMatrix;
}


//! Get the RTCacheGeometryStore::_sfState field.
const SFUnrecStatePtr *RTCacheGeometryStoreBase::getSFState(void) const
{
    return &_sfState;
}

SFUnrecStatePtr     *RTCacheGeometryStoreBase::editSFState          (void)
{
    editSField(StateFieldMask);

    return &_sfState;
}





/*------------------------------ access -----------------------------------*/

UInt32 RTCacheGeometryStoreBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (GeoFieldMask & whichField))
    {
        returnValue += _sfGeo.getBinSize();
    }
    if(FieldBits::NoField != (MatrixFieldMask & whichField))
    {
        returnValue += _sfMatrix.getBinSize();
    }
    if(FieldBits::NoField != (StateFieldMask & whichField))
    {
        returnValue += _sfState.getBinSize();
    }

    return returnValue;
}

void RTCacheGeometryStoreBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (GeoFieldMask & whichField))
    {
        _sfGeo.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MatrixFieldMask & whichField))
    {
        _sfMatrix.copyToBin(pMem);
    }
    if(FieldBits::NoField != (StateFieldMask & whichField))
    {
        _sfState.copyToBin(pMem);
    }
}

void RTCacheGeometryStoreBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (GeoFieldMask & whichField))
    {
        _sfGeo.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MatrixFieldMask & whichField))
    {
        _sfMatrix.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (StateFieldMask & whichField))
    {
        _sfState.copyFromBin(pMem);
    }
}

//! create a new instance of the class
RTCacheGeometryStoreTransitPtr RTCacheGeometryStoreBase::createLocal(BitVector bFlags)
{
    RTCacheGeometryStoreTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<RTCacheGeometryStore>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
RTCacheGeometryStoreTransitPtr RTCacheGeometryStoreBase::createDependent(BitVector bFlags)
{
    RTCacheGeometryStoreTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<RTCacheGeometryStore>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
RTCacheGeometryStoreTransitPtr RTCacheGeometryStoreBase::create(void)
{
    RTCacheGeometryStoreTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<RTCacheGeometryStore>(tmpPtr);
    }

    return fc;
}

RTCacheGeometryStore *RTCacheGeometryStoreBase::createEmptyLocal(BitVector bFlags)
{
    RTCacheGeometryStore *returnValue;

    newPtr<RTCacheGeometryStore>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
RTCacheGeometryStore *RTCacheGeometryStoreBase::createEmpty(void)
{
    RTCacheGeometryStore *returnValue;

    newPtr<RTCacheGeometryStore>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr RTCacheGeometryStoreBase::shallowCopyLocal(
    BitVector bFlags) const
{
    RTCacheGeometryStore *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const RTCacheGeometryStore *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr RTCacheGeometryStoreBase::shallowCopyDependent(
    BitVector bFlags) const
{
    RTCacheGeometryStore *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const RTCacheGeometryStore *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr RTCacheGeometryStoreBase::shallowCopy(void) const
{
    RTCacheGeometryStore *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const RTCacheGeometryStore *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

RTCacheGeometryStoreBase::RTCacheGeometryStoreBase(void) :
    Inherited(),
    _sfGeo                    (NULL),
    _sfMatrix                 (),
    _sfState                  (NULL)
{
}

RTCacheGeometryStoreBase::RTCacheGeometryStoreBase(const RTCacheGeometryStoreBase &source) :
    Inherited(source),
    _sfGeo                    (NULL),
    _sfMatrix                 (source._sfMatrix                 ),
    _sfState                  (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

RTCacheGeometryStoreBase::~RTCacheGeometryStoreBase(void)
{
}

void RTCacheGeometryStoreBase::onCreate(const RTCacheGeometryStore *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        RTCacheGeometryStore *pThis = static_cast<RTCacheGeometryStore *>(this);

        pThis->setGeo(source->getGeo());

        pThis->setState(source->getState());
    }
}

GetFieldHandlePtr RTCacheGeometryStoreBase::getHandleGeo             (void) const
{
    SFUnrecGeometryPtr::GetHandlePtr returnValue(
        new  SFUnrecGeometryPtr::GetHandle(
             &_sfGeo,
             this->getType().getFieldDesc(GeoFieldId),
             const_cast<RTCacheGeometryStoreBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr RTCacheGeometryStoreBase::editHandleGeo            (void)
{
    SFUnrecGeometryPtr::EditHandlePtr returnValue(
        new  SFUnrecGeometryPtr::EditHandle(
             &_sfGeo,
             this->getType().getFieldDesc(GeoFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&RTCacheGeometryStore::setGeo,
                    static_cast<RTCacheGeometryStore *>(this), _1));

    editSField(GeoFieldMask);

    return returnValue;
}

GetFieldHandlePtr RTCacheGeometryStoreBase::getHandleMatrix          (void) const
{
    SFMatrix::GetHandlePtr returnValue(
        new  SFMatrix::GetHandle(
             &_sfMatrix,
             this->getType().getFieldDesc(MatrixFieldId),
             const_cast<RTCacheGeometryStoreBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr RTCacheGeometryStoreBase::editHandleMatrix         (void)
{
    SFMatrix::EditHandlePtr returnValue(
        new  SFMatrix::EditHandle(
             &_sfMatrix,
             this->getType().getFieldDesc(MatrixFieldId),
             this));


    editSField(MatrixFieldMask);

    return returnValue;
}

GetFieldHandlePtr RTCacheGeometryStoreBase::getHandleState           (void) const
{
    SFUnrecStatePtr::GetHandlePtr returnValue(
        new  SFUnrecStatePtr::GetHandle(
             &_sfState,
             this->getType().getFieldDesc(StateFieldId),
             const_cast<RTCacheGeometryStoreBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr RTCacheGeometryStoreBase::editHandleState          (void)
{
    SFUnrecStatePtr::EditHandlePtr returnValue(
        new  SFUnrecStatePtr::EditHandle(
             &_sfState,
             this->getType().getFieldDesc(StateFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&RTCacheGeometryStore::setState,
                    static_cast<RTCacheGeometryStore *>(this), _1));

    editSField(StateFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void RTCacheGeometryStoreBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    RTCacheGeometryStore *pThis = static_cast<RTCacheGeometryStore *>(this);

    pThis->execSync(static_cast<RTCacheGeometryStore *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *RTCacheGeometryStoreBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    RTCacheGeometryStore *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const RTCacheGeometryStore *>(pRefAspect),
                  dynamic_cast<const RTCacheGeometryStore *>(this));

    return returnValue;
}
#endif

void RTCacheGeometryStoreBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<RTCacheGeometryStore *>(this)->setGeo(NULL);

    static_cast<RTCacheGeometryStore *>(this)->setState(NULL);


}


OSG_END_NAMESPACE
