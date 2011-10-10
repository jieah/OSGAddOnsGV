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


#ifndef _OSGRTTEXTURETARGETFIELDS_H_
#define _OSGRTTEXTURETARGETFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribRRTDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class RTTextureTarget;

OSG_GEN_CONTAINERPTR(RTTextureTarget);
/*! \ingroup GrpContribRRTFieldTraits
    \ingroup GrpLibOSGContribRRT
 */
template <>
struct FieldTraits<RTTextureTarget *, nsOSG> :
    public FieldTraitsFCPtrBase<RTTextureTarget *, nsOSG>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<RTTextureTarget *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBRRT_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

};

template<> inline
const Char8 *FieldTraits<RTTextureTarget *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecRTTextureTargetPtr"; 
}

template<> inline
const Char8 *FieldTraits<RTTextureTarget *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecRTTextureTargetPtr"; 
}

template<> inline
const Char8 *FieldTraits<RTTextureTarget *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakRTTextureTargetPtr"; 
}

template<> inline
const Char8 *FieldTraits<RTTextureTarget *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdRTTextureTargetPtr"; 
}



#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribRRTFieldSFields */
typedef PointerSField<RTTextureTarget *,
                      RecordedRefCountPolicy, nsOSG  > SFRecRTTextureTargetPtr;
/*! \ingroup GrpContribRRTFieldSFields */
typedef PointerSField<RTTextureTarget *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecRTTextureTargetPtr;
/*! \ingroup GrpContribRRTFieldSFields */
typedef PointerSField<RTTextureTarget *,
                      WeakRefCountPolicy, nsOSG      > SFWeakRTTextureTargetPtr;
/*! \ingroup GrpContribRRTFieldSFields */
typedef PointerSField<RTTextureTarget *,
                      NoRefCountPolicy, nsOSG        > SFUncountedRTTextureTargetPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribRRTFieldSFields \ingroup GrpLibOSGContribRRT */
struct SFRecRTTextureTargetPtr : 
    public PointerSField<RTTextureTarget *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribRRTFieldSFields \ingroup GrpLibOSGContribRRT */
struct SFUnrecRTTextureTargetPtr : 
    public PointerSField<RTTextureTarget *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribRRTFieldSFields \ingroup GrpLibOSGContribRRT */
struct SFWeakRTTextureTargetPtr :
    public PointerSField<RTTextureTarget *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribRRTFieldSFields \ingroup GrpLibOSGContribRRT */
struct SFUncountedRTTextureTargetPtr :
    public PointerSField<RTTextureTarget *,
                         NoRefCountPolicy> {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGRTTEXTURETARGETFIELDS_H_ */
