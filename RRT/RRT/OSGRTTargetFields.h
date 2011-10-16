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


#ifndef _OSGRTTARGETFIELDS_H_
#define _OSGRTTARGETFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribRRTDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class RTTarget;

OSG_GEN_CONTAINERPTR(RTTarget);
/*! \ingroup GrpContribRRTFieldTraits
    \ingroup GrpLibOSGContribRRT
 */
template <>
struct FieldTraits<RTTarget *, nsOSG> :
    public FieldTraitsFCPtrBase<RTTarget *, nsOSG>
{
  private:

    static PointerType             _type;

  public:

    typedef FieldTraits<RTTarget *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBRRT_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

};

template<> inline
const Char8 *FieldTraits<RTTarget *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecRTTargetPtr"; 
}

template<> inline
const Char8 *FieldTraits<RTTarget *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecRTTargetPtr"; 
}

template<> inline
const Char8 *FieldTraits<RTTarget *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakRTTargetPtr"; 
}

template<> inline
const Char8 *FieldTraits<RTTarget *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdRTTargetPtr"; 
}



#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribRRTFieldSFields */
typedef PointerSField<RTTarget *,
                      RecordedRefCountPolicy, nsOSG  > SFRecRTTargetPtr;
/*! \ingroup GrpContribRRTFieldSFields */
typedef PointerSField<RTTarget *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecRTTargetPtr;
/*! \ingroup GrpContribRRTFieldSFields */
typedef PointerSField<RTTarget *,
                      WeakRefCountPolicy, nsOSG      > SFWeakRTTargetPtr;
/*! \ingroup GrpContribRRTFieldSFields */
typedef PointerSField<RTTarget *,
                      NoRefCountPolicy, nsOSG        > SFUncountedRTTargetPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribRRTFieldSFields \ingroup GrpLibOSGContribRRT */
struct SFRecRTTargetPtr : 
    public PointerSField<RTTarget *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribRRTFieldSFields \ingroup GrpLibOSGContribRRT */
struct SFUnrecRTTargetPtr : 
    public PointerSField<RTTarget *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribRRTFieldSFields \ingroup GrpLibOSGContribRRT */
struct SFWeakRTTargetPtr :
    public PointerSField<RTTarget *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribRRTFieldSFields \ingroup GrpLibOSGContribRRT */
struct SFUncountedRTTargetPtr :
    public PointerSField<RTTarget *,
                         NoRefCountPolicy> {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGRTTARGETFIELDS_H_ */
