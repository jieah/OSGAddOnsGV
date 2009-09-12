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
 **     class RTCacheGeometryStore
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGRTCACHEGEOMETRYSTOREBASE_H_
#define _OSGRTCACHEGEOMETRYSTOREBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribRRTDef.h"

#include "OSGBaseTypes.h"

#include "OSGFieldContainer.h" // Parent

#include "OSGGeometryFields.h" // Geo type
#include "OSGMatrixFields.h" // Matrix type
#include "OSGStateFields.h" // State type

#include "OSGRTCacheGeometryStoreFields.h"

OSG_BEGIN_NAMESPACE

class RTCacheGeometryStore;

//! \brief RTCacheGeometryStore Base Class.

class OSG_CONTRIBRRT_DLLMAPPING RTCacheGeometryStoreBase : public FieldContainer
{
  public:

    typedef FieldContainer Inherited;
    typedef FieldContainer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(RTCacheGeometryStore);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        GeoFieldId = Inherited::NextFieldId,
        MatrixFieldId = GeoFieldId + 1,
        StateFieldId = MatrixFieldId + 1,
        NextFieldId = StateFieldId + 1
    };

    static const OSG::BitVector GeoFieldMask =
        (TypeTraits<BitVector>::One << GeoFieldId);
    static const OSG::BitVector MatrixFieldMask =
        (TypeTraits<BitVector>::One << MatrixFieldId);
    static const OSG::BitVector StateFieldMask =
        (TypeTraits<BitVector>::One << StateFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);

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

            const SFGeometryPtr       *getSFGeo             (void) const;

#ifdef OSG_1_GET_COMPAT
                  SFMatrix            *getSFMatrix          (void);
#endif
                  SFMatrix            *editSFMatrix         (void);
            const SFMatrix            *getSFMatrix          (void) const;
            const SFStatePtr          *getSFState           (void) const;


                  GeometryPtrConst getGeo            (void) const;

#ifdef OSG_1_GET_COMPAT
                  Matrix              &getMatrix          (void);
#endif
                  Matrix              &editMatrix         (void);
            const Matrix              &getMatrix          (void) const;

                  StatePtrConst getState          (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setGeo            (GeometryPtrConstArg value);
            void setMatrix         (const Matrix &value);
            void setState          (StatePtrConstArg value);

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

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  RTCacheGeometryStorePtr create     (void);
    static  RTCacheGeometryStorePtr createEmpty(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerPtr shallowCopy(void) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static void   classDescInserter(TypeObject &oType);
    static Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFGeometryPtr     _sfGeo;
    SFMatrix          _sfMatrix;
    SFStatePtr        _sfState;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    RTCacheGeometryStoreBase(void);
    RTCacheGeometryStoreBase(const RTCacheGeometryStoreBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~RTCacheGeometryStoreBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const RTCacheGeometryStore *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleGeo             (void) const;
    EditFieldHandlePtr editHandleGeo            (void);
    GetFieldHandlePtr  getHandleMatrix          (void) const;
    EditFieldHandlePtr editHandleMatrix         (void);
    GetFieldHandlePtr  getHandleState           (void) const;
    EditFieldHandlePtr editHandleState          (void);

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

            void execSync (      RTCacheGeometryStoreBase *pFrom,
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
    virtual FieldContainerPtr createAspectCopy(void) const;
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

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const RTCacheGeometryStoreBase &source);
};

typedef RTCacheGeometryStoreBase *RTCacheGeometryStoreBaseP;

/** Type specific RefPtr type for RTCacheGeometryStore. */
typedef RefPtr<RTCacheGeometryStorePtr> RTCacheGeometryStoreRefPtr;

typedef boost::mpl::if_<
    boost::mpl::bool_<RTCacheGeometryStoreBase::isNodeCore>,
    CoredNodePtr<RTCacheGeometryStore>,
    FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC>::type

        RTCacheGeometryStoreNodePtr;

OSG_END_NAMESPACE

#endif /* _OSGRTCACHEGEOMETRYSTOREBASE_H_ */
