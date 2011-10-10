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


#ifndef _OSGICONLABELFIELDS_H_
#define _OSGICONLABELFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribLabelingDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE


class IconLabel;

OSG_GEN_CONTAINERPTR(IconLabel);
/*! \ingroup GrpContribLabelingFieldTraits
    \ingroup GrpLibOSGContribLabeling
 */
template <>
struct FieldTraits<IconLabel *, nsOSG> :
    public FieldTraitsFCPtrBase<IconLabel *, nsOSG>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<IconLabel *, nsOSG>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBLABELING_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

};

template<> inline
const Char8 *FieldTraits<IconLabel *, nsOSG>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecIconLabelPtr"; 
}

template<> inline
const Char8 *FieldTraits<IconLabel *, nsOSG>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecIconLabelPtr"; 
}

template<> inline
const Char8 *FieldTraits<IconLabel *, nsOSG>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakIconLabelPtr"; 
}

template<> inline
const Char8 *FieldTraits<IconLabel *, nsOSG>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdIconLabelPtr"; 
}

template<> inline
const Char8 *FieldTraits<IconLabel *, nsOSG>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecIconLabelPtr"; 
}

template<> inline
const Char8 *FieldTraits<IconLabel *, nsOSG>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecIconLabelPtr"; 
}

template<> inline
const Char8 *FieldTraits<IconLabel *, nsOSG>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakIconLabelPtr"; 
}

template<> inline
const Char8 *FieldTraits<IconLabel *, nsOSG>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdIconLabelPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribLabelingFieldSFields */
typedef PointerSField<IconLabel *,
                      RecordedRefCountPolicy, nsOSG  > SFRecIconLabelPtr;
/*! \ingroup GrpContribLabelingFieldSFields */
typedef PointerSField<IconLabel *,
                      UnrecordedRefCountPolicy, nsOSG> SFUnrecIconLabelPtr;
/*! \ingroup GrpContribLabelingFieldSFields */
typedef PointerSField<IconLabel *,
                      WeakRefCountPolicy, nsOSG      > SFWeakIconLabelPtr;
/*! \ingroup GrpContribLabelingFieldSFields */
typedef PointerSField<IconLabel *,
                      NoRefCountPolicy, nsOSG        > SFUncountedIconLabelPtr;


/*! \ingroup GrpContribLabelingFieldMFields */
typedef PointerMField<IconLabel *,
                      RecordedRefCountPolicy, nsOSG  > MFRecIconLabelPtr;
/*! \ingroup GrpContribLabelingFieldMFields */
typedef PointerMField<IconLabel *,
                      UnrecordedRefCountPolicy, nsOSG> MFUnrecIconLabelPtr;
/*! \ingroup GrpContribLabelingFieldMFields */
typedef PointerMField<IconLabel *,
                      WeakRefCountPolicy, nsOSG      > MFWeakIconLabelPtr;
/*! \ingroup GrpContribLabelingFieldMFields */
typedef PointerMField<IconLabel *,
                      NoRefCountPolicy, nsOSG        > MFUncountedIconLabelPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribLabelingFieldSFields \ingroup GrpLibOSGContribLabeling */
struct SFRecIconLabelPtr : 
    public PointerSField<IconLabel *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribLabelingFieldSFields \ingroup GrpLibOSGContribLabeling */
struct SFUnrecIconLabelPtr : 
    public PointerSField<IconLabel *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribLabelingFieldSFields \ingroup GrpLibOSGContribLabeling */
struct SFWeakIconLabelPtr :
    public PointerSField<IconLabel *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribLabelingFieldSFields \ingroup GrpLibOSGContribLabeling */
struct SFUncountedIconLabelPtr :
    public PointerSField<IconLabel *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribLabelingFieldMFields \ingroup GrpLibOSGContribLabeling */
struct MFRecIconLabelPtr :
    public PointerMField<IconLabel *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribLabelingFieldMFields \ingroup GrpLibOSGContribLabeling */
struct MFUnrecIconLabelPtr :
    public PointerMField<IconLabel *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribLabelingFieldMFields \ingroup GrpLibOSGContribLabeling */
struct MFWeakIconLabelPtr :
    public PointerMField<IconLabel *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribLabelingFieldMFields \ingroup GrpLibOSGContribLabeling */
struct MFUncountedIconLabelPtr :
    public PointerMField<IconLabel *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGICONLABELFIELDS_H_ */
