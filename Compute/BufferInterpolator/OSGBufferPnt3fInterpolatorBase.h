/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2013 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: dirk@opensg.org, gerrit.voss@vossg.org, carsten_neumann@gmx.net  *
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
 **     class BufferPnt3fInterpolator
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGBUFFERPNT3FINTERPOLATORBASE_H_
#define _OSGBUFFERPNT3FINTERPOLATORBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribComputeDef.h"

//#include "OSGBaseTypes.h"

#include "OSGNodeCore.h" // Parent

#include "OSGSysFields.h"               // InValue type
#include "OSGVecFields.h"               // KeyValue type
#include "OSGGeoVectorPropertyFields.h" // OutValue type

#include "OSGBufferPnt3fInterpolatorFields.h"

OSG_BEGIN_NAMESPACE


class BufferPnt3fInterpolator;

//! \brief BufferPnt3fInterpolator Base Class.

class OSG_CONTRIBCOMPUTE_DLLMAPPING BufferPnt3fInterpolatorBase : public NodeCore
{
  public:

    typedef NodeCore Inherited;
    typedef NodeCore ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(BufferPnt3fInterpolator);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        InValueFieldId = Inherited::NextFieldId,
        KeyFieldId = InValueFieldId + 1,
        KeyValueFieldId = KeyFieldId + 1,
        OutValueFieldId = KeyValueFieldId + 1,
        ResortIndexFieldId = OutValueFieldId + 1,
        NextFieldId = ResortIndexFieldId + 1
    };

    static const OSG::BitVector InValueFieldMask =
        (TypeTraits<BitVector>::One << InValueFieldId);
    static const OSG::BitVector KeyFieldMask =
        (TypeTraits<BitVector>::One << KeyFieldId);
    static const OSG::BitVector KeyValueFieldMask =
        (TypeTraits<BitVector>::One << KeyValueFieldId);
    static const OSG::BitVector OutValueFieldMask =
        (TypeTraits<BitVector>::One << OutValueFieldId);
    static const OSG::BitVector ResortIndexFieldMask =
        (TypeTraits<BitVector>::One << ResortIndexFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFReal32          SFInValueType;
    typedef MFReal32          MFKeyType;
    typedef MFPnt3f           MFKeyValueType;
    typedef SFUnrecGeoVectorPropertyPtr SFOutValueType;
    typedef MFUInt32          MFResortIndexType;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFReal32            *editSFInValue        (void);
            const SFReal32            *getSFInValue         (void) const;

                  MFReal32            *editMFKey            (void);
            const MFReal32            *getMFKey             (void) const;

                  MFPnt3f             *editMFKeyValue       (void);
            const MFPnt3f             *getMFKeyValue        (void) const;
            const SFUnrecGeoVectorPropertyPtr *getSFOutValue       (void) const;
                  SFUnrecGeoVectorPropertyPtr *editSFOutValue       (void);

                  MFUInt32            *editMFResortIndex    (void);
            const MFUInt32            *getMFResortIndex     (void) const;


                  Real32              &editInValue        (void);
                  Real32               getInValue         (void) const;

                  Real32              &editKey            (const UInt32 index);
                  Real32               getKey             (const UInt32 index) const;

                  Pnt3f               &editKeyValue       (const UInt32 index);
            const Pnt3f               &getKeyValue        (const UInt32 index) const;

                  GeoVectorProperty * getOutValue       (void) const;

                  UInt32              &editResortIndex    (const UInt32 index);
                  UInt32               getResortIndex     (const UInt32 index) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setInValue        (const Real32 value);
            void setOutValue       (GeoVectorProperty * const value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual SizeT  getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  BufferPnt3fInterpolatorTransitPtr  create          (void);
    static  BufferPnt3fInterpolator           *createEmpty     (void);

    static  BufferPnt3fInterpolatorTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  BufferPnt3fInterpolator            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  BufferPnt3fInterpolatorTransitPtr  createDependent  (BitVector bFlags);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;
    virtual FieldContainerTransitPtr shallowCopyDependent(
                                                      BitVector bFlags) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFReal32          _sfInValue;
    MFReal32          _mfKey;
    MFPnt3f           _mfKeyValue;
    SFUnrecGeoVectorPropertyPtr _sfOutValue;
    MFUInt32          _mfResortIndex;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    BufferPnt3fInterpolatorBase(void);
    BufferPnt3fInterpolatorBase(const BufferPnt3fInterpolatorBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~BufferPnt3fInterpolatorBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const BufferPnt3fInterpolator *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleInValue         (void) const;
    EditFieldHandlePtr editHandleInValue        (void);
    GetFieldHandlePtr  getHandleKey             (void) const;
    EditFieldHandlePtr editHandleKey            (void);
    GetFieldHandlePtr  getHandleKeyValue        (void) const;
    EditFieldHandlePtr editHandleKeyValue       (void);
    GetFieldHandlePtr  getHandleOutValue        (void) const;
    EditFieldHandlePtr editHandleOutValue       (void);
    GetFieldHandlePtr  getHandleResortIndex     (void) const;
    EditFieldHandlePtr editHandleResortIndex    (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      BufferPnt3fInterpolatorBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainer *createAspectCopy(
                                    const FieldContainer *pRefAspect) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    /*---------------------------------------------------------------------*/

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const BufferPnt3fInterpolatorBase &source);
};

typedef BufferPnt3fInterpolatorBase *BufferPnt3fInterpolatorBaseP;

typedef CoredNodeRefPtr  <BufferPnt3fInterpolator> BufferPnt3fInterpolatorNodeRefPtr;
typedef CoredNodeMTRefPtr<BufferPnt3fInterpolator> BufferPnt3fInterpolatorNodeMTRefPtr;

OSG_END_NAMESPACE

#endif /* _OSGBUFFERPNT3FINTERPOLATORBASE_H_ */
