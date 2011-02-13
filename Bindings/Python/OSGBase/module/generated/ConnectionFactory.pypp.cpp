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
#include "OSGBase_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "ConnectionFactory.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_ConnectionFactory_class(){

    { //::OSG::SingletonHolder< OSG::ConnectionFactoryBase >
        typedef bp::class_< OSG::SingletonHolder< OSG::ConnectionFactoryBase >, boost::noncopyable > ConnectionFactory_exposer_t;
        ConnectionFactory_exposer_t ConnectionFactory_exposer = ConnectionFactory_exposer_t( "ConnectionFactory", bp::no_init );
        bp::scope ConnectionFactory_scope( ConnectionFactory_exposer );
        { //::OSG::SingletonHolder< OSG::ConnectionFactoryBase >::destroy
        
            typedef OSG::SingletonHolder< OSG::ConnectionFactoryBase > exported_class_t;
            typedef bool ( *destroy_function_type )(  );
            
            ConnectionFactory_exposer.def( 
                "destroy"
                , destroy_function_type( &::OSG::SingletonHolder< OSG::ConnectionFactoryBase >::destroy ) );
        
        }
        { //::OSG::SingletonHolder< OSG::ConnectionFactoryBase >::the
        
            typedef OSG::SingletonHolder< OSG::ConnectionFactoryBase > exported_class_t;
            typedef ::OSG::ConnectionFactoryBase * ( *the_function_type )(  );
            
            ConnectionFactory_exposer.def( 
                "the"
                , the_function_type( &::OSG::SingletonHolder< OSG::ConnectionFactoryBase >::the )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        ConnectionFactory_exposer.staticmethod( "destroy" );
        ConnectionFactory_exposer.staticmethod( "the" );
    }

}