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

#include "boost/python.hpp"
#include "OSGState_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "CubeTextureObjChunk.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_CubeTextureObjChunk_class(){

    { //::OSG::CubeTextureObjChunk
        typedef bp::class_< OSG::CubeTextureObjChunk, bp::bases< OSG::CubeTextureObjChunkBase >, OSG::CubeTextureObjChunk::ObjRecPtr, boost::noncopyable > CubeTextureObjChunk_exposer_t;
        CubeTextureObjChunk_exposer_t CubeTextureObjChunk_exposer = CubeTextureObjChunk_exposer_t( "CubeTextureObjChunk", bp::no_init );
        bp::scope CubeTextureObjChunk_scope( CubeTextureObjChunk_exposer );
        { //::OSG::CubeTextureObjChunk::changed
        
            typedef void ( ::OSG::CubeTextureObjChunk::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            CubeTextureObjChunk_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::CubeTextureObjChunk::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::CubeTextureObjChunk::dump
        
            typedef void ( ::OSG::CubeTextureObjChunk::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            CubeTextureObjChunk_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::CubeTextureObjChunk::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::CubeTextureObjChunk::getClass
        
            typedef ::OSG::StateChunkClass const * ( ::OSG::CubeTextureObjChunk::*getClass_function_type )(  ) const;
            
            CubeTextureObjChunk_exposer.def( 
                "getClass"
                , getClass_function_type( &::OSG::CubeTextureObjChunk::getClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CubeTextureObjChunk::getStaticClass
        
            typedef ::OSG::StateChunkClass const * ( *getStaticClass_function_type )(  );
            
            CubeTextureObjChunk_exposer.def( 
                "getStaticClass"
                , getStaticClass_function_type( &::OSG::CubeTextureObjChunk::getStaticClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CubeTextureObjChunk::getStaticClassId
        
            typedef ::OSG::UInt32 ( *getStaticClassId_function_type )(  );
            
            CubeTextureObjChunk_exposer.def( 
                "getStaticClassId"
                , getStaticClassId_function_type( &::OSG::CubeTextureObjChunk::getStaticClassId ) );
        
        }
        { //::OSG::CubeTextureObjChunk::isCubeTexture
        
            typedef bool ( ::OSG::CubeTextureObjChunk::*isCubeTexture_function_type )(  ) ;
            
            CubeTextureObjChunk_exposer.def( 
                "isCubeTexture"
                , isCubeTexture_function_type( &::OSG::CubeTextureObjChunk::isCubeTexture ) );
        
        }
        { //::OSG::CubeTextureObjChunk::switchCost
        
            typedef ::OSG::Real32 ( ::OSG::CubeTextureObjChunk::*switchCost_function_type )( ::OSG::StateChunk * ) ;
            
            CubeTextureObjChunk_exposer.def( 
                "switchCost"
                , switchCost_function_type( &::OSG::CubeTextureObjChunk::switchCost )
                , ( bp::arg("chunk") ) );
        
        }
        CubeTextureObjChunk_exposer.staticmethod( "getStaticClass" );
        CubeTextureObjChunk_exposer.staticmethod( "getStaticClassId" );
        pyopensg::register_transit< OSG::CubeTextureObjChunk >::execute();
        bp::implicitly_convertible< OSG::CubeTextureObjChunk::ObjRecPtr, OSG::CubeTextureObjChunk* >();
        bp::implicitly_convertible< OSG::CubeTextureObjChunk::ObjRecPtr, OSG::CubeTextureObjChunk::ObjCPtr >();
        bp::implicitly_convertible< OSG::CubeTextureObjChunk::ObjRecPtr, OSG::TextureObjChunk* >();
        bp::implicitly_convertible< OSG::CubeTextureObjChunk::ObjRecPtr, OSG::TextureObjChunk::ObjRecPtr >();
        bp::implicitly_convertible<OSG::CubeTextureObjChunk::ObjRecPtr, OSG::TextureObjChunk::ObjCPtr>();
    }

}