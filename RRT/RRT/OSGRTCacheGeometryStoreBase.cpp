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


#define OSG_COMPILERTCACHEGEOMETRYSTOREINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGGeometry.h> // Geo Class
#include <OSGState.h> // State Class

#include "OSGRTCacheGeometryStoreBase.h"
#include "OSGRTCacheGeometryStore.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::RTCacheGeometryStore
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var GeometryPtr     RTCacheGeometryStoreBase::_sfGeo
    
*/

/*! \var Matrix          RTCacheGeometryStoreBase::_sfMatrix
    
*/

/*! \var StatePtr        RTCacheGeometryStoreBase::_sfState
    
*/


void RTCacheGeometryStoreBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFGeometryPtr::Description(
        SFGeometryPtr::getClassType(),
        "geo",
        "",
        GeoFieldId, GeoFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&RTCacheGeometryStoreBase::editHandleGeo),
        static_cast<FieldGetMethodSig >(&RTCacheGeometryStoreBase::getHandleGeo));

    oType.addInitialDesc(pDesc);

    pDesc = new SFMatrix::Description(
        SFMatrix::getClassType(),
        "matrix",
        "",
        MatrixFieldId, MatrixFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&RTCacheGeometryStoreBase::editHandleMatrix),
        static_cast<FieldGetMethodSig >(&RTCacheGeometryStoreBase::getHandleMatrix));

    oType.addInitialDesc(pDesc);

    pDesc = new SFStatePtr::Description(
        SFStatePtr::getClassType(),
        "state",
        "",
        StateFieldId, StateFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&RTCacheGeometryStoreBase::editHandleState),
        static_cast<FieldGetMethodSig >(&RTCacheGeometryStoreBase::getHandleState));

    oType.addInitialDesc(pDesc);
}


RTCacheGeometryStoreBase::TypeObject RTCacheGeometryStoreBase::_type(
    RTCacheGeometryStoreBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &RTCacheGeometryStoreBase::createEmpty,
    RTCacheGeometryStore::initMethod,
    (InitalInsertDescFunc) &RTCacheGeometryStoreBase::classDescInserter,
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
    "        defaultValue=\"NullFC\"\n"
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
    "        defaultValue=\"NullFC\"\n"
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
const SFGeometryPtr *RTCacheGeometryStoreBase::getSFGeo(void) const
{
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

#ifdef OSG_1_GET_COMPAT
SFMatrix            *RTCacheGeometryStoreBase::getSFMatrix         (void)
{
    return this->editSFMatrix         ();
}
#endif

//! Get the RTCacheGeometryStore::_sfState field.
const SFStatePtr *RTCacheGeometryStoreBase::getSFState(void) const
{
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
RTCacheGeometryStorePtr RTCacheGeometryStoreBase::create(void)
{
    RTCacheGeometryStorePtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = dynamic_cast<RTCacheGeometryStore::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
RTCacheGeometryStorePtr RTCacheGeometryStoreBase::createEmpty(void)
{
    RTCacheGeometryStorePtr returnValue;

    newPtr<RTCacheGeometryStore>(returnValue);

    return returnValue;
}

FieldContainerPtr RTCacheGeometryStoreBase::shallowCopy(void) const
{
    RTCacheGeometryStorePtr returnValue;

    newPtr(returnValue, dynamic_cast<const RTCacheGeometryStore *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

RTCacheGeometryStoreBase::RTCacheGeometryStoreBase(void) :
    Inherited(),
    _sfGeo                    (GeometryPtr(NullFC)),
    _sfMatrix                 (),
    _sfState                  (StatePtr(NullFC))
{
}

RTCacheGeometryStoreBase::RTCacheGeometryStoreBase(const RTCacheGeometryStoreBase &source) :
    Inherited(source),
    _sfGeo                    (NullFC),
    _sfMatrix                 (source._sfMatrix                 ),
    _sfState                  (NullFC)
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

        this->setGeo(source->getGeo());

        this->setState(source->getState());
    }
}

GetFieldHandlePtr RTCacheGeometryStoreBase::getHandleGeo             (void) const
{
    SFGeometryPtr::GetHandlePtr returnValue(
        new  SFGeometryPtr::GetHandle(
             &_sfGeo, 
             this->getType().getFieldDesc(GeoFieldId)));

    return returnValue;
}

EditFieldHandlePtr RTCacheGeometryStoreBase::editHandleGeo            (void)
{
    SFGeometryPtr::EditHandlePtr returnValue(
        new  SFGeometryPtr::EditHandle(
             &_sfGeo, 
             this->getType().getFieldDesc(GeoFieldId)));

    returnValue->setSetMethod(boost::bind(&RTCacheGeometryStore::setGeo, 
                                          static_cast<RTCacheGeometryStore *>(this), _1));

    editSField(GeoFieldMask);

    return returnValue;
}

GetFieldHandlePtr RTCacheGeometryStoreBase::getHandleMatrix          (void) const
{
    SFMatrix::GetHandlePtr returnValue(
        new  SFMatrix::GetHandle(
             &_sfMatrix, 
             this->getType().getFieldDesc(MatrixFieldId)));

    return returnValue;
}

EditFieldHandlePtr RTCacheGeometryStoreBase::editHandleMatrix         (void)
{
    SFMatrix::EditHandlePtr returnValue(
        new  SFMatrix::EditHandle(
             &_sfMatrix, 
             this->getType().getFieldDesc(MatrixFieldId)));

    editSField(MatrixFieldMask);

    return returnValue;
}

GetFieldHandlePtr RTCacheGeometryStoreBase::getHandleState           (void) const
{
    SFStatePtr::GetHandlePtr returnValue(
        new  SFStatePtr::GetHandle(
             &_sfState, 
             this->getType().getFieldDesc(StateFieldId)));

    return returnValue;
}

EditFieldHandlePtr RTCacheGeometryStoreBase::editHandleState          (void)
{
    SFStatePtr::EditHandlePtr returnValue(
        new  SFStatePtr::EditHandle(
             &_sfState, 
             this->getType().getFieldDesc(StateFieldId)));

    returnValue->setSetMethod(boost::bind(&RTCacheGeometryStore::setState, 
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
    this->execSync(static_cast<RTCacheGeometryStoreBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr RTCacheGeometryStoreBase::createAspectCopy(void) const
{
    RTCacheGeometryStorePtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const RTCacheGeometryStore *>(this));

    return returnValue;
}
#endif

void RTCacheGeometryStoreBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<RTCacheGeometryStore *>(this)->setGeo(NullFC);

    static_cast<RTCacheGeometryStore *>(this)->setState(NullFC);


}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<RTCacheGeometryStorePtr>::_type("RTCacheGeometryStorePtr", "FieldContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(RTCacheGeometryStorePtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, RTCacheGeometryStorePtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, RTCacheGeometryStorePtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
