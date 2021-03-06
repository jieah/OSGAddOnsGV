# PyOpenSG is (C) Copyright 2005-2009 by Allen Bierbaum
#
# This file is part of PyOpenSG.
#
# PyOpenSG is free software; you can redistribute it and/or modify it under
# the terms of the GNU Lesser General Public License as published by the Free
# Software Foundation; either version 2 of the License, or (at your option)
# any later version.
#
# PyOpenSG is distributed in the hope that it will be useful, but WITHOUT ANY
# WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
# FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
# more details.
#
# You should have received a copy of the GNU Lesser General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

#
# Init file for osg package.
#

# Hack to bring in all symbols OpenSG is linked against and loads from plugins
# Search for : setdlopenflags and RTLD_GLOBAL on google to see why

from ..OSGBase import AttachmentContainer

original_dlopen_flags = None

try:
   import dl, sys
   original_dlopen_flags = sys.getdlopenflags()
   sys.setdlopenflags(original_dlopen_flags | dl.RTLD_GLOBAL)
except:
   pass

# Import everything from the opensg module
from OSGEffectGroupsPy import *

if original_dlopen_flags:
   sys.setdlopenflags(original_dlopen_flags)

def _fc_cmp(self, other):
   """ Comparison operator for field containers. """
   id_self = None
   id_other = None
   if not self is None:
      id_self = self.getId()
   if not other is None:
      id_other = other.getId()
      
   return cmp(id_self, id_other)

def _fc_hash(self):
   if self is None:
      return -1
   else:
      return self.getId()

for (n,c) in OSGEffectGroupsPy.__dict__.iteritems():
  if isinstance(c,type) and (AttachmentContainer in c.__mro__):
    c.__cmp__  = _fc_cmp
    c.__hash__ = _fc_hash

# Add cored node types
import osg2.helpers.cored_node as cored_node
cored_node.addNodeCoreTypes(globals(), OSGEffectGroupsPy)
