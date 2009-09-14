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
 **     class RayTracer
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGRAYTRACERBASE_H_
#define _OSGRAYTRACERBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribRRTDef.h"

//#include "OSGBaseTypes.h"

#include "OSGFieldContainer.h" // Parent

#include "OSGNodeFields.h" // RayTracingRoot type
#include "OSGSysFields.h" // Width type

#include "OSGRayTracerFields.h"

OSG_BEGIN_NAMESPACE

class RayTracer;

//! \brief RayTracer Base Class.

class OSG_CONTRIBRRT_DLLMAPPING RayTracerBase : public FieldContainer
{
  public:

    typedef FieldContainer Inherited;
    typedef FieldContainer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(RayTracer);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        RayTracingRootFieldId = Inherited::NextFieldId,
        BackgroundRootFieldId = RayTracingRootFieldId + 1,
        WidthFieldId = BackgroundRootFieldId + 1,
        HeightFieldId = WidthFieldId + 1,
        NextFieldId = HeightFieldId + 1
    };

    static const OSG::BitVector RayTracingRootFieldMask =
        (TypeTraits<BitVector>::One << RayTracingRootFieldId);
    static const OSG::BitVector BackgroundRootFieldMask =
        (TypeTraits<BitVector>::One << BackgroundRootFieldId);
    static const OSG::BitVector WidthFieldMask =
        (TypeTraits<BitVector>::One << WidthFieldId);
    static const OSG::BitVector HeightFieldMask =
        (TypeTraits<BitVector>::One << HeightFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFWeakNodePtr     SFRayTracingRootType;
    typedef SFUnrecNodePtr    SFBackgroundRootType;
    typedef SFUInt32          SFWidthType;
    typedef SFUInt32          SFHeightType;

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

            const SFWeakNodePtr       *getSFRayTracingRoot (void) const;
                  SFWeakNodePtr       *editSFRayTracingRoot (void);
            const SFUnrecNodePtr      *getSFBackgroundRoot (void) const;
                  SFUnrecNodePtr      *editSFBackgroundRoot (void);


                  Node * getRayTracingRoot (void) const;

                  Node * getBackgroundRoot (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setRayTracingRoot (Node * const value);
            void setBackgroundRoot (Node * const value);

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

    static  RayTracerTransitPtr  create          (void);
    static  RayTracer           *createEmpty     (void);

    static  RayTracerTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  RayTracer            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  RayTracerTransitPtr  createDependent  (BitVector bFlags);

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

    SFWeakNodePtr     _sfRayTracingRoot;
    SFUnrecNodePtr    _sfBackgroundRoot;
    SFUInt32          _sfWidth;
    SFUInt32          _sfHeight;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    RayTracerBase(void);
    RayTracerBase(const RayTracerBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~RayTracerBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const RayTracer *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleRayTracingRoot  (void) const;
    EditFieldHandlePtr editHandleRayTracingRoot (void);
    GetFieldHandlePtr  getHandleBackgroundRoot  (void) const;
    EditFieldHandlePtr editHandleBackgroundRoot (void);
    GetFieldHandlePtr  getHandleWidth           (void) const;
    EditFieldHandlePtr editHandleWidth          (void);
    GetFieldHandlePtr  getHandleHeight          (void) const;
    EditFieldHandlePtr editHandleHeight         (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFUInt32            *editSFWidth          (void);
            const SFUInt32            *getSFWidth           (void) const;

                  SFUInt32            *editSFHeight         (void);
            const SFUInt32            *getSFHeight          (void) const;


                  UInt32              &editWidth          (void);
                  UInt32               getWidth           (void) const;

                  UInt32              &editHeight         (void);
                  UInt32               getHeight          (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setWidth          (const UInt32 value);
            void setHeight         (const UInt32 value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

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

            void execSync (      RayTracerBase *pFrom,
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
    void operator =(const RayTracerBase &source);
};

typedef RayTracerBase *RayTracerBaseP;

OSG_END_NAMESPACE

#endif /* _OSGRAYTRACERBASE_H_ */
