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
 **     class ShadowViewport
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSHADOWVIEWPORTBASE_H_
#define _OSGSHADOWVIEWPORTBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGWindowDef.h"

#include "OSGBaseTypes.h"

#include "OSGStereoBufferViewport.h" // Parent

#include "OSGReal32Fields.h" // OffBias type
#include "OSGReal32Fields.h" // OffFactor type
#include "OSGNodeFields.h" // SceneRoot type
#include "OSGUInt32Fields.h" // MapSize type
#include "OSGNodeFields.h" // LightNodes type
#include "OSGNodeFields.h" // ExcludeNodes type
#include "OSGBoolFields.h" // MapAutoUpdate type
#include "OSGUInt32Fields.h" // ShadowMode type
#include "OSGReal32Fields.h" // ShadowSmoothness type
#include "OSGBoolFields.h" // ShadowOn type
#include "OSGBoolFields.h" // AutoSearchForLights type
#include "OSGReal32Fields.h" // GlobalShadowIntensity type
#include "OSGBoolFields.h" // FboOn type
#include "OSGBoolFields.h" // AutoExcludeTransparentNodes type
#include "OSGBoolFields.h" // DisableOccludedLights type
#include "OSGBoolFields.h" // Red type
#include "OSGBoolFields.h" // Blue type
#include "OSGBoolFields.h" // Green type
#include "OSGBoolFields.h" // Alpha type

#include "OSGShadowViewportFields.h"

OSG_BEGIN_NAMESPACE

class ShadowViewport;

//! \brief ShadowViewport Base Class.

class OSG_WINDOW_DLLMAPPING ShadowViewportBase : public StereoBufferViewport
{
  public:

    typedef StereoBufferViewport Inherited;
    typedef StereoBufferViewport ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(ShadowViewport);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        OffBiasFieldId = Inherited::NextFieldId,
        OffFactorFieldId = OffBiasFieldId + 1,
        SceneRootFieldId = OffFactorFieldId + 1,
        MapSizeFieldId = SceneRootFieldId + 1,
        LightNodesFieldId = MapSizeFieldId + 1,
        ExcludeNodesFieldId = LightNodesFieldId + 1,
        MapAutoUpdateFieldId = ExcludeNodesFieldId + 1,
        ShadowModeFieldId = MapAutoUpdateFieldId + 1,
        ShadowSmoothnessFieldId = ShadowModeFieldId + 1,
        ShadowOnFieldId = ShadowSmoothnessFieldId + 1,
        AutoSearchForLightsFieldId = ShadowOnFieldId + 1,
        GlobalShadowIntensityFieldId = AutoSearchForLightsFieldId + 1,
        FboOnFieldId = GlobalShadowIntensityFieldId + 1,
        AutoExcludeTransparentNodesFieldId = FboOnFieldId + 1,
        DisableOccludedLightsFieldId = AutoExcludeTransparentNodesFieldId + 1,
        RedFieldId = DisableOccludedLightsFieldId + 1,
        BlueFieldId = RedFieldId + 1,
        GreenFieldId = BlueFieldId + 1,
        AlphaFieldId = GreenFieldId + 1,
        NextFieldId = AlphaFieldId + 1
    };

    static const OSG::BitVector OffBiasFieldMask =
        (TypeTraits<BitVector>::One << OffBiasFieldId);
    static const OSG::BitVector OffFactorFieldMask =
        (TypeTraits<BitVector>::One << OffFactorFieldId);
    static const OSG::BitVector SceneRootFieldMask =
        (TypeTraits<BitVector>::One << SceneRootFieldId);
    static const OSG::BitVector MapSizeFieldMask =
        (TypeTraits<BitVector>::One << MapSizeFieldId);
    static const OSG::BitVector LightNodesFieldMask =
        (TypeTraits<BitVector>::One << LightNodesFieldId);
    static const OSG::BitVector ExcludeNodesFieldMask =
        (TypeTraits<BitVector>::One << ExcludeNodesFieldId);
    static const OSG::BitVector MapAutoUpdateFieldMask =
        (TypeTraits<BitVector>::One << MapAutoUpdateFieldId);
    static const OSG::BitVector ShadowModeFieldMask =
        (TypeTraits<BitVector>::One << ShadowModeFieldId);
    static const OSG::BitVector ShadowSmoothnessFieldMask =
        (TypeTraits<BitVector>::One << ShadowSmoothnessFieldId);
    static const OSG::BitVector ShadowOnFieldMask =
        (TypeTraits<BitVector>::One << ShadowOnFieldId);
    static const OSG::BitVector AutoSearchForLightsFieldMask =
        (TypeTraits<BitVector>::One << AutoSearchForLightsFieldId);
    static const OSG::BitVector GlobalShadowIntensityFieldMask =
        (TypeTraits<BitVector>::One << GlobalShadowIntensityFieldId);
    static const OSG::BitVector FboOnFieldMask =
        (TypeTraits<BitVector>::One << FboOnFieldId);
    static const OSG::BitVector AutoExcludeTransparentNodesFieldMask =
        (TypeTraits<BitVector>::One << AutoExcludeTransparentNodesFieldId);
    static const OSG::BitVector DisableOccludedLightsFieldMask =
        (TypeTraits<BitVector>::One << DisableOccludedLightsFieldId);
    static const OSG::BitVector RedFieldMask =
        (TypeTraits<BitVector>::One << RedFieldId);
    static const OSG::BitVector BlueFieldMask =
        (TypeTraits<BitVector>::One << BlueFieldId);
    static const OSG::BitVector GreenFieldMask =
        (TypeTraits<BitVector>::One << GreenFieldId);
    static const OSG::BitVector AlphaFieldMask =
        (TypeTraits<BitVector>::One << AlphaFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFReal32          SFOffBiasType;
    typedef SFReal32          SFOffFactorType;
    typedef SFUnrecNodePtr    SFSceneRootType;
    typedef SFUInt32          SFMapSizeType;
    typedef MFUnrecNodePtr    MFLightNodesType;
    typedef MFUnrecNodePtr    MFExcludeNodesType;
    typedef SFBool            SFMapAutoUpdateType;
    typedef SFUInt32          SFShadowModeType;
    typedef SFReal32          SFShadowSmoothnessType;
    typedef SFBool            SFShadowOnType;
    typedef SFBool            SFAutoSearchForLightsType;
    typedef SFReal32          SFGlobalShadowIntensityType;
    typedef SFBool            SFFboOnType;
    typedef SFBool            SFAutoExcludeTransparentNodesType;
    typedef SFBool            SFDisableOccludedLightsType;
    typedef SFBool            SFRedType;
    typedef SFBool            SFBlueType;
    typedef SFBool            SFGreenType;
    typedef SFBool            SFAlphaType;

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


                  SFReal32            *editSFOffBias        (void);
            const SFReal32            *getSFOffBias         (void) const;

                  SFReal32            *editSFOffFactor      (void);
            const SFReal32            *getSFOffFactor       (void) const;
            const SFUnrecNodePtr      *getSFSceneRoot      (void) const;
                  SFUnrecNodePtr      *editSFSceneRoot      (void);

                  SFUInt32            *editSFMapSize        (void);
            const SFUInt32            *getSFMapSize         (void) const;
            const MFUnrecNodePtr      *getMFLightNodes     (void) const;
                  MFUnrecNodePtr      *editMFLightNodes     (void);
            const MFUnrecNodePtr      *getMFExcludeNodes   (void) const;
                  MFUnrecNodePtr      *editMFExcludeNodes   (void);

                  SFBool              *editSFMapAutoUpdate  (void);
            const SFBool              *getSFMapAutoUpdate   (void) const;

                  SFUInt32            *editSFShadowMode     (void);
            const SFUInt32            *getSFShadowMode      (void) const;

                  SFReal32            *editSFShadowSmoothness(void);
            const SFReal32            *getSFShadowSmoothness (void) const;

                  SFBool              *editSFShadowOn       (void);
            const SFBool              *getSFShadowOn        (void) const;

                  SFBool              *editSFAutoSearchForLights(void);
            const SFBool              *getSFAutoSearchForLights (void) const;

                  SFReal32            *editSFGlobalShadowIntensity(void);
            const SFReal32            *getSFGlobalShadowIntensity (void) const;

                  SFBool              *editSFFboOn          (void);
            const SFBool              *getSFFboOn           (void) const;

                  SFBool              *editSFAutoExcludeTransparentNodes(void);
            const SFBool              *getSFAutoExcludeTransparentNodes (void) const;

                  SFBool              *editSFDisableOccludedLights(void);
            const SFBool              *getSFDisableOccludedLights (void) const;

                  SFBool              *editSFRed            (void);
            const SFBool              *getSFRed             (void) const;

                  SFBool              *editSFBlue           (void);
            const SFBool              *getSFBlue            (void) const;

                  SFBool              *editSFGreen          (void);
            const SFBool              *getSFGreen           (void) const;

                  SFBool              *editSFAlpha          (void);
            const SFBool              *getSFAlpha           (void) const;


                  Real32              &editOffBias        (void);
                  Real32               getOffBias         (void) const;

                  Real32              &editOffFactor      (void);
                  Real32               getOffFactor       (void) const;

                  Node * getSceneRoot      (void) const;

                  UInt32              &editMapSize        (void);
                  UInt32               getMapSize         (void) const;

                  Node * getLightNodes     (const UInt32 index) const;

                  Node * getExcludeNodes   (const UInt32 index) const;

                  bool                &editMapAutoUpdate  (void);
                  bool                 getMapAutoUpdate   (void) const;

                  UInt32              &editShadowMode     (void);
                  UInt32               getShadowMode      (void) const;

                  Real32              &editShadowSmoothness(void);
                  Real32               getShadowSmoothness (void) const;

                  bool                &editShadowOn       (void);
                  bool                 getShadowOn        (void) const;

                  bool                &editAutoSearchForLights(void);
                  bool                 getAutoSearchForLights (void) const;

                  Real32              &editGlobalShadowIntensity(void);
                  Real32               getGlobalShadowIntensity (void) const;

                  bool                &editFboOn          (void);
                  bool                 getFboOn           (void) const;

                  bool                &editAutoExcludeTransparentNodes(void);
                  bool                 getAutoExcludeTransparentNodes (void) const;

                  bool                &editDisableOccludedLights(void);
                  bool                 getDisableOccludedLights (void) const;

                  bool                &editRed            (void);
                  bool                 getRed             (void) const;

                  bool                &editBlue           (void);
                  bool                 getBlue            (void) const;

                  bool                &editGreen          (void);
                  bool                 getGreen           (void) const;

                  bool                &editAlpha          (void);
                  bool                 getAlpha           (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setOffBias        (const Real32 value);
            void setOffFactor      (const Real32 value);
            void setSceneRoot      (Node * const value);
            void setMapSize        (const UInt32 value);
            void setMapAutoUpdate  (const bool value);
            void setShadowMode     (const UInt32 value);
            void setShadowSmoothness(const Real32 value);
            void setShadowOn       (const bool value);
            void setAutoSearchForLights(const bool value);
            void setGlobalShadowIntensity(const Real32 value);
            void setFboOn          (const bool value);
            void setAutoExcludeTransparentNodes(const bool value);
            void setDisableOccludedLights(const bool value);
            void setRed            (const bool value);
            void setBlue           (const bool value);
            void setGreen          (const bool value);
            void setAlpha          (const bool value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void pushToLightNodes           (Node * const value   );
    void assignLightNodes          (const MFUnrecNodePtr    &value);
    void removeFromLightNodes (UInt32               uiIndex );
    void removeObjFromLightNodes(Node * const value   );
    void clearLightNodes            (void                         );

    void pushToExcludeNodes           (Node * const value   );
    void assignExcludeNodes          (const MFUnrecNodePtr    &value);
    void removeFromExcludeNodes (UInt32               uiIndex );
    void removeObjFromExcludeNodes(Node * const value   );
    void clearExcludeNodes            (void                         );

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

    static  ShadowViewportTransitPtr  create          (void);
    static  ShadowViewport           *createEmpty     (void);

    static  ShadowViewportTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  ShadowViewport            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  ShadowViewportTransitPtr  createDependent  (BitVector bFlags);

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

    SFReal32          _sfOffBias;
    SFReal32          _sfOffFactor;
    SFUnrecNodePtr    _sfSceneRoot;
    SFUInt32          _sfMapSize;
    MFUnrecNodePtr    _mfLightNodes;
    MFUnrecNodePtr    _mfExcludeNodes;
    SFBool            _sfMapAutoUpdate;
    SFUInt32          _sfShadowMode;
    SFReal32          _sfShadowSmoothness;
    SFBool            _sfShadowOn;
    SFBool            _sfAutoSearchForLights;
    SFReal32          _sfGlobalShadowIntensity;
    SFBool            _sfFboOn;
    SFBool            _sfAutoExcludeTransparentNodes;
    SFBool            _sfDisableOccludedLights;
    SFBool            _sfRed;
    SFBool            _sfBlue;
    SFBool            _sfGreen;
    SFBool            _sfAlpha;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ShadowViewportBase(void);
    ShadowViewportBase(const ShadowViewportBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ShadowViewportBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const ShadowViewport *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleOffBias         (void) const;
    EditFieldHandlePtr editHandleOffBias        (void);
    GetFieldHandlePtr  getHandleOffFactor       (void) const;
    EditFieldHandlePtr editHandleOffFactor      (void);
    GetFieldHandlePtr  getHandleSceneRoot       (void) const;
    EditFieldHandlePtr editHandleSceneRoot      (void);
    GetFieldHandlePtr  getHandleMapSize         (void) const;
    EditFieldHandlePtr editHandleMapSize        (void);
    GetFieldHandlePtr  getHandleLightNodes      (void) const;
    EditFieldHandlePtr editHandleLightNodes     (void);
    GetFieldHandlePtr  getHandleExcludeNodes    (void) const;
    EditFieldHandlePtr editHandleExcludeNodes   (void);
    GetFieldHandlePtr  getHandleMapAutoUpdate   (void) const;
    EditFieldHandlePtr editHandleMapAutoUpdate  (void);
    GetFieldHandlePtr  getHandleShadowMode      (void) const;
    EditFieldHandlePtr editHandleShadowMode     (void);
    GetFieldHandlePtr  getHandleShadowSmoothness (void) const;
    EditFieldHandlePtr editHandleShadowSmoothness(void);
    GetFieldHandlePtr  getHandleShadowOn        (void) const;
    EditFieldHandlePtr editHandleShadowOn       (void);
    GetFieldHandlePtr  getHandleAutoSearchForLights (void) const;
    EditFieldHandlePtr editHandleAutoSearchForLights(void);
    GetFieldHandlePtr  getHandleGlobalShadowIntensity (void) const;
    EditFieldHandlePtr editHandleGlobalShadowIntensity(void);
    GetFieldHandlePtr  getHandleFboOn           (void) const;
    EditFieldHandlePtr editHandleFboOn          (void);
    GetFieldHandlePtr  getHandleAutoExcludeTransparentNodes (void) const;
    EditFieldHandlePtr editHandleAutoExcludeTransparentNodes(void);
    GetFieldHandlePtr  getHandleDisableOccludedLights (void) const;
    EditFieldHandlePtr editHandleDisableOccludedLights(void);
    GetFieldHandlePtr  getHandleRed             (void) const;
    EditFieldHandlePtr editHandleRed            (void);
    GetFieldHandlePtr  getHandleBlue            (void) const;
    EditFieldHandlePtr editHandleBlue           (void);
    GetFieldHandlePtr  getHandleGreen           (void) const;
    EditFieldHandlePtr editHandleGreen          (void);
    GetFieldHandlePtr  getHandleAlpha           (void) const;
    EditFieldHandlePtr editHandleAlpha          (void);

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

            void execSync (      ShadowViewportBase *pFrom,
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
    void operator =(const ShadowViewportBase &source);
};

typedef ShadowViewportBase *ShadowViewportBaseP;

OSG_END_NAMESPACE

#endif /* _OSGSHADOWVIEWPORTBASE_H_ */
