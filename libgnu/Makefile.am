## Process this file with automake to create Makefile.in
##
## Copyright (C) 2017 The Qt Company Ltd.
## This file is part of elfutils.
##
## This file is free software; you can redistribute it and/or modify
## it under the terms of either
##
##   * the GNU Lesser General Public License as published by the Free
##     Software Foundation; either version 3 of the License, or (at
##     your option) any later version
##
## or
##
##   * the GNU General Public License as published by the Free
##     Software Foundation; either version 2 of the License, or (at
##     your option) any later version
##
## or both in parallel, as here.
##
## elfutils is distributed in the hope that it will be useful, but
## WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
## General Public License for more details.
##
## You should have received copies of the GNU General Public License and
## the GNU Lesser General Public License along with this program.  If
## not, see <http://www.gnu.org/licenses/>.
##

# for eu-config.h
AM_CPPFLAGS = -I$(top_srcdir)/lib
AM_CFLAGS = $(fpic_CFLAGS)
noinst_LIBRARIES =
MOSTLYCLEANFILES =
MOSTLYCLEANDIRS =
BUILT_SOURCES =
EXTRA_DIST = endian.in.h byteswap.in.h sys_mman.win32.h mman_win32.c sysconf_win32.c ar.in.h features.in.h \
             stdio_ext.in.h fts.in.h basename-gnu.c tdestroy.c
CLEANFILES =
SUFFIXES =

if !HAVE_ENDIAN_H
endian.h: endian.in.h
	$(AM_V_GEN)rm -f $@ && cat $< > $@
BUILT_SOURCES += endian.h
MOSTLYCLEANFILES += endian.h
endif

if !HAVE_BYTESWAP_H
byteswap.h: byteswap.in.h
	$(AM_V_GEN)rm -f $@ && cat $< > $@
BUILT_SOURCES += byteswap.h
MOSTLYCLEANFILES += byteswap.h
endif

if !HAVE_AR_H
ar.h: ar.in.h
	$(AM_V_GEN)rm -f $@ && cat $< > $@
BUILT_SOURCES += ar.h
MOSTLYCLEANFILES += ar.h
endif

if !HAVE_FEATURES_H
features.h: features.in.h
	$(AM_V_GEN)rm -f $@ && cat $< > $@
BUILT_SOURCES += features.h
MOSTLYCLEANFILES += features.h
endif

if !HAVE_FTS_H
fts.h: fts.in.h
	$(AM_V_GEN)rm -f $@ && cat $< > $@
BUILT_SOURCES += fts.h
MOSTLYCLEANFILES += fts.h
endif

if !HAVE_SYS_MMAN_H
if USE_WIN32_MMAN
sys/mman.h: sys_mman.win32.h
	$(AM_V_GEN)rm -f $@ && mkdir -p sys && cat $< > $@
BUILT_SOURCES += sys/mman.h
MOSTLYCLEANFILES += sys/mman.h
endif
endif

if !HAVE_STDIO_EXT_H
stdio_ext.h: stdio_ext.in.h
	$(AM_V_GEN)rm -f $@ && cat $< > $@
BUILT_SOURCES += stdio_ext.h
MOSTLYCLEANFILES += stdio_ext.h
endif

include gnulib.am

if !HAVE_SYS_MMAN_H
if USE_WIN32_MMAN
libgnu_a_SOURCES += mman_win32.c
endif
endif

if !HAVE_SYSCONF
if USE_WIN32_SYSCONF
libgnu_a_SOURCES += sysconf_win32.c
endif
endif

if !HAVE_BASENAME
libgnu_a_SOURCES += basename-gnu.c
endif

if USE_PRIVATE_TDESTROY
libgnu_a_SOURCES += tdestroy.c
endif
