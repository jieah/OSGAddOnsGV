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
#include "OSGGroup_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "AlgorithmStageBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_AlgorithmStageBase_class(){

    { //::OSG::AlgorithmStageBase
        typedef bp::class_< OSG::AlgorithmStageBase, bp::bases< OSG::Stage >, boost::noncopyable > AlgorithmStageBase_exposer_t;
        AlgorithmStageBase_exposer_t AlgorithmStageBase_exposer = AlgorithmStageBase_exposer_t( "AlgorithmStageBase", bp::no_init );
        bp::scope AlgorithmStageBase_scope( AlgorithmStageBase_exposer );
        bp::scope().attr("AlgorithmFieldId") = (int)OSG::AlgorithmStageBase::AlgorithmFieldId;
        bp::scope().attr("ProjectionModeFieldId") = (int)OSG::AlgorithmStageBase::ProjectionModeFieldId;
        bp::scope().attr("CopyViewingFieldId") = (int)OSG::AlgorithmStageBase::CopyViewingFieldId;
        bp::scope().attr("ProjectionMatrixFieldId") = (int)OSG::AlgorithmStageBase::ProjectionMatrixFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::AlgorithmStageBase::NextFieldId;
        { //::OSG::AlgorithmStageBase::copyFromBin
        
            typedef void ( ::OSG::AlgorithmStageBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            AlgorithmStageBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::AlgorithmStageBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::AlgorithmStageBase::copyToBin
        
            typedef void ( ::OSG::AlgorithmStageBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            AlgorithmStageBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::AlgorithmStageBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::AlgorithmStageBase::create
        
            typedef ::OSG::AlgorithmStageTransitPtr ( *create_function_type )(  );
            
            AlgorithmStageBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::AlgorithmStageBase::create ) );
        
        }
        { //::OSG::AlgorithmStageBase::createDependent
        
            typedef ::OSG::AlgorithmStageTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            AlgorithmStageBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::AlgorithmStageBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::AlgorithmStageBase::createLocal
        
            typedef ::OSG::AlgorithmStageTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            AlgorithmStageBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::AlgorithmStageBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::AlgorithmStageBase::getAlgorithm
        
            typedef ::OSG::Algorithm * ( ::OSG::AlgorithmStageBase::*getAlgorithm_function_type )(  ) const;
            
            AlgorithmStageBase_exposer.def( 
                "getAlgorithm"
                , getAlgorithm_function_type( &::OSG::AlgorithmStageBase::getAlgorithm )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::AlgorithmStageBase::getBinSize
        
            typedef ::OSG::UInt32 ( ::OSG::AlgorithmStageBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            AlgorithmStageBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::AlgorithmStageBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::AlgorithmStageBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            AlgorithmStageBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::AlgorithmStageBase::getClassGroupId ) );
        
        }
        { //::OSG::AlgorithmStageBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            AlgorithmStageBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::AlgorithmStageBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::AlgorithmStageBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            AlgorithmStageBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::AlgorithmStageBase::getClassTypeId ) );
        
        }
        { //::OSG::AlgorithmStageBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::AlgorithmStageBase::*getContainerSize_function_type )(  ) const;
            
            AlgorithmStageBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::AlgorithmStageBase::getContainerSize ) );
        
        }
        { //::OSG::AlgorithmStageBase::getCopyViewing
        
            typedef bool ( ::OSG::AlgorithmStageBase::*getCopyViewing_function_type )(  ) const;
            
            AlgorithmStageBase_exposer.def( 
                "getCopyViewing"
                , getCopyViewing_function_type( &::OSG::AlgorithmStageBase::getCopyViewing ) );
        
        }
        { //::OSG::AlgorithmStageBase::getProjectionMatrix
        
            typedef ::OSG::Matrix const & ( ::OSG::AlgorithmStageBase::*getProjectionMatrix_function_type )(  ) const;
            
            AlgorithmStageBase_exposer.def( 
                "getProjectionMatrix"
                , getProjectionMatrix_function_type( &::OSG::AlgorithmStageBase::getProjectionMatrix )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::AlgorithmStageBase::getProjectionMode
        
            typedef ::OSG::UInt32 ( ::OSG::AlgorithmStageBase::*getProjectionMode_function_type )(  ) const;
            
            AlgorithmStageBase_exposer.def( 
                "getProjectionMode"
                , getProjectionMode_function_type( &::OSG::AlgorithmStageBase::getProjectionMode ) );
        
        }
        { //::OSG::AlgorithmStageBase::getSFAlgorithm
        
            typedef ::OSG::SFUnrecAlgorithmPtr const * ( ::OSG::AlgorithmStageBase::*getSFAlgorithm_function_type )(  ) const;
            
            AlgorithmStageBase_exposer.def( 
                "getSFAlgorithm"
                , getSFAlgorithm_function_type( &::OSG::AlgorithmStageBase::getSFAlgorithm )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::AlgorithmStageBase::getSFCopyViewing
        
            typedef ::OSG::SFBool const * ( ::OSG::AlgorithmStageBase::*getSFCopyViewing_function_type )(  ) const;
            
            AlgorithmStageBase_exposer.def( 
                "getSFCopyViewing"
                , getSFCopyViewing_function_type( &::OSG::AlgorithmStageBase::getSFCopyViewing )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::AlgorithmStageBase::getSFProjectionMatrix
        
            typedef ::OSG::SFMatrix const * ( ::OSG::AlgorithmStageBase::*getSFProjectionMatrix_function_type )(  ) const;
            
            AlgorithmStageBase_exposer.def( 
                "getSFProjectionMatrix"
                , getSFProjectionMatrix_function_type( &::OSG::AlgorithmStageBase::getSFProjectionMatrix )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::AlgorithmStageBase::getSFProjectionMode
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::AlgorithmStageBase::*getSFProjectionMode_function_type )(  ) const;
            
            AlgorithmStageBase_exposer.def( 
                "getSFProjectionMode"
                , getSFProjectionMode_function_type( &::OSG::AlgorithmStageBase::getSFProjectionMode )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::AlgorithmStageBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::AlgorithmStageBase::*getType_function_type )(  ) ;
            
            AlgorithmStageBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::AlgorithmStageBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::AlgorithmStageBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::AlgorithmStageBase::*getType_function_type )(  ) const;
            
            AlgorithmStageBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::AlgorithmStageBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::AlgorithmStageBase::setAlgorithm
        
            typedef void ( ::OSG::AlgorithmStageBase::*setAlgorithm_function_type )( ::OSG::Algorithm * const ) ;
            
            AlgorithmStageBase_exposer.def( 
                "setAlgorithm"
                , setAlgorithm_function_type( &::OSG::AlgorithmStageBase::setAlgorithm )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::AlgorithmStageBase::setCopyViewing
        
            typedef void ( ::OSG::AlgorithmStageBase::*setCopyViewing_function_type )( bool const ) ;
            
            AlgorithmStageBase_exposer.def( 
                "setCopyViewing"
                , setCopyViewing_function_type( &::OSG::AlgorithmStageBase::setCopyViewing )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::AlgorithmStageBase::setProjectionMatrix
        
            typedef void ( ::OSG::AlgorithmStageBase::*setProjectionMatrix_function_type )( ::OSG::Matrix const & ) ;
            
            AlgorithmStageBase_exposer.def( 
                "setProjectionMatrix"
                , setProjectionMatrix_function_type( &::OSG::AlgorithmStageBase::setProjectionMatrix )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::AlgorithmStageBase::setProjectionMode
        
            typedef void ( ::OSG::AlgorithmStageBase::*setProjectionMode_function_type )( ::OSG::UInt32 const ) ;
            
            AlgorithmStageBase_exposer.def( 
                "setProjectionMode"
                , setProjectionMode_function_type( &::OSG::AlgorithmStageBase::setProjectionMode )
                , ( bp::arg("value") ) );
        
        }
        AlgorithmStageBase_exposer.staticmethod( "create" );
        AlgorithmStageBase_exposer.staticmethod( "createDependent" );
        AlgorithmStageBase_exposer.staticmethod( "createLocal" );
        AlgorithmStageBase_exposer.staticmethod( "getClassGroupId" );
        AlgorithmStageBase_exposer.staticmethod( "getClassType" );
        AlgorithmStageBase_exposer.staticmethod( "getClassTypeId" );
    }

}