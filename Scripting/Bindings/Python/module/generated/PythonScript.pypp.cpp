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
#include "OSGScripting_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "PythonScript.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_PythonScript_class(){

    { //::OSG::PythonScript
        typedef bp::class_< OSG::PythonScript, bp::bases< OSG::PythonScriptBase >, OSG::PythonScript::ObjRecPtr, boost::noncopyable > PythonScript_exposer_t;
        PythonScript_exposer_t PythonScript_exposer = PythonScript_exposer_t( "PythonScript", bp::no_init );
        bp::scope PythonScript_scope( PythonScript_exposer );
        { //::OSG::PythonScript::addField
        
            typedef ::OSG::UInt32 ( ::OSG::PythonScript::*addField_function_type )( ::OSG::UInt32 const,::OSG::Char8 const * ) ;
            
            PythonScript_exposer.def( 
                "addField"
                , addField_function_type( &::OSG::PythonScript::addField )
                , ( bp::arg("uiFieldTypeId"), bp::arg("szFieldName") ) );
        
        }
        { //::OSG::PythonScript::addField
        
            typedef ::OSG::UInt32 ( ::OSG::PythonScript::*addField_function_type )( ::OSG::Char8 const *,::OSG::Char8 const * ) ;
            
            PythonScript_exposer.def( 
                "addField"
                , addField_function_type( &::OSG::PythonScript::addField )
                , ( bp::arg("szFieldType"), bp::arg("szFieldName") ) );
        
        }
        { //::OSG::PythonScript::changed
        
            typedef void ( ::OSG::PythonScript::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            PythonScript_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::PythonScript::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("detail") ) );
        
        }
        { //::OSG::PythonScript::dump
        
            typedef void ( ::OSG::PythonScript::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            PythonScript_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::PythonScript::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::PythonScript::findNamedComponent
        
            typedef ::OSG::FieldContainer * ( ::OSG::PythonScript::*findNamedComponent_function_type )( ::OSG::Char8 const * ) const;
            
            PythonScript_exposer.def( 
                "findNamedComponent"
                , findNamedComponent_function_type( &::OSG::PythonScript::findNamedComponent )
                , ( bp::arg("szName") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PythonScript::frame
        
            typedef void ( ::OSG::PythonScript::*frame_function_type )( ::OSG::Time,::OSG::UInt32 ) ;
            
            PythonScript_exposer.def( 
                "frame"
                , frame_function_type( &::OSG::PythonScript::frame )
                , ( bp::arg("timeStamp"), bp::arg("frameCount") ) );
        
        }
        { //::OSG::PythonScript::getSField
        
            typedef ::OSG::Plane const & ( ::OSG::PythonScript::*getSField_function_type )( ::std::string const &,::OSG::Plane const & ) ;
            
            PythonScript_exposer.def( 
                "getSField"
                , getSField_function_type( &::OSG::PythonScript::getSField )
                , ( bp::arg("name"), bp::arg("type") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::PythonScript::getSField
        
            typedef ::OSG::BoxVolume const & ( ::OSG::PythonScript::*getSField_function_type )( ::std::string const &,::OSG::BoxVolume const & ) ;
            
            PythonScript_exposer.def( 
                "getSField"
                , getSField_function_type( &::OSG::PythonScript::getSField )
                , ( bp::arg("name"), bp::arg("type") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::PythonScript::getSField
        
            typedef ::OSG::Color4< float > const & ( ::OSG::PythonScript::*getSField_function_type )( ::std::string const &,::OSG::Color4< float > const & ) ;
            
            PythonScript_exposer.def( 
                "getSField"
                , getSField_function_type( &::OSG::PythonScript::getSField )
                , ( bp::arg("name"), bp::arg("type") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::PythonScript::getSField
        
            typedef ::OSG::Color3< float > const & ( ::OSG::PythonScript::*getSField_function_type )( ::std::string const &,::OSG::Color3< float > const & ) ;
            
            PythonScript_exposer.def( 
                "getSField"
                , getSField_function_type( &::OSG::PythonScript::getSField )
                , ( bp::arg("name"), bp::arg("type") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::PythonScript::getSField
        
            typedef ::OSG::QuaternionBase< float > const & ( ::OSG::PythonScript::*getSField_function_type )( ::std::string const &,::OSG::QuaternionBase< float > const & ) ;
            
            PythonScript_exposer.def( 
                "getSField"
                , getSField_function_type( &::OSG::PythonScript::getSField )
                , ( bp::arg("name"), bp::arg("type") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::PythonScript::getSField
        
            typedef ::OSG::TransformationMatrix< double > const & ( ::OSG::PythonScript::*getSField_function_type )( ::std::string const &,::OSG::TransformationMatrix< double > const & ) ;
            
            PythonScript_exposer.def( 
                "getSField"
                , getSField_function_type( &::OSG::PythonScript::getSField )
                , ( bp::arg("name"), bp::arg("type") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::PythonScript::getSField
        
            typedef ::OSG::TransformationMatrix< float > const & ( ::OSG::PythonScript::*getSField_function_type )( ::std::string const &,::OSG::TransformationMatrix< float > const & ) ;
            
            PythonScript_exposer.def( 
                "getSField"
                , getSField_function_type( &::OSG::PythonScript::getSField )
                , ( bp::arg("name"), bp::arg("type") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::PythonScript::getSField
        
            typedef ::OSG::Vector< double, 4u > const & ( ::OSG::PythonScript::*getSField_function_type )( ::std::string const &,::OSG::Vector< double, 4u > const & ) ;
            
            PythonScript_exposer.def( 
                "getSField"
                , getSField_function_type( &::OSG::PythonScript::getSField )
                , ( bp::arg("name"), bp::arg("type") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::PythonScript::getSField
        
            typedef ::OSG::Vector< double, 3u > const & ( ::OSG::PythonScript::*getSField_function_type )( ::std::string const &,::OSG::Vector< double, 3u > const & ) ;
            
            PythonScript_exposer.def( 
                "getSField"
                , getSField_function_type( &::OSG::PythonScript::getSField )
                , ( bp::arg("name"), bp::arg("type") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::PythonScript::getSField
        
            typedef ::OSG::Vector< double, 2u > const & ( ::OSG::PythonScript::*getSField_function_type )( ::std::string const &,::OSG::Vector< double, 2u > const & ) ;
            
            PythonScript_exposer.def( 
                "getSField"
                , getSField_function_type( &::OSG::PythonScript::getSField )
                , ( bp::arg("name"), bp::arg("type") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::PythonScript::getSField
        
            typedef ::OSG::Vector< float, 4u > const & ( ::OSG::PythonScript::*getSField_function_type )( ::std::string const &,::OSG::Vector< float, 4u > const & ) ;
            
            PythonScript_exposer.def( 
                "getSField"
                , getSField_function_type( &::OSG::PythonScript::getSField )
                , ( bp::arg("name"), bp::arg("type") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::PythonScript::getSField
        
            typedef ::OSG::Vector< float, 3u > const & ( ::OSG::PythonScript::*getSField_function_type )( ::std::string const &,::OSG::Vector< float, 3u > const & ) ;
            
            PythonScript_exposer.def( 
                "getSField"
                , getSField_function_type( &::OSG::PythonScript::getSField )
                , ( bp::arg("name"), bp::arg("type") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::PythonScript::getSField
        
            typedef ::OSG::Vector< float, 2u > const & ( ::OSG::PythonScript::*getSField_function_type )( ::std::string const &,::OSG::Vector< float, 2u > const & ) ;
            
            PythonScript_exposer.def( 
                "getSField"
                , getSField_function_type( &::OSG::PythonScript::getSField )
                , ( bp::arg("name"), bp::arg("type") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::PythonScript::getSField
        
            typedef ::OSG::Point< double, 4u > const & ( ::OSG::PythonScript::*getSField_function_type )( ::std::string const &,::OSG::Point< double, 4u > const & ) ;
            
            PythonScript_exposer.def( 
                "getSField"
                , getSField_function_type( &::OSG::PythonScript::getSField )
                , ( bp::arg("name"), bp::arg("type") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::PythonScript::getSField
        
            typedef ::OSG::Point< double, 3u > const & ( ::OSG::PythonScript::*getSField_function_type )( ::std::string const &,::OSG::Point< double, 3u > const & ) ;
            
            PythonScript_exposer.def( 
                "getSField"
                , getSField_function_type( &::OSG::PythonScript::getSField )
                , ( bp::arg("name"), bp::arg("type") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::PythonScript::getSField
        
            typedef ::OSG::Point< double, 2u > const & ( ::OSG::PythonScript::*getSField_function_type )( ::std::string const &,::OSG::Point< double, 2u > const & ) ;
            
            PythonScript_exposer.def( 
                "getSField"
                , getSField_function_type( &::OSG::PythonScript::getSField )
                , ( bp::arg("name"), bp::arg("type") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::PythonScript::getSField
        
            typedef ::OSG::Point< float, 4u > const & ( ::OSG::PythonScript::*getSField_function_type )( ::std::string const &,::OSG::Point< float, 4u > const & ) ;
            
            PythonScript_exposer.def( 
                "getSField"
                , getSField_function_type( &::OSG::PythonScript::getSField )
                , ( bp::arg("name"), bp::arg("type") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::PythonScript::getSField
        
            typedef ::OSG::Point< float, 3u > const & ( ::OSG::PythonScript::*getSField_function_type )( ::std::string const &,::OSG::Point< float, 3u > const & ) ;
            
            PythonScript_exposer.def( 
                "getSField"
                , getSField_function_type( &::OSG::PythonScript::getSField )
                , ( bp::arg("name"), bp::arg("type") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::PythonScript::getSField
        
            typedef ::OSG::Point< float, 2u > const & ( ::OSG::PythonScript::*getSField_function_type )( ::std::string const &,::OSG::Point< float, 2u > const & ) ;
            
            PythonScript_exposer.def( 
                "getSField"
                , getSField_function_type( &::OSG::PythonScript::getSField )
                , ( bp::arg("name"), bp::arg("type") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::PythonScript::getSField
        
            typedef ::std::string const & ( ::OSG::PythonScript::*getSField_function_type )( ::std::string const &,::std::string const & ) ;
            
            PythonScript_exposer.def( 
                "getSField"
                , getSField_function_type( &::OSG::PythonScript::getSField )
                , ( bp::arg("name"), bp::arg("type") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::PythonScript::getSField
        
            typedef double const & ( ::OSG::PythonScript::*getSField_function_type )( ::std::string const &,double const & ) ;
            
            PythonScript_exposer.def( 
                "getSField"
                , getSField_function_type( &::OSG::PythonScript::getSField )
                , ( bp::arg("name"), bp::arg("type") )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::PythonScript::getSField
        
            typedef int const & ( ::OSG::PythonScript::*getSField_function_type )( ::std::string const &,int const & ) ;
            
            PythonScript_exposer.def( 
                "getSField"
                , getSField_function_type( &::OSG::PythonScript::getSField )
                , ( bp::arg("name"), bp::arg("type") )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::PythonScript::getSFieldBool
        
            typedef bool ( ::OSG::PythonScript::*getSFieldBool_function_type )( ::std::string const &,bool const ) ;
            
            PythonScript_exposer.def( 
                "getSFieldBool"
                , getSFieldBool_function_type( &::OSG::PythonScript::getSFieldBool )
                , ( bp::arg("name"), bp::arg("type") ) );
        
        }
        { //::OSG::PythonScript::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::PythonScript::*getType_function_type )(  ) ;
            
            PythonScript_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::PythonScript::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PythonScript::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::PythonScript::*getType_function_type )(  ) const;
            
            PythonScript_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::PythonScript::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PythonScript::init
        
            typedef bool ( ::OSG::PythonScript::*init_function_type )(  ) ;
            
            PythonScript_exposer.def( 
                "init"
                , init_function_type( &::OSG::PythonScript::init ) );
        
        }
        { //::OSG::PythonScript::myId
        
            typedef ::OSG::UInt32 ( ::OSG::PythonScript::*myId_function_type )(  ) ;
            
            PythonScript_exposer.def( 
                "myId"
                , myId_function_type( &::OSG::PythonScript::myId ) );
        
        }
        { //::OSG::PythonScript::setSField
        
            typedef void ( ::OSG::PythonScript::*setSField_function_type )( ::std::string const &,::OSG::Plane const & ) ;
            
            PythonScript_exposer.def( 
                "setSField"
                , setSField_function_type( &::OSG::PythonScript::setSField )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::PythonScript::setSField
        
            typedef void ( ::OSG::PythonScript::*setSField_function_type )( ::std::string const &,::OSG::BoxVolume const & ) ;
            
            PythonScript_exposer.def( 
                "setSField"
                , setSField_function_type( &::OSG::PythonScript::setSField )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::PythonScript::setSField
        
            typedef void ( ::OSG::PythonScript::*setSField_function_type )( ::std::string const &,::OSG::Color4< float > const & ) ;
            
            PythonScript_exposer.def( 
                "setSField"
                , setSField_function_type( &::OSG::PythonScript::setSField )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::PythonScript::setSField
        
            typedef void ( ::OSG::PythonScript::*setSField_function_type )( ::std::string const &,::OSG::Color3< float > const & ) ;
            
            PythonScript_exposer.def( 
                "setSField"
                , setSField_function_type( &::OSG::PythonScript::setSField )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::PythonScript::setSField
        
            typedef void ( ::OSG::PythonScript::*setSField_function_type )( ::std::string const &,::OSG::QuaternionBase< float > const & ) ;
            
            PythonScript_exposer.def( 
                "setSField"
                , setSField_function_type( &::OSG::PythonScript::setSField )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::PythonScript::setSField
        
            typedef void ( ::OSG::PythonScript::*setSField_function_type )( ::std::string const &,::OSG::TransformationMatrix< double > const & ) ;
            
            PythonScript_exposer.def( 
                "setSField"
                , setSField_function_type( &::OSG::PythonScript::setSField )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::PythonScript::setSField
        
            typedef void ( ::OSG::PythonScript::*setSField_function_type )( ::std::string const &,::OSG::TransformationMatrix< float > const & ) ;
            
            PythonScript_exposer.def( 
                "setSField"
                , setSField_function_type( &::OSG::PythonScript::setSField )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::PythonScript::setSField
        
            typedef void ( ::OSG::PythonScript::*setSField_function_type )( ::std::string const &,::OSG::Vector< double, 4u > const & ) ;
            
            PythonScript_exposer.def( 
                "setSField"
                , setSField_function_type( &::OSG::PythonScript::setSField )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::PythonScript::setSField
        
            typedef void ( ::OSG::PythonScript::*setSField_function_type )( ::std::string const &,::OSG::Vector< double, 3u > const & ) ;
            
            PythonScript_exposer.def( 
                "setSField"
                , setSField_function_type( &::OSG::PythonScript::setSField )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::PythonScript::setSField
        
            typedef void ( ::OSG::PythonScript::*setSField_function_type )( ::std::string const &,::OSG::Vector< double, 2u > const & ) ;
            
            PythonScript_exposer.def( 
                "setSField"
                , setSField_function_type( &::OSG::PythonScript::setSField )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::PythonScript::setSField
        
            typedef void ( ::OSG::PythonScript::*setSField_function_type )( ::std::string const &,::OSG::Vector< float, 4u > const & ) ;
            
            PythonScript_exposer.def( 
                "setSField"
                , setSField_function_type( &::OSG::PythonScript::setSField )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::PythonScript::setSField
        
            typedef void ( ::OSG::PythonScript::*setSField_function_type )( ::std::string const &,::OSG::Vector< float, 3u > const & ) ;
            
            PythonScript_exposer.def( 
                "setSField"
                , setSField_function_type( &::OSG::PythonScript::setSField )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::PythonScript::setSField
        
            typedef void ( ::OSG::PythonScript::*setSField_function_type )( ::std::string const &,::OSG::Vector< float, 2u > const & ) ;
            
            PythonScript_exposer.def( 
                "setSField"
                , setSField_function_type( &::OSG::PythonScript::setSField )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::PythonScript::setSField
        
            typedef void ( ::OSG::PythonScript::*setSField_function_type )( ::std::string const &,::OSG::Point< double, 4u > const & ) ;
            
            PythonScript_exposer.def( 
                "setSField"
                , setSField_function_type( &::OSG::PythonScript::setSField )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::PythonScript::setSField
        
            typedef void ( ::OSG::PythonScript::*setSField_function_type )( ::std::string const &,::OSG::Point< double, 3u > const & ) ;
            
            PythonScript_exposer.def( 
                "setSField"
                , setSField_function_type( &::OSG::PythonScript::setSField )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::PythonScript::setSField
        
            typedef void ( ::OSG::PythonScript::*setSField_function_type )( ::std::string const &,::OSG::Point< double, 2u > const & ) ;
            
            PythonScript_exposer.def( 
                "setSField"
                , setSField_function_type( &::OSG::PythonScript::setSField )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::PythonScript::setSField
        
            typedef void ( ::OSG::PythonScript::*setSField_function_type )( ::std::string const &,::OSG::Point< float, 4u > const & ) ;
            
            PythonScript_exposer.def( 
                "setSField"
                , setSField_function_type( &::OSG::PythonScript::setSField )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::PythonScript::setSField
        
            typedef void ( ::OSG::PythonScript::*setSField_function_type )( ::std::string const &,::OSG::Point< float, 3u > const & ) ;
            
            PythonScript_exposer.def( 
                "setSField"
                , setSField_function_type( &::OSG::PythonScript::setSField )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::PythonScript::setSField
        
            typedef void ( ::OSG::PythonScript::*setSField_function_type )( ::std::string const &,::OSG::Point< float, 2u > const & ) ;
            
            PythonScript_exposer.def( 
                "setSField"
                , setSField_function_type( &::OSG::PythonScript::setSField )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::PythonScript::setSField
        
            typedef void ( ::OSG::PythonScript::*setSField_function_type )( ::std::string const &,::std::string const & ) ;
            
            PythonScript_exposer.def( 
                "setSField"
                , setSField_function_type( &::OSG::PythonScript::setSField )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::PythonScript::setSField
        
            typedef void ( ::OSG::PythonScript::*setSField_function_type )( ::std::string const &,double const & ) ;
            
            PythonScript_exposer.def( 
                "setSField"
                , setSField_function_type( &::OSG::PythonScript::setSField )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::PythonScript::setSField
        
            typedef void ( ::OSG::PythonScript::*setSField_function_type )( ::std::string const &,int const & ) ;
            
            PythonScript_exposer.def( 
                "setSField"
                , setSField_function_type( &::OSG::PythonScript::setSField )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::PythonScript::setSFieldBool
        
            typedef void ( ::OSG::PythonScript::*setSFieldBool_function_type )( ::std::string const &,bool const ) ;
            
            PythonScript_exposer.def( 
                "setSFieldBool"
                , setSFieldBool_function_type( &::OSG::PythonScript::setSFieldBool )
                , ( bp::arg("name"), bp::arg("type") ) );
        
        }
        { //::OSG::PythonScript::setScriptChanged
        
            typedef void ( ::OSG::PythonScript::*setScriptChanged_function_type )(  ) ;
            
            PythonScript_exposer.def( 
                "setScriptChanged"
                , setScriptChanged_function_type( &::OSG::PythonScript::setScriptChanged ) );
        
        }
        { //::OSG::PythonScript::shutdown
        
            typedef void ( ::OSG::PythonScript::*shutdown_function_type )(  ) ;
            
            PythonScript_exposer.def( 
                "shutdown"
                , shutdown_function_type( &::OSG::PythonScript::shutdown ) );
        
        }
        pyopensg::register_transit< OSG::PythonScript >::execute();
        bp::implicitly_convertible< OSG::PythonScript::ObjRecPtr, OSG::PythonScript* >();
        bp::implicitly_convertible< OSG::PythonScript::ObjRecPtr, OSG::PythonScript::ObjCPtr >();
        bp::implicitly_convertible< OSG::PythonScript::ObjRecPtr, OSG::Script* >();
        bp::implicitly_convertible< OSG::PythonScript::ObjRecPtr, OSG::Script::ObjRecPtr >();
        bp::implicitly_convertible<OSG::PythonScript::ObjRecPtr, OSG::Script::ObjCPtr>();
    }

}
