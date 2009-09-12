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
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGDYNAMICTERRAINFIELDS_H_
#define _OSGDYNAMICTERRAINFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGDrawableDef.h"

#include "OSGMaterialDrawableFields.h"

#include "OSGSFieldAdaptor.h"
#include "OSGMFieldAdaptor.h"


OSG_BEGIN_NAMESPACE

class DynamicTerrain;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! DynamicTerrainPtr

typedef PointerFwdBuilder<MaterialDrawablePtr,
                          MaterialDrawableConstPtr,
                          DynamicTerrain>::ObjPtr         DynamicTerrainPtr;
typedef PointerFwdBuilder<MaterialDrawablePtr,
                          MaterialDrawableConstPtr,
                          DynamicTerrain>::ObjPtrConst    DynamicTerrainPtrConst;
typedef PointerFwdBuilder<MaterialDrawablePtr,
                          MaterialDrawableConstPtr,
                          DynamicTerrain>::ObjConstPtr    DynamicTerrainConstPtr;
typedef PointerFwdBuilder<MaterialDrawablePtr,
                          MaterialDrawableConstPtr,
                          DynamicTerrain>::ObjPtrArg      DynamicTerrainPtrArg;
typedef PointerFwdBuilder<MaterialDrawablePtr,
                          MaterialDrawableConstPtr,
                          DynamicTerrain>::ObjConstPtrArg DynamicTerrainConstPtrArg;
typedef PointerFwdBuilder<MaterialDrawablePtr,
                          MaterialDrawableConstPtr,
                          DynamicTerrain>::ObjPtrConstArg DynamicTerrainPtrConstArg;

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpDrawableFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<DynamicTerrainPtr> :
    public FieldTraitsTemplateBase<DynamicTerrainPtr>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<DynamicTerrainPtr>  Self;

    enum                        { Convertible = NotConvertible };
};

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<DynamicTerrainPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)



OSG_END_NAMESPACE

#endif /* _OSGDYNAMICTERRAINFIELDS_H_ */
