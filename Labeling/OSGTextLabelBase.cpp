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
 **     class TextLabel!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"




#include "OSGTextLabelBase.h"
#include "OSGTextLabel.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TextLabel
    The TextLabel class... FIXME: more documentation required
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var std::string     TextLabelBase::_sfText
    The text string for the label.
*/

/*! \var Real32          TextLabelBase::_sfSize
    Height of a single line, in  pixel.
*/

/*! \var std::string     TextLabelBase::_sfFamily
    The font family to be used, e.g. "SANS", default if unset.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<TextLabel *, nsOSG>::_type(
    "TextLabelPtr", 
    "LabelPtr", 
    TextLabel::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(TextLabel *, nsOSG)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           TextLabel *,
                           nsOSG);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           TextLabel *,
                           nsOSG);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void TextLabelBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFString::Description(
        SFString::getClassType(),
        "text",
        "The text string for the label.\n",
        TextFieldId, TextFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextLabel::editHandleText),
        static_cast<FieldGetMethodSig >(&TextLabel::getHandleText));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "size",
        "Height of a single line, in  pixel.\n",
        SizeFieldId, SizeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextLabel::editHandleSize),
        static_cast<FieldGetMethodSig >(&TextLabel::getHandleSize));

    oType.addInitialDesc(pDesc);

    pDesc = new SFString::Description(
        SFString::getClassType(),
        "family",
        "The font family to be used, e.g. \"SANS\", default if unset.\n",
        FamilyFieldId, FamilyFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TextLabel::editHandleFamily),
        static_cast<FieldGetMethodSig >(&TextLabel::getHandleFamily));

    oType.addInitialDesc(pDesc);
}


TextLabelBase::TypeObject TextLabelBase::_type(
    TextLabelBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&TextLabelBase::createEmptyLocal),
    TextLabel::initMethod,
    TextLabel::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&TextLabel::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"TextLabel\"\n"
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
    "The TextLabel class... FIXME: more documentation required\n"
    "\n"
    "\t<Field\n"
    "\t\tname=\"text\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe text string for the label.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"size\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"16\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tHeight of a single line, in  pixel.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"family\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe font family to be used, e.g. \"SANS\", default if unset.\n"
    "\t</Field>\n"
    "\n"
    "</FieldContainer>\n",
    "The TextLabel class... FIXME: more documentation required\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &TextLabelBase::getType(void)
{
    return _type;
}

const FieldContainerType &TextLabelBase::getType(void) const
{
    return _type;
}

UInt32 TextLabelBase::getContainerSize(void) const
{
    return sizeof(TextLabel);
}

/*------------------------- decorator get ------------------------------*/


SFString *TextLabelBase::editSFText(void)
{
    editSField(TextFieldMask);

    return &_sfText;
}

const SFString *TextLabelBase::getSFText(void) const
{
    return &_sfText;
}


SFReal32 *TextLabelBase::editSFSize(void)
{
    editSField(SizeFieldMask);

    return &_sfSize;
}

const SFReal32 *TextLabelBase::getSFSize(void) const
{
    return &_sfSize;
}


SFString *TextLabelBase::editSFFamily(void)
{
    editSField(FamilyFieldMask);

    return &_sfFamily;
}

const SFString *TextLabelBase::getSFFamily(void) const
{
    return &_sfFamily;
}






/*------------------------------ access -----------------------------------*/

UInt32 TextLabelBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (TextFieldMask & whichField))
    {
        returnValue += _sfText.getBinSize();
    }
    if(FieldBits::NoField != (SizeFieldMask & whichField))
    {
        returnValue += _sfSize.getBinSize();
    }
    if(FieldBits::NoField != (FamilyFieldMask & whichField))
    {
        returnValue += _sfFamily.getBinSize();
    }

    return returnValue;
}

void TextLabelBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (TextFieldMask & whichField))
    {
        _sfText.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SizeFieldMask & whichField))
    {
        _sfSize.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FamilyFieldMask & whichField))
    {
        _sfFamily.copyToBin(pMem);
    }
}

void TextLabelBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (TextFieldMask & whichField))
    {
        editSField(TextFieldMask);
        _sfText.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SizeFieldMask & whichField))
    {
        editSField(SizeFieldMask);
        _sfSize.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FamilyFieldMask & whichField))
    {
        editSField(FamilyFieldMask);
        _sfFamily.copyFromBin(pMem);
    }
}

//! create a new instance of the class
TextLabelTransitPtr TextLabelBase::createLocal(BitVector bFlags)
{
    TextLabelTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<TextLabel>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
TextLabelTransitPtr TextLabelBase::createDependent(BitVector bFlags)
{
    TextLabelTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<TextLabel>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
TextLabelTransitPtr TextLabelBase::create(void)
{
    TextLabelTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<TextLabel>(tmpPtr);
    }

    return fc;
}

TextLabel *TextLabelBase::createEmptyLocal(BitVector bFlags)
{
    TextLabel *returnValue;

    newPtr<TextLabel>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
TextLabel *TextLabelBase::createEmpty(void)
{
    TextLabel *returnValue;

    newPtr<TextLabel>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr TextLabelBase::shallowCopyLocal(
    BitVector bFlags) const
{
    TextLabel *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TextLabel *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr TextLabelBase::shallowCopyDependent(
    BitVector bFlags) const
{
    TextLabel *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TextLabel *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr TextLabelBase::shallowCopy(void) const
{
    TextLabel *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const TextLabel *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

TextLabelBase::TextLabelBase(void) :
    Inherited(),
    _sfText                   (),
    _sfSize                   (Real32(16)),
    _sfFamily                 ()
{
}

TextLabelBase::TextLabelBase(const TextLabelBase &source) :
    Inherited(source),
    _sfText                   (source._sfText                   ),
    _sfSize                   (source._sfSize                   ),
    _sfFamily                 (source._sfFamily                 )
{
}


/*-------------------------- destructors ----------------------------------*/

TextLabelBase::~TextLabelBase(void)
{
}


GetFieldHandlePtr TextLabelBase::getHandleText            (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfText,
             this->getType().getFieldDesc(TextFieldId),
             const_cast<TextLabelBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextLabelBase::editHandleText           (void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfText,
             this->getType().getFieldDesc(TextFieldId),
             this));


    editSField(TextFieldMask);

    return returnValue;
}

GetFieldHandlePtr TextLabelBase::getHandleSize            (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfSize,
             this->getType().getFieldDesc(SizeFieldId),
             const_cast<TextLabelBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextLabelBase::editHandleSize           (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfSize,
             this->getType().getFieldDesc(SizeFieldId),
             this));


    editSField(SizeFieldMask);

    return returnValue;
}

GetFieldHandlePtr TextLabelBase::getHandleFamily          (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfFamily,
             this->getType().getFieldDesc(FamilyFieldId),
             const_cast<TextLabelBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextLabelBase::editHandleFamily         (void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfFamily,
             this->getType().getFieldDesc(FamilyFieldId),
             this));


    editSField(FamilyFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void TextLabelBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    TextLabel *pThis = static_cast<TextLabel *>(this);

    pThis->execSync(static_cast<TextLabel *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *TextLabelBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    TextLabel *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const TextLabel *>(pRefAspect),
                  dynamic_cast<const TextLabel *>(this));

    return returnValue;
}
#endif

void TextLabelBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
