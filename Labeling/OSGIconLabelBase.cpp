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
 **     class IconLabel!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEICONLABELINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGImage.h> // Image Class

#include "OSGIconLabelBase.h"
#include "OSGIconLabel.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::IconLabel
    The IconLabel class... FIXME: more documentation required
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var std::string     IconLabelBase::_sfFilename
    The filename of the icon to load.
*/

/*! \var Image *         IconLabelBase::_sfImage
    The image of the icon.
*/

/*! \var Vec2f           IconLabelBase::_sfSize
    Size of the icon on the screen in pixel.
*/


void IconLabelBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFString::Description(
        SFString::getClassType(),
        "filename",
        "The filename of the icon to load.\n",
        FilenameFieldId, FilenameFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&IconLabelBase::editHandleFilename),
        static_cast<FieldGetMethodSig >(&IconLabelBase::getHandleFilename));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecImagePtr::Description(
        SFUnrecImagePtr::getClassType(),
        "image",
        "The image of the icon.\n",
        ImageFieldId, ImageFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&IconLabelBase::editHandleImage),
        static_cast<FieldGetMethodSig >(&IconLabelBase::getHandleImage));

    oType.addInitialDesc(pDesc);

    pDesc = new SFVec2f::Description(
        SFVec2f::getClassType(),
        "size",
        "Size of the icon on the screen in pixel.\n",
        SizeFieldId, SizeFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast<FieldEditMethodSig>(&IconLabelBase::editHandleSize),
        static_cast<FieldGetMethodSig >(&IconLabelBase::getHandleSize));

    oType.addInitialDesc(pDesc);
}


IconLabelBase::TypeObject IconLabelBase::_type(
    IconLabelBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &IconLabelBase::createEmptyLocal,
    IconLabel::initMethod,
    IconLabel::exitMethod,
    (InitalInsertDescFunc) &IconLabelBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"IconLabel\"\n"
    "\tparent=\"Label\"\n"
    "\tlibrary=\"ContribLabeling\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "        decoratable=\"false\"\n"
    "        useLocalIncludes=\"true\"\n"
    "\tisNodeCore=\"true\"\n"
    ">\n"
    "The IconLabel class... FIXME: more documentation required\n"
    "\n"
    "\t<Field\n"
    "\t\tname=\"filename\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe filename of the icon to load.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"image\"\n"
    "\t\ttype=\"ImagePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "                defaultValue=\"NULL\"\n"
    "                header=\"OSGImage.h\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe image of the icon.\n"
    "\t</Field>\n"
    "\n"
    "\t<Field\n"
    "\t\tname=\"size\"\n"
    "\t\ttype=\"Vec2f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"32,32\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "        Size of the icon on the screen in pixel.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "The IconLabel class... FIXME: more documentation required\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &IconLabelBase::getType(void)
{
    return _type;
}

const FieldContainerType &IconLabelBase::getType(void) const
{
    return _type;
}

UInt32 IconLabelBase::getContainerSize(void) const
{
    return sizeof(IconLabel);
}

/*------------------------- decorator get ------------------------------*/


SFString *IconLabelBase::editSFFilename(void)
{
    editSField(FilenameFieldMask);

    return &_sfFilename;
}

const SFString *IconLabelBase::getSFFilename(void) const
{
    return &_sfFilename;
}

#ifdef OSG_1_GET_COMPAT
SFString            *IconLabelBase::getSFFilename       (void)
{
    return this->editSFFilename       ();
}
#endif

//! Get the IconLabel::_sfImage field.
const SFUnrecImagePtr *IconLabelBase::getSFImage(void) const
{
    return &_sfImage;
}

SFUnrecImagePtr     *IconLabelBase::editSFImage          (void)
{
    editSField(ImageFieldMask);

    return &_sfImage;
}

SFVec2f *IconLabelBase::editSFSize(void)
{
    editSField(SizeFieldMask);

    return &_sfSize;
}

const SFVec2f *IconLabelBase::getSFSize(void) const
{
    return &_sfSize;
}

#ifdef OSG_1_GET_COMPAT
SFVec2f             *IconLabelBase::getSFSize           (void)
{
    return this->editSFSize           ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 IconLabelBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (FilenameFieldMask & whichField))
    {
        returnValue += _sfFilename.getBinSize();
    }
    if(FieldBits::NoField != (ImageFieldMask & whichField))
    {
        returnValue += _sfImage.getBinSize();
    }
    if(FieldBits::NoField != (SizeFieldMask & whichField))
    {
        returnValue += _sfSize.getBinSize();
    }

    return returnValue;
}

void IconLabelBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (FilenameFieldMask & whichField))
    {
        _sfFilename.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ImageFieldMask & whichField))
    {
        _sfImage.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SizeFieldMask & whichField))
    {
        _sfSize.copyToBin(pMem);
    }
}

void IconLabelBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (FilenameFieldMask & whichField))
    {
        _sfFilename.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ImageFieldMask & whichField))
    {
        _sfImage.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SizeFieldMask & whichField))
    {
        _sfSize.copyFromBin(pMem);
    }
}

//! create a new instance of the class
IconLabelTransitPtr IconLabelBase::create(void)
{
    IconLabelTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<IconLabel>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
IconLabelTransitPtr IconLabelBase::createLocal(BitVector bFlags)
{
    IconLabelTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<IconLabel>(tmpPtr);
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
IconLabel *IconLabelBase::createEmpty(void)
{
    IconLabel *returnValue;

    newPtr<IconLabel>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &= 
        ~Thread::getCurrentLocalFlags(); 

    return returnValue;
}

IconLabel *IconLabelBase::createEmptyLocal(BitVector bFlags)
{
    IconLabel *returnValue;

    newPtr<IconLabel>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr IconLabelBase::shallowCopy(void) const
{
    IconLabel *tmpPtr;

    newPtr(tmpPtr, 
           dynamic_cast<const IconLabel *>(this), 
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}

FieldContainerTransitPtr IconLabelBase::shallowCopyLocal(
    BitVector bFlags) const
{
    IconLabel *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const IconLabel *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

IconLabelBase::IconLabelBase(void) :
    Inherited(),
    _sfFilename               (),
    _sfImage                  (NULL),
    _sfSize                   (Vec2f(32,32))
{
}

IconLabelBase::IconLabelBase(const IconLabelBase &source) :
    Inherited(source),
    _sfFilename               (source._sfFilename               ),
    _sfImage                  (NULL),
    _sfSize                   (source._sfSize                   )
{
}


/*-------------------------- destructors ----------------------------------*/

IconLabelBase::~IconLabelBase(void)
{
}

void IconLabelBase::onCreate(const IconLabel *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        IconLabel *pThis = static_cast<IconLabel *>(this);

        pThis->setImage(source->getImage());
    }
}

GetFieldHandlePtr IconLabelBase::getHandleFilename        (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfFilename, 
             this->getType().getFieldDesc(FilenameFieldId)));

    return returnValue;
}

EditFieldHandlePtr IconLabelBase::editHandleFilename       (void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfFilename, 
             this->getType().getFieldDesc(FilenameFieldId)));

    editSField(FilenameFieldMask);

    return returnValue;
}

GetFieldHandlePtr IconLabelBase::getHandleImage           (void) const
{
    SFUnrecImagePtr::GetHandlePtr returnValue(
        new  SFUnrecImagePtr::GetHandle(
             &_sfImage, 
             this->getType().getFieldDesc(ImageFieldId)));

    return returnValue;
}

EditFieldHandlePtr IconLabelBase::editHandleImage          (void)
{
    SFUnrecImagePtr::EditHandlePtr returnValue(
        new  SFUnrecImagePtr::EditHandle(
             &_sfImage, 
             this->getType().getFieldDesc(ImageFieldId)));

    returnValue->setSetMethod(boost::bind(&IconLabel::setImage, 
                                          static_cast<IconLabel *>(this), _1));

    editSField(ImageFieldMask);

    return returnValue;
}

GetFieldHandlePtr IconLabelBase::getHandleSize            (void) const
{
    SFVec2f::GetHandlePtr returnValue(
        new  SFVec2f::GetHandle(
             &_sfSize, 
             this->getType().getFieldDesc(SizeFieldId)));

    return returnValue;
}

EditFieldHandlePtr IconLabelBase::editHandleSize           (void)
{
    SFVec2f::EditHandlePtr returnValue(
        new  SFVec2f::EditHandle(
             &_sfSize, 
             this->getType().getFieldDesc(SizeFieldId)));

    editSField(SizeFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void IconLabelBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<IconLabelBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *IconLabelBase::createAspectCopy(void) const
{
    IconLabel *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const IconLabel *>(this));

    return returnValue;
}
#endif

void IconLabelBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<IconLabel *>(this)->setImage(NULL);


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<IconLabel *>::_type("IconLabelPtr", "LabelPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(IconLabel *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField, 
                           IconLabel *, 
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField, 
                           IconLabel *, 
                           0);

OSG_END_NAMESPACE