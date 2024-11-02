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

#include <config.h>
#include <sys/mman.h>
#include <windows.h>
#include <io.h>

void *mmap(void *addr, size_t length, int prot, int flags, int fd, off_t offset)
{
    if (fd == -1) {
        errno = EBADF;
        return MAP_FAILED;
    }

    HANDLE file = (HANDLE)_get_osfhandle(fd);
    if (file == INVALID_HANDLE_VALUE) {
        errno = EBADF;
        return MAP_FAILED;
    }

    // Apparently there is no writeonly - we might get the write-copy mode to work, though.
    DWORD flProtect = PROT_NONE;
    if (prot & PROT_READ) {
        if (prot & PROT_WRITE) {
            if (prot & PROT_EXEC) {
                if (flags & MAP_PRIVATE)
                    flProtect = PAGE_EXECUTE_WRITECOPY;
                else
                    flProtect = PAGE_EXECUTE_READWRITE;
            } else {
                if (flags & MAP_PRIVATE)
                    flProtect = PAGE_WRITECOPY;
                else
                    flProtect = PAGE_READWRITE;
            }
        } else if (prot & PROT_EXEC) {
            flProtect = PAGE_EXECUTE_READ;
        }
    } else if (prot & PROT_EXEC) {
        flProtect = PAGE_EXECUTE;
    } else {
        errno = EPERM;
        return MAP_FAILED;
    }

    HANDLE fileMapping = CreateFileMapping(file, NULL, flProtect, 0, 0, NULL);
    if (fileMapping == NULL) {
        errno = EINVAL; // windows docs say this happens on disk full. EINVAL is close enough.
        return MAP_FAILED;
    }

    // you can only have either read-only, read-write, copy-on-write access. Either can be combined
    // with exec. We try to map the given flags and prot parameters as best as we can.
    DWORD access = 0;
    if (flags & MAP_PRIVATE)
        access |= FILE_MAP_COPY;
    else if (prot & PROT_WRITE)
        access |= FILE_MAP_WRITE;
    else
        access |= FILE_MAP_READ;

    if (prot & PROT_EXEC)
        access |= FILE_MAP_EXECUTE;


    void *viewMapping = MapViewOfFileEx(fileMapping, access, 0, offset, length, addr);
    CloseHandle(fileMapping);

    if (viewMapping == NULL) {
        errno = EINVAL;
        return MAP_FAILED;
    }

    return viewMapping;
}

int munmap(void *addr, size_t length) {
    // We cannot honor length here. We just unmap everything
    // That is enough for elfutils, though.
    (void) length;

    if (UnmapViewOfFile(addr))
        return 0;

    errno = EINVAL;
    return -1;
}

int msync(void *addr, size_t length, int flags) {
    (void) flags;

    if (FlushViewOfFile(addr, length))
        return 0;

    errno = EINVAL;
    return -1;
}

int posix_madvise(void *addr, size_t len, int advice)
{
    (void) addr;
    (void) len;
    (void) advice;
    return 0;
}

int mprotect(void *addr, size_t len, int prot)
{
    (void) addr;
    (void) len;
    (void) prot;
    errno = EACCES;
    return -1;
}

void *mremap(void *old_address, size_t old_size, size_t new_size, int flags, ...)
{
    (void) old_address;
    (void) old_size;
    (void) new_size;
    (void) flags;
    errno = ENOMEM;
    return MAP_FAILED;
}

