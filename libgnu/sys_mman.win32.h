/* Replacement for mmap(2) and friends on windows
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

#ifndef LIB_SYS_MMAN_H
#define LIB_SYS_MMAN_H

#include <stddef.h>
#include <errno.h>
#include <unistd.h>

#define PROT_NONE    0x00
#define PROT_READ    0x04
#define PROT_WRITE   0x02
#define PROT_EXEC    0x01

#define MAP_FAILED  ((void *) -1)

#define MAP_SHARED   0x01
#define MAP_PRIVATE  0x02
#define MAP_FIXED    0x10

#define MS_ASYNC      1
#define MS_INVALIDATE 2
#define MS_SYNC       4

#define POSIX_MADV_NORMAL     0
#define POSIX_MADV_SEQUENTIAL 1
#define POSIX_MADV_RANDOM     2
#define POSIX_MADV_WILLNEED   3
#define POSIX_MADV_DONTNEED   4

void *mmap(void *addr, size_t length, int prot, int flags, int fd, off_t offset);
int munmap(void *addr, size_t length);
int msync(void *addr, size_t length, int flags);
int posix_madvise(void *addr, size_t len, int advice);
int mprotect(void *addr, size_t len, int prot);
void *mremap(void *old_address, size_t old_size, size_t new_size, int flags, ...);

#endif // MMAN_H
