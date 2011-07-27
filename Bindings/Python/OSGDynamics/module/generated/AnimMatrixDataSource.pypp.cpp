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
#include "OSGDynamics_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "AnimMatrixDataSource.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_AnimMatrixDataSource_class(){

    { //::OSG::AnimMatrixDataSource
        typedef bp::class_< OSG::AnimMatrixDataSource, bp::bases< OSG::AnimMatrixDataSourceBase >, OSG::AnimMatrixDataSource::ObjRecPtr, boost::noncopyable > AnimMatrixDataSource_exposer_t;
        AnimMatrixDataSource_exposer_t AnimMatrixDataSource_exposer = AnimMatrixDataSource_exposer_t( "AnimMatrixDataSource", bp::no_init );
        bp::scope AnimMatrixDataSource_scope( AnimMatrixDataSource_exposer );
        { //::OSG::AnimMatrixDataSource::changed
        
            typedef void ( ::OSG::AnimMatrixDataSource::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            AnimMatrixDataSource_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::AnimMatrixDataSource::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::AnimMatrixDataSource::createBlender
        
            typedef ::OSG::AnimBlenderTransitPtr ( ::OSG::AnimMatrixDataSource::*createBlender_function_type )(  ) const;
            
            AnimMatrixDataSource_exposer.def( 
                "createBlender"
                , createBlender_function_type( &::OSG::AnimMatrixDataSource::createBlender ) );
        
        }
        { //::OSG::AnimMatrixDataSource::createChannel
        
            typedef ::OSG::AnimChannelTransitPtr ( ::OSG::AnimMatrixDataSource::*createChannel_function_type )(  ) const;
            
            AnimMatrixDataSource_exposer.def( 
                "createChannel"
                , createChannel_function_type( &::OSG::AnimMatrixDataSource::createChannel ) );
        
        }
        { //::OSG::AnimMatrixDataSource::dump
        
            typedef void ( ::OSG::AnimMatrixDataSource::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            AnimMatrixDataSource_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::AnimMatrixDataSource::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::AnimMatrixDataSource::evaluate
        
            typedef void ( ::OSG::AnimMatrixDataSource::*evaluate_function_type )( ::OSG::Matrix &,::OSG::Real32 ) ;
            
            AnimMatrixDataSource_exposer.def( 
                "evaluate"
                , evaluate_function_type( &::OSG::AnimMatrixDataSource::evaluate )
                , ( bp::arg("outValue"), bp::arg("inValue") ) );
        
        }
        pyopensg::register_transit< OSG::AnimMatrixDataSource >::execute();
        bp::implicitly_convertible< OSG::AnimMatrixDataSource::ObjRecPtr, OSG::AnimMatrixDataSource* >();
        bp::implicitly_convertible< OSG::AnimMatrixDataSource::ObjRecPtr, OSG::AnimMatrixDataSource::ObjCPtr >();
        bp::implicitly_convertible< OSG::AnimMatrixDataSource::ObjRecPtr, OSG::AnimKeyFrameDataSource* >();
        bp::implicitly_convertible< OSG::AnimMatrixDataSource::ObjRecPtr, OSG::AnimKeyFrameDataSource::ObjRecPtr >();
        bp::implicitly_convertible<OSG::AnimMatrixDataSource::ObjRecPtr, OSG::AnimKeyFrameDataSource::ObjCPtr>();
    }

}