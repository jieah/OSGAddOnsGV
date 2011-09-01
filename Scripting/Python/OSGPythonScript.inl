/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *                     Copyright 2000-2002 by OpenSG Forum                   *
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

#include "OSGSysFields.h"
#include "OSGVecFields.h"
#include "OSGMathFields.h"

//#define DEBUG_FIELDACCESS

OSG_BEGIN_NAMESPACE

//-----------------------------------------------------------------------------
// ------------------------ DataField templates -------------------------------
//-----------------------------------------------------------------------------

#define OSGPY_GEN_DATAFIELD_ACCESS_METHODS(FieldT)                 \
    template const FieldT& PythonScript::getSField<FieldT>         \
                                         (const std::string& name, \
                                          const FieldT& value);    \
    template void          PythonScript::setSField<FieldT>         \
                                         (const std::string& name, \
                                          const FieldT& value);

template <class T>
void PythonScript::setSField(const std::string& name, const T& value)
{
    FieldDescriptionBase *fieldDesc =
            this->getType().getFieldDesc(name.c_str());
    assert(fieldDesc);

    typedef SField<T> SFieldT;

    EditFieldHandlePtr editHandle = fieldDesc->editField(*this);
    SFieldT *sfield = static_cast<SFieldT*>(editHandle->getField());
    sfield->setValue(value);

#ifdef DEBUG_FIELDACCESS
    std::cerr << "setSField: type=" << typeid(value).name() << std::endl;
    std::cerr << "sfield: " << sfield << std::endl;
    std::cerr << "Updated (id=" << fieldDesc->getTypeId() << "/name='" << name
              << "'/type='" << sfield->getClassType().getName() << "') to " << sfield->getValue() << std::endl;
#endif
}

template<class T>
const T& PythonScript::getSField(const std::string& name, const T& type)
{
    FieldDescriptionBase *fieldDesc = this->getType().getFieldDesc(name.c_str());
    assert(fieldDesc);

    typedef SField<T> SFieldT;

    GetFieldHandlePtr getHandle = fieldDesc->getField(*this);
    const SFieldT *sfield = static_cast<const SFieldT*>(getHandle->getField());

#ifdef DEBUG_FIELDACCESS
    std::cerr << "[" << fieldDesc->getFieldType().getName() << "] Retrieved value "
              << sfield->getValue() << " from (id="
              << fieldDesc->getTypeId() << "/name='" << name << "'/type='"
              << sfield->getClassType().getName() << "')" << std::endl;
#endif

    return(sfield->getValue());
}

//-----------------------------------------------------------------------------
// ----------------- DataField templates with Namespace -----------------------
//-----------------------------------------------------------------------------

#if 0
#define OSGPY_GEN_DATAFIELD_ACCESS_METHODS_NS(FieldT, iNameSpace)  \
    template const FieldT& PythonScript::getSFieldNS<FieldT,       \
                                                   2>     \
                                         (const std::string& name, \
                                          const FieldT& value);    \
    template void          PythonScript::setSFieldNS<FieldT,       \
                                                   2>     \
                                         (const std::string& name, \
                                          const FieldT& value);

template <class T, Int32 iNameSpace>
void PythonScript::setSFieldNS(const std::string& name, const T& value)
{
    FieldDescriptionBase *fieldDesc =
            this->getType().getFieldDesc(name.c_str());
    assert(fieldDesc);

    typedef SField<T, iNameSpace> SFieldT;

    EditFieldHandlePtr editHandle = fieldDesc->editField(*this);
    SFieldT *sfield = static_cast<SFieldT*>(editHandle->getField());
    sfield->setValue(value);
}

template<class T, Int32 iNameSpace>
const T& PythonScript::getSFieldNS(const std::string& name, const T& type)
{
    FieldDescriptionBase *fieldDesc = this->getType().getFieldDesc(name.c_str());
    assert(fieldDesc);

    typedef SField<T, iNameSpace> SFieldT;

    GetFieldHandlePtr getHandle = fieldDesc->getField(*this);
    const SFieldT *sfield = static_cast<const SFieldT*>(getHandle->getField());

    return(sfield->getValue());
}
#endif

//-----------------------------------------------------------------------------
// ---------------------- PointerField templates ------------------------------
//-----------------------------------------------------------------------------

#if 0
#define OSGPY_GENERATE_POINTERFIELD_ACCESS_METHODS(FieldT)         \
    template const FieldT* PythonScript::getPointerSField<FieldT>  \
                                         (const std::string& name, \
                                          FieldT* value);    \
    template void          PythonScript::setPointerSField<FieldT>  \
                                         (const std::string& name, \
                                          FieldT* value);

template <class T>
void PythonScript::setPointerSField(const std::string& name, T* value)
{
    FieldDescriptionBase *fieldDesc =
            this->getType().getFieldDesc(name.c_str());
    assert(fieldDesc);

    typedef PointerSField<T*, UnrecordedRefCountPolicy, 0> SFieldT;

    EditFieldHandlePtr editHandle = fieldDesc->editField(*this);
    SFieldT *sfield = static_cast<SFieldT*>(editHandle->getField());
    sfield->setValue(value);

#ifdef DEBUG_FIELDACCESS
    std::cerr << "Updated (id=" << fieldDesc->getTypeId() << "/name='" << name
              << "'/type='" << sfield->getClassType().getName() << "') to " << sfield->getValue() << std::endl;
#endif
}

template<class T>
const T* PythonScript::getPointerSField(const std::string& name, T* type)
{
    FieldDescriptionBase *fieldDesc = this->getType().getFieldDesc(name.c_str());
    assert(fieldDesc);

    typedef PointerSField<T*, UnrecordedRefCountPolicy, 0> SFieldT;

    GetFieldHandlePtr getHandle = fieldDesc->getField(*this);
    const SFieldT *sfield = static_cast<const SFieldT*>(getHandle->getField());

#ifdef DEBUG_FIELDACCESS
    std::cerr << "getSField: type=" << typeid(type).name() << std::endl;
    std::cerr << "sfield: " << sfield << std::endl;
    std::cerr << "[" << fieldDesc->getFieldType().getName() << "] Retrieved value "
              << sfield->getValue() << " from (id="
              << fieldDesc->getTypeId() << "/name='" << name << "'/type='"
              << sfield->getClassType().getName() << "')" << std::endl;
#endif

    return(sfield->getValue());
}
#endif

//-----------------------------------------------------------------------------
// --------------------- Template instantiations ------------------------------
//-----------------------------------------------------------------------------

                                                // -> CSM equivalent (taken from OSGScanParseSkelParser.cpp)
OSGPY_GEN_DATAFIELD_ACCESS_METHODS(Int32      ) // -> SFInt32
OSGPY_GEN_DATAFIELD_ACCESS_METHODS(Real64     ) // -> SFDouble
OSGPY_GEN_DATAFIELD_ACCESS_METHODS(std::string) // -> SFString

OSGPY_GEN_DATAFIELD_ACCESS_METHODS(Pnt2f      ) // -> SFPnt2f
OSGPY_GEN_DATAFIELD_ACCESS_METHODS(Pnt3f      ) // -> SFPnt3f
OSGPY_GEN_DATAFIELD_ACCESS_METHODS(Pnt4f      ) // -> SFPnt4f
OSGPY_GEN_DATAFIELD_ACCESS_METHODS(Pnt2d      ) // -> SFPnt2d
OSGPY_GEN_DATAFIELD_ACCESS_METHODS(Pnt3d      ) // -> SFPnt4d
OSGPY_GEN_DATAFIELD_ACCESS_METHODS(Pnt4d      ) // -> SFPnt4d

OSGPY_GEN_DATAFIELD_ACCESS_METHODS(Vec2f      ) // -> SFVec2f
OSGPY_GEN_DATAFIELD_ACCESS_METHODS(Vec3f      ) // -> SFVec3f
OSGPY_GEN_DATAFIELD_ACCESS_METHODS(Vec4f      ) // -> SFVec4f
OSGPY_GEN_DATAFIELD_ACCESS_METHODS(Vec2d      ) // -> SFVec2d
OSGPY_GEN_DATAFIELD_ACCESS_METHODS(Vec3d      ) // -> SFVec4d
OSGPY_GEN_DATAFIELD_ACCESS_METHODS(Vec4d      ) // -> SFVec4d

OSGPY_GEN_DATAFIELD_ACCESS_METHODS(Matrix     ) // -> SFMatrix
OSGPY_GEN_DATAFIELD_ACCESS_METHODS(Matrix4d   ) // -> SFMatrix4d
OSGPY_GEN_DATAFIELD_ACCESS_METHODS(Quaternion ) // -> SFRotation

OSGPY_GEN_DATAFIELD_ACCESS_METHODS(Color3f    ) // -> SFColor
OSGPY_GEN_DATAFIELD_ACCESS_METHODS(Color4f    ) // -> SFColorRGBA

OSGPY_GEN_DATAFIELD_ACCESS_METHODS(BoxVolume  ) // -> SFVolume
OSGPY_GEN_DATAFIELD_ACCESS_METHODS(Plane      ) // -> SFPlane

//OSGPY_GENERATE_POINTERFIELD_ACCESS_METHODS(Node) // -> SFNode

OSG_END_NAMESPACE

