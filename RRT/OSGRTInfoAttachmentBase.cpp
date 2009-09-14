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
 **     class RTInfoAttachment!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGRTInfoAttachmentBase.h"
#include "OSGRTInfoAttachment.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::RTInfoAttachment
    The base class for statistics attachments.
 */


RTInfoAttachmentBase::TypeObject RTInfoAttachmentBase::_type(
    RTInfoAttachmentBase::getClassname(),
    Inherited::getClassname(),
    "RTInfoAttachment",
    0,
    reinterpret_cast<PrototypeCreateF>(&RTInfoAttachmentBase::createEmptyLocal),
    RTInfoAttachment::initMethod,
    RTInfoAttachment::exitMethod,
    NULL,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"RTInfoAttachment\"\n"
    "\tparent=\"Attachment\"\n"
    "\tlibrary=\"ContribRRT\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    ">\n"
    "The base class for statistics attachments.\n"
    "</FieldContainer>\n",
    "The base class for statistics attachments.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &RTInfoAttachmentBase::getType(void)
{
    return _type;
}

const FieldContainerType &RTInfoAttachmentBase::getType(void) const
{
    return _type;
}

UInt32 RTInfoAttachmentBase::getContainerSize(void) const
{
    return sizeof(RTInfoAttachment);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 RTInfoAttachmentBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void RTInfoAttachmentBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void RTInfoAttachmentBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
RTInfoAttachmentTransitPtr RTInfoAttachmentBase::createLocal(BitVector bFlags)
{
    RTInfoAttachmentTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<RTInfoAttachment>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
RTInfoAttachmentTransitPtr RTInfoAttachmentBase::create(void)
{
    RTInfoAttachmentTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<RTInfoAttachment>(tmpPtr);
    }

    return fc;
}

RTInfoAttachment *RTInfoAttachmentBase::createEmptyLocal(BitVector bFlags)
{
    RTInfoAttachment *returnValue;

    newPtr<RTInfoAttachment>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
RTInfoAttachment *RTInfoAttachmentBase::createEmpty(void)
{
    RTInfoAttachment *returnValue;

    newPtr<RTInfoAttachment>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr RTInfoAttachmentBase::shallowCopyLocal(
    BitVector bFlags) const
{
    RTInfoAttachment *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const RTInfoAttachment *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr RTInfoAttachmentBase::shallowCopy(void) const
{
    RTInfoAttachment *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const RTInfoAttachment *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

RTInfoAttachmentBase::RTInfoAttachmentBase(void) :
    Inherited()
{
}

RTInfoAttachmentBase::RTInfoAttachmentBase(const RTInfoAttachmentBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

RTInfoAttachmentBase::~RTInfoAttachmentBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void RTInfoAttachmentBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    RTInfoAttachment *pThis = static_cast<RTInfoAttachment *>(this);

    pThis->execSync(static_cast<RTInfoAttachment *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *RTInfoAttachmentBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    RTInfoAttachment *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const RTInfoAttachment *>(pRefAspect),
                  dynamic_cast<const RTInfoAttachment *>(this));

    return returnValue;
}
#endif

void RTInfoAttachmentBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<RTInfoAttachment *>::_type("RTInfoAttachmentPtr", "AttachmentPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(RTInfoAttachment *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           RTInfoAttachment *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           RTInfoAttachment *,
                           0);

OSG_END_NAMESPACE
