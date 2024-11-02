/* tdestroy, on systems where node is exposed from search.h
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

#include <config.h>

#include <stdlib.h>
#define _SEARCH_PRIVATE
#include <search.h>

void
tdestroy (void *vroot, void (*free_node)(void *nodep))
{
  if (vroot == NULL)
    return;

  node_t *root = (node_t *) vroot;
  tdestroy (root->llink, free_node);
  tdestroy (root->rlink, free_node);
  free_node ((void *) root->key);
  free (root);
}

