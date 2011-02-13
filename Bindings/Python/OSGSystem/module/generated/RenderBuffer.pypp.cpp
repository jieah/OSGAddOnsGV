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
#include "OSGSystem_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "RenderBuffer.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_RenderBuffer_class(){

    { //::OSG::RenderBuffer
        typedef bp::class_< OSG::RenderBuffer, bp::bases< OSG::RenderBufferBase >, OSG::RenderBuffer::ObjRecPtr, boost::noncopyable > RenderBuffer_exposer_t;
        RenderBuffer_exposer_t RenderBuffer_exposer = RenderBuffer_exposer_t( "RenderBuffer", bp::no_init );
        bp::scope RenderBuffer_scope( RenderBuffer_exposer );
        { //::OSG::RenderBuffer::bind
        
            typedef void ( ::OSG::RenderBuffer::*bind_function_type )( ::OSG::DrawEnv *,::OSG::UInt32 ) ;
            
            RenderBuffer_exposer.def( 
                "bind"
                , bind_function_type( &::OSG::RenderBuffer::bind )
                , ( bp::arg("pEnv"), bp::arg("index")=(::OSG::UInt32)(0) ) );
        
        }
        { //::OSG::RenderBuffer::changed
        
            typedef void ( ::OSG::RenderBuffer::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            RenderBuffer_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::RenderBuffer::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("detail") ) );
        
        }
        { //::OSG::RenderBuffer::dump
        
            typedef void ( ::OSG::RenderBuffer::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            RenderBuffer_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::RenderBuffer::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::RenderBuffer::processPostDeactivate
        
            typedef void ( ::OSG::RenderBuffer::*processPostDeactivate_function_type )( ::OSG::DrawEnv * ) ;
            
            RenderBuffer_exposer.def( 
                "processPostDeactivate"
                , processPostDeactivate_function_type( &::OSG::RenderBuffer::processPostDeactivate )
                , ( bp::arg("pEnv") ) );
        
        }
        { //::OSG::RenderBuffer::processPreDeactivate
        
            typedef void ( ::OSG::RenderBuffer::*processPreDeactivate_function_type )( ::OSG::DrawEnv *,::OSG::UInt32 ) ;
            
            RenderBuffer_exposer.def( 
                "processPreDeactivate"
                , processPreDeactivate_function_type( &::OSG::RenderBuffer::processPreDeactivate )
                , ( bp::arg("pEnv"), bp::arg("index") ) );
        
        }
        { //::OSG::RenderBuffer::validate
        
            typedef void ( ::OSG::RenderBuffer::*validate_function_type )( ::OSG::DrawEnv * ) ;
            
            RenderBuffer_exposer.def( 
                "validate"
                , validate_function_type( &::OSG::RenderBuffer::validate )
                , ( bp::arg("pEnv") ) );
        
        }
        pyopensg::register_transit< OSG::RenderBuffer >::execute();
        bp::implicitly_convertible< OSG::RenderBuffer::ObjRecPtr, OSG::RenderBuffer* >();
        bp::implicitly_convertible< OSG::RenderBuffer::ObjRecPtr, OSG::RenderBuffer::ObjCPtr >();
        bp::implicitly_convertible< OSG::RenderBuffer::ObjRecPtr, OSG::FrameBufferAttachment* >();
        bp::implicitly_convertible< OSG::RenderBuffer::ObjRecPtr, OSG::FrameBufferAttachment::ObjRecPtr >();
        bp::implicitly_convertible<OSG::RenderBuffer::ObjRecPtr, OSG::FrameBufferAttachment::ObjCPtr>();
    }

}