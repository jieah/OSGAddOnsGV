// This file has been generated by Py++.


// PyOpenSG is (C) Copyright 2005-2009 by Allen Bierbaum
//
// This file is part of PyOpenSG.
//
// PyOpenSG is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License as published by the Free
// Software Foundation; either version 2 of the License, or (at your option)
// any later version.
//
// PyOpenSG is distributed in the hope that it will be useful, but WITHOUT ANY
// WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
// FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
// more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#if __GNUC__ >= 4 || __GNUC_MINOR__ >=3
#pragma GCC diagnostic warning "-Wold-style-cast"
#endif
#if WIN32
#pragma warning(disable : 4267)
#pragma warning(disable : 4344)
#endif

#include "boost/python.hpp"
#include "OSGSystem_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "LayeredTextureBufferBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_LayeredTextureBufferBase_class(){

    { //::OSG::LayeredTextureBufferBase
        typedef bp::class_< OSG::LayeredTextureBufferBase, bp::bases< OSG::FrameBufferAttachment >, boost::noncopyable > LayeredTextureBufferBase_exposer_t;
        LayeredTextureBufferBase_exposer_t LayeredTextureBufferBase_exposer = LayeredTextureBufferBase_exposer_t( "LayeredTextureBufferBase", bp::no_init );
        bp::scope LayeredTextureBufferBase_scope( LayeredTextureBufferBase_exposer );
        bp::scope().attr("TextureFieldId") = (int)OSG::LayeredTextureBufferBase::TextureFieldId;
        bp::scope().attr("TexTargetFieldId") = (int)OSG::LayeredTextureBufferBase::TexTargetFieldId;
        bp::scope().attr("LevelFieldId") = (int)OSG::LayeredTextureBufferBase::LevelFieldId;
        bp::scope().attr("ZoffsetFieldId") = (int)OSG::LayeredTextureBufferBase::ZoffsetFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::LayeredTextureBufferBase::NextFieldId;
        { //::OSG::LayeredTextureBufferBase::copyFromBin
        
            typedef void ( ::OSG::LayeredTextureBufferBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            LayeredTextureBufferBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::LayeredTextureBufferBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::LayeredTextureBufferBase::copyToBin
        
            typedef void ( ::OSG::LayeredTextureBufferBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            LayeredTextureBufferBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::LayeredTextureBufferBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::LayeredTextureBufferBase::create
        
            typedef ::OSG::LayeredTextureBufferTransitPtr ( *create_function_type )(  );
            
            LayeredTextureBufferBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::LayeredTextureBufferBase::create ) );
        
        }
        { //::OSG::LayeredTextureBufferBase::createDependent
        
            typedef ::OSG::LayeredTextureBufferTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            LayeredTextureBufferBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::LayeredTextureBufferBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::LayeredTextureBufferBase::createLocal
        
            typedef ::OSG::LayeredTextureBufferTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            LayeredTextureBufferBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::LayeredTextureBufferBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::LayeredTextureBufferBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::LayeredTextureBufferBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            LayeredTextureBufferBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::LayeredTextureBufferBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::LayeredTextureBufferBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            LayeredTextureBufferBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::LayeredTextureBufferBase::getClassGroupId ) );
        
        }
        { //::OSG::LayeredTextureBufferBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            LayeredTextureBufferBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::LayeredTextureBufferBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::LayeredTextureBufferBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            LayeredTextureBufferBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::LayeredTextureBufferBase::getClassTypeId ) );
        
        }
        { //::OSG::LayeredTextureBufferBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::LayeredTextureBufferBase::*getContainerSize_function_type )(  ) const;
            
            LayeredTextureBufferBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::LayeredTextureBufferBase::getContainerSize ) );
        
        }
        { //::OSG::LayeredTextureBufferBase::getLevel
        
            typedef ::OSG::UInt32 ( ::OSG::LayeredTextureBufferBase::*getLevel_function_type )(  ) const;
            
            LayeredTextureBufferBase_exposer.def( 
                "getLevel"
                , getLevel_function_type( &::OSG::LayeredTextureBufferBase::getLevel ) );
        
        }
        { //::OSG::LayeredTextureBufferBase::getSFLevel
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::LayeredTextureBufferBase::*getSFLevel_function_type )(  ) const;
            
            LayeredTextureBufferBase_exposer.def( 
                "getSFLevel"
                , getSFLevel_function_type( &::OSG::LayeredTextureBufferBase::getSFLevel )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::LayeredTextureBufferBase::getSFTexTarget
        
            typedef ::OSG::SFGLenum const * ( ::OSG::LayeredTextureBufferBase::*getSFTexTarget_function_type )(  ) const;
            
            LayeredTextureBufferBase_exposer.def( 
                "getSFTexTarget"
                , getSFTexTarget_function_type( &::OSG::LayeredTextureBufferBase::getSFTexTarget )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::LayeredTextureBufferBase::getSFTexture
        
            typedef ::OSG::SFUnrecTextureObjChunkPtr const * ( ::OSG::LayeredTextureBufferBase::*getSFTexture_function_type )(  ) const;
            
            LayeredTextureBufferBase_exposer.def( 
                "getSFTexture"
                , getSFTexture_function_type( &::OSG::LayeredTextureBufferBase::getSFTexture )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::LayeredTextureBufferBase::getSFZoffset
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::LayeredTextureBufferBase::*getSFZoffset_function_type )(  ) const;
            
            LayeredTextureBufferBase_exposer.def( 
                "getSFZoffset"
                , getSFZoffset_function_type( &::OSG::LayeredTextureBufferBase::getSFZoffset )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::LayeredTextureBufferBase::getTexTarget
        
            typedef ::GLenum const & ( ::OSG::LayeredTextureBufferBase::*getTexTarget_function_type )(  ) const;
            
            LayeredTextureBufferBase_exposer.def( 
                "getTexTarget"
                , getTexTarget_function_type( &::OSG::LayeredTextureBufferBase::getTexTarget )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::LayeredTextureBufferBase::getTexture
        
            typedef ::OSG::TextureObjChunk * ( ::OSG::LayeredTextureBufferBase::*getTexture_function_type )(  ) const;
            
            LayeredTextureBufferBase_exposer.def( 
                "getTexture"
                , getTexture_function_type( &::OSG::LayeredTextureBufferBase::getTexture )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::LayeredTextureBufferBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::LayeredTextureBufferBase::*getType_function_type )(  ) ;
            
            LayeredTextureBufferBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::LayeredTextureBufferBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::LayeredTextureBufferBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::LayeredTextureBufferBase::*getType_function_type )(  ) const;
            
            LayeredTextureBufferBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::LayeredTextureBufferBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::LayeredTextureBufferBase::getZoffset
        
            typedef ::OSG::UInt32 ( ::OSG::LayeredTextureBufferBase::*getZoffset_function_type )(  ) const;
            
            LayeredTextureBufferBase_exposer.def( 
                "getZoffset"
                , getZoffset_function_type( &::OSG::LayeredTextureBufferBase::getZoffset ) );
        
        }
        { //::OSG::LayeredTextureBufferBase::setLevel
        
            typedef void ( ::OSG::LayeredTextureBufferBase::*setLevel_function_type )( ::OSG::UInt32 const ) ;
            
            LayeredTextureBufferBase_exposer.def( 
                "setLevel"
                , setLevel_function_type( &::OSG::LayeredTextureBufferBase::setLevel )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::LayeredTextureBufferBase::setTexTarget
        
            typedef void ( ::OSG::LayeredTextureBufferBase::*setTexTarget_function_type )( ::GLenum const & ) ;
            
            LayeredTextureBufferBase_exposer.def( 
                "setTexTarget"
                , setTexTarget_function_type( &::OSG::LayeredTextureBufferBase::setTexTarget )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::LayeredTextureBufferBase::setTexture
        
            typedef void ( ::OSG::LayeredTextureBufferBase::*setTexture_function_type )( ::OSG::TextureObjChunk * const ) ;
            
            LayeredTextureBufferBase_exposer.def( 
                "setTexture"
                , setTexture_function_type( &::OSG::LayeredTextureBufferBase::setTexture )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::LayeredTextureBufferBase::setZoffset
        
            typedef void ( ::OSG::LayeredTextureBufferBase::*setZoffset_function_type )( ::OSG::UInt32 const ) ;
            
            LayeredTextureBufferBase_exposer.def( 
                "setZoffset"
                , setZoffset_function_type( &::OSG::LayeredTextureBufferBase::setZoffset )
                , ( bp::arg("value") ) );
        
        }
        LayeredTextureBufferBase_exposer.staticmethod( "create" );
        LayeredTextureBufferBase_exposer.staticmethod( "createDependent" );
        LayeredTextureBufferBase_exposer.staticmethod( "createLocal" );
        LayeredTextureBufferBase_exposer.staticmethod( "getClassGroupId" );
        LayeredTextureBufferBase_exposer.staticmethod( "getClassType" );
        LayeredTextureBufferBase_exposer.staticmethod( "getClassTypeId" );
    }

}