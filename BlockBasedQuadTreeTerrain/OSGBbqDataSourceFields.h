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


#ifndef _OSGBBQDATASOURCEFIELDS_H_
#define _OSGBBQDATASOURCEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribBbqTerrainDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class BbqDataSource;

OSG_GEN_CONTAINERPTR(BbqDataSource);
/*! \ingroup GrpContribBbqTerrainFieldTraits
    \ingroup GrpLibOSGContribBbqTerrain
 */
template <>
struct FieldTraits<BbqDataSource *, nsOSG> :
    public FieldTraitsFCPtrBase<BbqDataSource *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<BbqDataSource *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBBBQTERRAIN_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<BbqDataSource *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecBbqDataSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<BbqDataSource *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecBbqDataSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<BbqDataSource *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakBbqDataSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<BbqDataSource *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdBbqDataSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<BbqDataSource *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecBbqDataSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<BbqDataSource *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecBbqDataSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<BbqDataSource *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakBbqDataSourcePtr"; 
}

template<> inline
const Char8 *FieldTraits<BbqDataSource *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdBbqDataSourcePtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribBbqTerrainFieldSFields */
typedef PointerSField<BbqDataSource *,
                      RecordedRefCountPolicy, nsOSG  > SFRecBbqDataSourcePtr;
/*! \ingroup GrpContribBbqTerrainFieldSFields */
typedef PointerSField<BbqDataSource *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecBbqDataSourcePtr;
/*! \ingroup GrpContribBbqTerrainFieldSFields */
typedef PointerSField<BbqDataSource *,
                      WeakRefCountPolicy, nsOSG      > SFWeakBbqDataSourcePtr;
/*! \ingroup GrpContribBbqTerrainFieldSFields */
typedef PointerSField<BbqDataSource *,
                      NoRefCountPolicy, nsOSG        > SFUncountedBbqDataSourcePtr;


/*! \ingroup GrpContribBbqTerrainFieldMFields */
typedef PointerMField<BbqDataSource *,
                      RecordedRefCountPolicy, nsOSG  > MFRecBbqDataSourcePtr;
/*! \ingroup GrpContribBbqTerrainFieldMFields */
typedef PointerMField<BbqDataSource *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecBbqDataSourcePtr;
/*! \ingroup GrpContribBbqTerrainFieldMFields */
typedef PointerMField<BbqDataSource *,
                      WeakRefCountPolicy, nsOSG      > MFWeakBbqDataSourcePtr;
/*! \ingroup GrpContribBbqTerrainFieldMFields */
typedef PointerMField<BbqDataSource *,
                      NoRefCountPolicy, nsOSG        > MFUncountedBbqDataSourcePtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribBbqTerrainFieldSFields \ingroup GrpLibOSGContribBbqTerrain */
struct SFRecBbqDataSourcePtr : 
    public PointerSField<BbqDataSource *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribBbqTerrainFieldSFields \ingroup GrpLibOSGContribBbqTerrain */
struct SFUnrecBbqDataSourcePtr : 
    public PointerSField<BbqDataSource *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribBbqTerrainFieldSFields \ingroup GrpLibOSGContribBbqTerrain */
struct SFWeakBbqDataSourcePtr :
    public PointerSField<BbqDataSource *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribBbqTerrainFieldSFields \ingroup GrpLibOSGContribBbqTerrain */
struct SFUncountedBbqDataSourcePtr :
    public PointerSField<BbqDataSource *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribBbqTerrainFieldMFields \ingroup GrpLibOSGContribBbqTerrain */
struct MFRecBbqDataSourcePtr :
    public PointerMField<BbqDataSource *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribBbqTerrainFieldMFields \ingroup GrpLibOSGContribBbqTerrain */
struct MFUnrecBbqDataSourcePtr :
    public PointerMField<BbqDataSource *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribBbqTerrainFieldMFields \ingroup GrpLibOSGContribBbqTerrain */
struct MFWeakBbqDataSourcePtr :
    public PointerMField<BbqDataSource *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribBbqTerrainFieldMFields \ingroup GrpLibOSGContribBbqTerrain */
struct MFUncountedBbqDataSourcePtr :
    public PointerMField<BbqDataSource *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGBBQDATASOURCEFIELDS_H_ */
