/* Implementation of GNU-style basename()
   Copyright (C) 2017 The Qt Company Ltd.
   This file is part of elfutils.

   This file is free software; you can redistribute it and/or modify
   it under the terms of either

     * the GNU Lesser General Public License as published by the Free
       Software Foundation; either version 3 of the License, or (at
       your option) any later version

   or

     * the GNU General Public License as published by the Free
       Software Foundation; either version 2 of the License, or (at
       your option) any later version

   or both in parallel, as here.

   elfutils is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received copies of the GNU General Public License and
   the GNU Lesser General Public License along with this program.  If
   not, see <http://www.gnu.org/licenses/>.  */

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include "dosname.h"
#include <string.h>

/* On windows, file names with ':' in them are invalid, so we don't have to
   add a special case for them. If we get an invalid path as input, we may
   return a nonsensical path as output. This assumption allows us to use the
   simple strrpos() equivalent below, without any allocation. */

char *
basename (const char *name)
{
  size_t prefix = FILE_SYSTEM_PREFIX_LEN(name);
  size_t length = strlen(name);

  while (length > prefix) {
    --length;
    if (ISSLASH(name[length]))
      return (char *)name + length + 1;
  }

  return (char *)name + prefix;
}
