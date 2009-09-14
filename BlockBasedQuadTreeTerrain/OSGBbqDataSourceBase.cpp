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
 **     class BbqDataSource!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEBBQDATASOURCEINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGBbqDataSourceBase.h"
#include "OSGBbqDataSource.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::BbqDataSource
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var bool            BbqDataSourceBase::_sfIgnoreGeoRef
    
*/


void BbqDataSourceBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "ignoreGeoRef",
        "",
        IgnoreGeoRefFieldId, IgnoreGeoRefFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&BbqDataSource::editHandleIgnoreGeoRef),
        static_cast<FieldGetMethodSig >(&BbqDataSource::getHandleIgnoreGeoRef));

    oType.addInitialDesc(pDesc);
}


BbqDataSourceBase::TypeObject BbqDataSourceBase::_type(
    BbqDataSourceBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    BbqDataSource::initMethod,
    BbqDataSource::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&BbqDataSourceBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"BbqDataSource\"\n"
    "    parent=\"FieldContainer\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"abstract\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    library=\"Drawable\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"ignoreGeoRef\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"false\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>    \n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &BbqDataSourceBase::getType(void)
{
    return _type;
}

const FieldContainerType &BbqDataSourceBase::getType(void) const
{
    return _type;
}

UInt32 BbqDataSourceBase::getContainerSize(void) const
{
    return sizeof(BbqDataSource);
}

/*------------------------- decorator get ------------------------------*/


SFBool *BbqDataSourceBase::editSFIgnoreGeoRef(void)
{
    editSField(IgnoreGeoRefFieldMask);

    return &_sfIgnoreGeoRef;
}

const SFBool *BbqDataSourceBase::getSFIgnoreGeoRef(void) const
{
    return &_sfIgnoreGeoRef;
}






/*------------------------------ access -----------------------------------*/

UInt32 BbqDataSourceBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (IgnoreGeoRefFieldMask & whichField))
    {
        returnValue += _sfIgnoreGeoRef.getBinSize();
    }

    return returnValue;
}

void BbqDataSourceBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (IgnoreGeoRefFieldMask & whichField))
    {
        _sfIgnoreGeoRef.copyToBin(pMem);
    }
}

void BbqDataSourceBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (IgnoreGeoRefFieldMask & whichField))
    {
        _sfIgnoreGeoRef.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

BbqDataSourceBase::BbqDataSourceBase(void) :
    Inherited(),
    _sfIgnoreGeoRef           (bool(false))
{
}

BbqDataSourceBase::BbqDataSourceBase(const BbqDataSourceBase &source) :
    Inherited(source),
    _sfIgnoreGeoRef           (source._sfIgnoreGeoRef           )
{
}


/*-------------------------- destructors ----------------------------------*/

BbqDataSourceBase::~BbqDataSourceBase(void)
{
}


GetFieldHandlePtr BbqDataSourceBase::getHandleIgnoreGeoRef    (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfIgnoreGeoRef,
             this->getType().getFieldDesc(IgnoreGeoRefFieldId)));

    return returnValue;
}

EditFieldHandlePtr BbqDataSourceBase::editHandleIgnoreGeoRef   (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfIgnoreGeoRef,
             this->getType().getFieldDesc(IgnoreGeoRefFieldId)));


    editSField(IgnoreGeoRefFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void BbqDataSourceBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<BbqDataSourceBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif



void BbqDataSourceBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<BbqDataSource *>::_type("BbqDataSourcePtr", "FieldContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(BbqDataSource *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           BbqDataSource *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           BbqDataSource *,
                           0);

OSG_END_NAMESPACE
