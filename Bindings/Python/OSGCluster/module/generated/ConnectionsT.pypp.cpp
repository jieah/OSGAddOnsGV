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
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "OSGCluster_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "ConnectionsT.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_ConnectionsT_class(){

    { //::std::vector< OSG::Connection* >
        typedef bp::class_< std::vector< OSG::Connection* > > ConnectionsT_exposer_t;
        ConnectionsT_exposer_t ConnectionsT_exposer = ConnectionsT_exposer_t( "ConnectionsT" );
        bp::scope ConnectionsT_scope( ConnectionsT_exposer );
        ConnectionsT_exposer.def( bp::vector_indexing_suite< ::std::vector< OSG::Connection* > >() );
    }

}