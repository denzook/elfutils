/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Define to the number of bits in type 'ptrdiff_t'. */
/* #undef BITSIZEOF_PTRDIFF_T */

/* Define to the number of bits in type 'sig_atomic_t'. */
/* #undef BITSIZEOF_SIG_ATOMIC_T */

/* Define to the number of bits in type 'size_t'. */
/* #undef BITSIZEOF_SIZE_T */

/* Define to the number of bits in type 'wchar_t'. */
/* #undef BITSIZEOF_WCHAR_T */

/* Define to the number of bits in type 'wint_t'. */
/* #undef BITSIZEOF_WINT_T */

/* Building with -fsanitize=undefined or not */
#define CHECK_UNDEFINED 0

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
/* #undef CRAY_STACKSEG_END */

/* Define to 1 if using `alloca.c'. */
/* #undef C_ALLOCA */

/* Define to 1 if the C locale may have encoding errors. */
/* #undef C_LOCALE_MAYBE_EILSEQ */

/* Define as the bit index in the word where to find bit 0 of the exponent of
   'double'. */
#define DBL_EXPBIT0_BIT 20

/* Define as the word index where to find the exponent of 'double'. */
#define DBL_EXPBIT0_WORD 1
/* Should ar and ranlib use -D behavior by default? */
#define DEFAULT_AR_DETERMINISTIC false

/* Build dummy libdebuginfod */
/* #undef DUMMY_LIBDEBUGINFOD */
/* the name of the file descriptor member of DIR */
/* #undef DIR_FD_MEMBER_NAME */

#ifdef DIR_FD_MEMBER_NAME
# define DIR_TO_FD(Dir_p) ((Dir_p)->DIR_FD_MEMBER_NAME)
#else
# define DIR_TO_FD(Dir_p) -1
#endif


/* Define to 1 if // is a file system root distinct from /. */
#define DOUBLE_SLASH_IS_DISTINCT_ROOT 1

/* Define if struct dirent has a member d_ino that actually works. */
/* #undef D_INO_IN_DIRENT */

/* Define this to 1 if F_DUPFD behavior does not match POSIX */
/* #undef FCNTL_DUPFD_BUGGY */

/* Define to nothing if C supports flexible array members, and to 1 if it does
   not. That way, with a declaration like 'struct s { int n; double
   d[FLEXIBLE_ARRAY_MEMBER]; };', the struct hack can be used with pre-C99
   compilers. When computing the size of such an object, don't use 'sizeof
   (struct s)' as it overestimates the size. Use 'offsetof (struct s, d)'
   instead. Don't use 'offsetof (struct s, d[0])', as this doesn't work with
   MSVC and with C++ compilers. */
#define FLEXIBLE_ARRAY_MEMBER /**/

/* Define to 1 if realpath() can malloc memory, always gives an absolute path,
   and handles trailing slash correctly. */
/* #undef FUNC_REALPATH_WORKS */

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module canonicalize-lgpl shall be considered present. */
#define GNULIB_CANONICALIZE_LGPL 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module fcntl-safer shall be considered present. */
#define GNULIB_FCNTL_SAFER 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module fdopendir shall be considered present. */
#define GNULIB_FDOPENDIR 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module fd-safer-flag shall be considered present. */
#define GNULIB_FD_SAFER_FLAG 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module fscanf shall be considered present. */
#define GNULIB_FSCANF 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module malloc-gnu shall be considered present. */
#define GNULIB_MALLOC_GNU 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module msvc-nothrow shall be considered present. */
#define GNULIB_MSVC_NOTHROW 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module openat shall be considered present. */
#define GNULIB_OPENAT 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module openat-safer shall be considered present. */
#define GNULIB_OPENAT_SAFER 1

/* Define to 1 if printf and friends should be labeled with attribute
   "__gnu_printf__" instead of "__printf__" */
#define GNULIB_PRINTF_ATTRIBUTE_FLAVOR_GNU 1

/* Define to 1 to add extern declaration of program_invocation_name to argp.h
   */
#define GNULIB_PROGRAM_INVOCATION_NAME 1

/* Build debuginfod */
/* #undef ENABLE_DEBUGINFOD */

/* Build IMA verification */
/* #undef ENABLE_IMA_VERIFICATION */

/* Enable libdebuginfod */
/* #undef ENABLE_LIBDEBUGINFOD */

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
/* #undef ENABLE_NLS */

/* Define to 1 if you have the Mac OS X function
   CFLocaleCopyPreferredLanguages in the CoreFoundation framework. */
/* #undef HAVE_CFLOCALECOPYPREFERREDLANGUAGES */

/* Define to 1 if you have the Mac OS X function CFPreferencesCopyAppValue in
   the CoreFoundation framework. */
/* #undef HAVE_CFPREFERENCESCOPYAPPVALUE */

/* define if the compiler supports basic C++11 syntax */
#define HAVE_CXX11 1

/* Define if the GNU dcgettext() function is already present or preinstalled.
   */
/* #undef HAVE_DCGETTEXT */


/* Define to 1 to add extern declaration of program_invocation_short_name to
   argp.h */
#define GNULIB_PROGRAM_INVOCATION_SHORT_NAME 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module scanf shall be considered present. */
#define GNULIB_SCANF 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module strerror shall be considered present. */
#define GNULIB_STRERROR 1

/* Define to 1 when the gnulib module canonicalize_file_name should be tested.
   */
#define GNULIB_TEST_CANONICALIZE_FILE_NAME 1

/* Define to 1 when the gnulib module chdir should be tested. */
#define GNULIB_TEST_CHDIR 1

/* Define to 1 when the gnulib module cloexec should be tested. */
#define GNULIB_TEST_CLOEXEC 1

/* Define to 1 when the gnulib module close should be tested. */
#define GNULIB_TEST_CLOSE 1

/* Define to 1 when the gnulib module closedir should be tested. */
#define GNULIB_TEST_CLOSEDIR 1

/* Define to 1 when the gnulib module dirfd should be tested. */
#define GNULIB_TEST_DIRFD 1

/* Define to 1 when the gnulib module dup should be tested. */
#define GNULIB_TEST_DUP 1

/* Define to 1 when the gnulib module dup2 should be tested. */
#define GNULIB_TEST_DUP2 1

/* Define to 1 when the gnulib module fchdir should be tested. */
#define GNULIB_TEST_FCHDIR 1

/* Define to 1 when the gnulib module fcntl should be tested. */
#define GNULIB_TEST_FCNTL 1

/* Define to 1 when the gnulib module fdopendir should be tested. */
#define GNULIB_TEST_FDOPENDIR 1

/* Define to 1 when the gnulib module fstat should be tested. */
#define GNULIB_TEST_FSTAT 1

/* Define to 1 when the gnulib module fstatat should be tested. */
#define GNULIB_TEST_FSTATAT 1

/* Define to 1 when the gnulib module getcwd should be tested. */
#define GNULIB_TEST_GETCWD 1

/* Define to 1 when the gnulib module getdelim should be tested. */
#define GNULIB_TEST_GETDELIM 1

/* Define to 1 when the gnulib module getdtablesize should be tested. */
#define GNULIB_TEST_GETDTABLESIZE 1

/* Define to 1 when the gnulib module getline should be tested. */
#define GNULIB_TEST_GETLINE 1

/* Define to 1 when the gnulib module link should be tested. */
#define GNULIB_TEST_LINK 1

/* Define to 1 when the gnulib module lseek should be tested. */
#define GNULIB_TEST_LSEEK 1

/* Define to 1 when the gnulib module lstat should be tested. */
#define GNULIB_TEST_LSTAT 1

/* Define to 1 when the gnulib module malloc-posix should be tested. */
#define GNULIB_TEST_MALLOC_POSIX 1

/* Define to 1 when the gnulib module mbrtowc should be tested. */
#define GNULIB_TEST_MBRTOWC 1

/* Define to 1 when the gnulib module mbsinit should be tested. */
#define GNULIB_TEST_MBSINIT 1

/* Define to 1 when the gnulib module mbsrtowcs should be tested. */
#define GNULIB_TEST_MBSRTOWCS 1

/* Define to 1 when the gnulib module memchr should be tested. */
#define GNULIB_TEST_MEMCHR 1

/* Define to 1 when the gnulib module mempcpy should be tested. */
#define GNULIB_TEST_MEMPCPY 1

/* Define to 1 when the gnulib module memrchr should be tested. */
#define GNULIB_TEST_MEMRCHR 1

/* Define to 1 when the gnulib module obstack-printf should be tested. */
#define GNULIB_TEST_OBSTACK_PRINTF 1

/* Define to 1 when the gnulib module open should be tested. */
#define GNULIB_TEST_OPEN 1

/* Define to 1 when the gnulib module openat should be tested. */
#define GNULIB_TEST_OPENAT 1

/* Define to 1 when the gnulib module opendir should be tested. */
#define GNULIB_TEST_OPENDIR 1

/* Define to 1 when the gnulib module pread should be tested. */
#define GNULIB_TEST_PREAD 1

/* Define to 1 when the gnulib module pwrite should be tested. */
#define GNULIB_TEST_PWRITE 1

/* Define to 1 when the gnulib module qsort_r should be tested. */
#define GNULIB_TEST_QSORT_R 1

/* Define to 1 when the gnulib module raise should be tested. */
#define GNULIB_TEST_RAISE 1

/* Define to 1 when the gnulib module rawmemchr should be tested. */
#define GNULIB_TEST_RAWMEMCHR 1

/* Define to 1 when the gnulib module read should be tested. */
#define GNULIB_TEST_READ 1

/* Define to 1 when the gnulib module readdir should be tested. */
#define GNULIB_TEST_READDIR 1

/* Define to 1 when the gnulib module readlink should be tested. */
#define GNULIB_TEST_READLINK 1

/* Define to 1 when the gnulib module realloc-posix should be tested. */
#define GNULIB_TEST_REALLOC_POSIX 1

/* Define to 1 when the gnulib module realpath should be tested. */
#define GNULIB_TEST_REALPATH 1

/* Define to 1 when the gnulib module sleep should be tested. */
#define GNULIB_TEST_SLEEP 1

/* Define to 1 when the gnulib module stat should be tested. */
#define GNULIB_TEST_STAT 1

/* Define to 1 when the gnulib module stpcpy should be tested. */
#define GNULIB_TEST_STPCPY 1

/* Define to 1 when the gnulib module stpncpy should be tested. */
#define GNULIB_TEST_STPNCPY 1

/* Define to 1 when the gnulib module strchrnul should be tested. */
#define GNULIB_TEST_STRCHRNUL 1

/* Define to 1 when the gnulib module strdup should be tested. */
#define GNULIB_TEST_STRDUP 1

/* Define to 1 when the gnulib module strerror should be tested. */
#define GNULIB_TEST_STRERROR 1

/* Define to 1 when the gnulib module strndup should be tested. */
#define GNULIB_TEST_STRNDUP 1

/* Define to 1 when the gnulib module strnlen should be tested. */
#define GNULIB_TEST_STRNLEN 1

/* Define to 1 when the gnulib module strsep should be tested. */
#define GNULIB_TEST_STRSEP 1

/* Define to 1 when the gnulib module vsnprintf should be tested. */
#define GNULIB_TEST_VSNPRINTF 1

/* Define to 1 when the gnulib module write should be tested. */
#define GNULIB_TEST_WRITE 1

/* Define to 1 if you have 'alloca' after including <alloca.h>, a header that
   may be supplied by this distribution. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
/* #undef HAVE_ALLOCA_H */

/* Define to 1 if you have the <ar.h> header file. */
/* #undef HAVE_AR_H */

/* Define to 1 if you have the <bp-sym.h> header file. */
/* #undef HAVE_BP_SYM_H */

/* Define to 1 if you have the `btowc' function. */
#define HAVE_BTOWC 1

/* Define to 1 if you have the `canonicalize_file_name' function. */
/* #undef HAVE_CANONICALIZE_FILE_NAME */

/* Define to 1 if you have the `closedir' function. */
#define HAVE_CLOSEDIR 1

/* Define to 1 if you have the <crtdefs.h> header file. */
#define HAVE_CRTDEFS_H 1
/* Define to 1 if you have the declaration of `mempcpy', and to 0 if you
   don't. */
#define HAVE_DECL_MEMPCPY 1

/* Define to 1 if you have the declaration of `memrchr', and to 0 if you
   don't. */
#define HAVE_DECL_MEMRCHR 0

/* Define to 1 if you have the declaration of `powerof2', and to 0 if you
   don't. */
#define HAVE_DECL_POWEROF2 0

/* Define to 1 if you have the declaration of `clearerr_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_CLEARERR_UNLOCKED 0

/* Define to 1 if you have the declaration of `dirfd', and to 0 if you don't.
   */
#define HAVE_DECL_DIRFD 0

/* Define to 1 if you have the declaration of `fchdir', and to 0 if you don't.
   */
#define HAVE_DECL_FCHDIR 0

/* Define to 1 if you have the declaration of `fchmod', and to 0 if you don't.
   */
/* #undef HAVE_DECL_FCHMOD */

/* Define to 1 if you have the declaration of `fchown', and to 0 if you don't.
   */
/* #undef HAVE_DECL_FCHOWN */

/* Define to 1 if you have the declaration of `fdopendir', and to 0 if you
   don't. */
#define HAVE_DECL_FDOPENDIR 0

/* Define to 1 if you have the declaration of `feof_unlocked', and to 0 if you
   don't. */
#define HAVE_DECL_FEOF_UNLOCKED 0

/* Define to 1 if you have the declaration of `ferror_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FERROR_UNLOCKED 0

/* Define to 1 if you have the declaration of `fflush_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FFLUSH_UNLOCKED 0

/* Define to 1 if you have the declaration of `fgets_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FGETS_UNLOCKED 0

/* Define to 1 if you have the declaration of `fork', and to 0 if you don't.
   */
/* #undef HAVE_DECL_FORK */

/* Define to 1 if you have the declaration of `fputc_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FPUTC_UNLOCKED 0

/* Define to 1 if you have the declaration of `fputs_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FPUTS_UNLOCKED 0

/* Define to 1 if you have the declaration of `fread_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FREAD_UNLOCKED 0

/* Define to 1 if you have the declaration of `fwrite_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FWRITE_UNLOCKED 0

/* Define to 1 if you have the declaration of `getchar_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_GETCHAR_UNLOCKED 0

/* Define to 1 if you have the declaration of `getc_unlocked', and to 0 if you
   don't. */
#define HAVE_DECL_GETC_UNLOCKED 0

/* Define to 1 if you have the declaration of `getdelim', and to 0 if you
   don't. */
#define HAVE_DECL_GETDELIM 0

/* Define to 1 if you have the declaration of `getdtablesize', and to 0 if you
   don't. */
#define HAVE_DECL_GETDTABLESIZE 0

/* Define to 1 if you have the declaration of `getline', and to 0 if you
   don't. */
#define HAVE_DECL_GETLINE 0

/* Define to 1 if you have the declaration of `GetSystemInfo', and to 0 if you
   don't. */

																		  
			
						  

																			 
			
#define HAVE_DECL_GETSYSTEMINFO 1
/* Define to 1 if you have the declaration of `rawmemchr', and to 0 if you
   don't. */
#define HAVE_DECL_RAWMEMCHR 0

/* Define to 1 if you have the declaration of `reallocarray', and to 0 if you
   don't. */
#define HAVE_DECL_REALLOCARRAY 0

/* Define to 1 if you have the declaration of `strerror_r', and to 0 if you
   don't. */
#define HAVE_DECL_STRERROR_R 0

/* Define to 1 if you have the <error.h> header file. */
#define HAVE_ERROR_H 1

/* Define to 1 if you have the <err.h> header file. */
/* #undef HAVE_ERR_H */

/* Define to 1 if you have the <execinfo.h> header file. */
/* #undef HAVE_EXECINFO_H */

/* Define to 1 if you have the declaration of `isblank', and to 0 if you
   don't. */
#define HAVE_DECL_ISBLANK 1

/* Define to 1 if you have the declaration of `MapViewOfFile', and to 0 if you
   don't. */
#define HAVE_DECL_MAPVIEWOFFILE 1

/* Define to 1 if you have the declaration of `mbrtowc', and to 0 if you
   don't. */
/* #undef HAVE_DECL_MBRTOWC */

/* Define to 1 if you have the declaration of `mbsinit', and to 0 if you
   don't. */
/* #undef HAVE_DECL_MBSINIT */

/* Define to 1 if you have the declaration of `mbsrtowcs', and to 0 if you
   don't. */
/* #undef HAVE_DECL_MBSRTOWCS */

/* Define to 1 if you have the declaration of `obstack_printf', and to 0 if
   you don't. */
#define HAVE_DECL_OBSTACK_PRINTF 0

/* Define to 1 if you have the declaration of `posix_fadvise', and to 0 if you
   don't. */
/* #undef HAVE_DECL_POSIX_FADVISE */

/* Define to 1 if you have the declaration of `posix_fallocate', and to 0 if
   you don't. */
/* #undef HAVE_DECL_POSIX_FALLOCATE */

/* Define to 1 if you have the declaration of `program_invocation_name', and
   to 0 if you don't. */
#ifndef HAVE_DECL_PROGRAM_INVOCATION_NAME
#define HAVE_DECL_PROGRAM_INVOCATION_NAME 0
#endif

/* Define to 1 if you have the declaration of `program_invocation_short_name',
   and to 0 if you don't. */
#ifndef HAVE_DECL_PROGRAM_INVOCATION_SHORT_NAME
#define HAVE_DECL_PROGRAM_INVOCATION_SHORT_NAME 0
#endif

/* Define to 1 if you have the declaration of `putchar_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_PUTCHAR_UNLOCKED 0

/* Define to 1 if you have the declaration of `putc_unlocked', and to 0 if you
   don't. */
#define HAVE_DECL_PUTC_UNLOCKED 0

/* Define to 1 if you have the declaration of `sleep', and to 0 if you don't.
   */
#define HAVE_DECL_SLEEP 1

/* Define to 1 if you have the declaration of `stpncpy', and to 0 if you
   don't. */
#define HAVE_DECL_STPNCPY 0

/* Define to 1 if you have the declaration of `strdup', and to 0 if you don't.
   */
#define HAVE_DECL_STRDUP 1

/* Define to 1 if you have the declaration of `strncasecmp', and to 0 if you
   don't. */
#define HAVE_DECL_STRNCASECMP 1

/* Define to 1 if you have the declaration of `strndup', and to 0 if you
   don't. */
#define HAVE_DECL_STRNDUP 0

/* Define to 1 if you have the declaration of `strnlen', and to 0 if you
   don't. */
#define HAVE_DECL_STRNLEN 1

/* Define to 1 if you have the declaration of `sysconf', and to 0 if you
   don't. */
#define HAVE_DECL_SYSCONF 0

/* Define to 1 if you have the declaration of `tdestroy', and to 0 if you
   don't. */
#define HAVE_DECL_TDESTROY 0

/* Define to 1 if you have the declaration of `towlower', and to 0 if you
   don't. */
/* #undef HAVE_DECL_TOWLOWER */

/* Define to 1 if you have the declaration of `vsnprintf', and to 0 if you
   don't. */
#define HAVE_DECL_VSNPRINTF 1

/* Define to 1 if you have the declaration of `_snprintf', and to 0 if you
   don't. */
#define HAVE_DECL__SNPRINTF 1

/* Define to 1 if you have the declaration of `__argv', and to 0 if you don't.
   */
#define HAVE_DECL___ARGV 1

/* Define to 1 if you have the <dirent.h> header file. */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the `dirfd' function. */
/* #undef HAVE_DIRFD */

/* Define to 1 if you have the 'dup2' function. */
#define HAVE_DUP2 1

/* Defined if __attribute__((fallthrough)) is supported */
#define HAVE_FALLTHROUGH 1

/* Define to 1 if you have the `fchdir' function. */
/* #undef HAVE_FCHDIR */

/* Define to 1 if you have the `fcntl' function. */
/* #undef HAVE_FCNTL */

/* Define to 1 if you have the `fdopendir' function. */
/* #undef HAVE_FDOPENDIR */

/* Define to 1 if you have the <features.h> header file. */
/* #undef HAVE_FEATURES_H */

/* Define to 1 if you have the `ffs' function. */
/* #undef HAVE_FFS */

/* Define to 1 if you have the `flockfile' function. */
/* #undef HAVE_FLOCKFILE */

/* Define to 1 if you have the `fstatat' function. */
/* #undef HAVE_FSTATAT */

/* Define to 1 if you have the `fstatfs' function. */
/* #undef HAVE_FSTATFS */

/* Define to 1 if you have the `funlockfile' function. */
/* #undef HAVE_FUNLOCKFILE */

/* Defined if __attribute__((gcc_struct)) is supported */
#define HAVE_GCC_STRUCT 1

/* Define to 1 if you have the `getcwd' function. */
#define HAVE_GETCWD 1

/* Define to 1 if you have the `getdelim' function. */
/* #undef HAVE_GETDELIM */

/* Define to 1 if you have the `getdtablesize' function. */
/* #undef HAVE_GETDTABLESIZE */

/* Define to 1 if you have the `getrlimit' function. */
/* #undef HAVE_GETRLIMIT */

/* Define if the GNU gettext() function is already present or preinstalled. */
/* #undef HAVE_GETTEXT */

/* Define if you have the iconv() function and it works. */
/* #undef HAVE_ICONV */

/* Define to 1 if you have the `getexecname' function. */
/* #undef HAVE_GETEXECNAME */

/* Define to 1 if you have the <getopt.h> header file. */
#define HAVE_GETOPT_H 1

/* Define to 1 if you have the `getopt_long_only' function. */
#define HAVE_GETOPT_LONG_ONLY 1

/* Define to 1 if you have the `getprogname' function. */
/* #undef HAVE_GETPROGNAME */

/* Define if you have the 'intmax_t' type in <stdint.h> or <inttypes.h>. */
#define HAVE_INTMAX_T 1
/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1


/* Define if <inttypes.h> exists, doesn't clash with <sys/types.h>, and
   declares uintmax_t. */
#define HAVE_INTTYPES_H_WITH_UINTMAX 1


/* Define to 1 if you have the `isblank' function. */
#define HAVE_ISBLANK 1

/* Define to 1 if you have the `iswcntrl' function. */
#define HAVE_ISWCNTRL 1

/* Define to 1 if you have the `iswctype' function. */
#define HAVE_ISWCTYPE 1

/* Define to 1 if libarchive is available */
/* #undef HAVE_LIBARCHIVE */

/* Define to 1 if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

/* Define to 1 if you have the `malloc_trim' function. */
/* #undef HAVE_MALLOC_TRIM */

/* Define to 1 if you have the `mremap' function. */
/* #undef HAVE_MREMAP */

/* Define to 1 if you have the `process_vm_readv' function. */
/* #undef HAVE_PROCESS_VM_READV */

/* Enable pthread_setname_np */
#define HAVE_PTHREAD_SETNAME_NP 1

/* Define to 1 if you have the `sched_getaffinity' function. */
/* #undef HAVE_SCHED_GETAFFINITY */

/* Define to 1 if you have the <sched.h> header file. */
#define HAVE_SCHED_H 1

/* Define to 1 if `stdatomic.h` is provided by the system, 0 otherwise. */
#define HAVE_STDATOMIC_H 1

/* Define to 1 if you have the `lstat' function. */
/* #undef HAVE_LSTAT */

/* Define to 1 if your system has a GNU libc compatible 'malloc' function, and
   to 0 otherwise. */
#define HAVE_MALLOC_GNU 1

/* Define if the 'malloc' function is POSIX compliant. */
/* #undef HAVE_MALLOC_POSIX */

/* Define to 1 if mmap()'s MAP_ANONYMOUS flag is available after including
   config.h and <sys/mman.h>. */
/* #undef HAVE_MAP_ANONYMOUS */

/* Define to 1 if you have the `mbrtowc' function. */
#define HAVE_MBRTOWC 1

/* Define to 1 if you have the `mbsinit' function. */
#define HAVE_MBSINIT 1

/* Define to 1 if you have the `mbsrtowcs' function. */
#define HAVE_MBSRTOWCS 1

/* Define to 1 if <wchar.h> declares mbstate_t. */
#define HAVE_MBSTATE_T 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `mempcpy' function. */
#define HAVE_MEMPCPY 1

/* Define to 1 if you have the `memrchr' function. */
/* #undef HAVE_MEMRCHR */

/* Define to 1 if you have the `mprotect' function. */
#define HAVE_MPROTECT 1

/* Define to 1 on MSVC platforms that have the "invalid parameter handler"
   concept. */
#define HAVE_MSVC_INVALID_PARAMETER_HANDLER 1

/* Define to 1 if `key' is a member of `node_t'. */
#define HAVE_NODE_T_KEY 1

/* Define to 1 if `llink' is a member of `node_t'. */
#define HAVE_NODE_T_LLINK 1

/* Define to 1 if `rlink' is a member of `node_t'. */
#define HAVE_NODE_T_RLINK 1

/* Define to 1 if the system has obstacks that work with any size object. */
/* #undef HAVE_OBSTACK */

/* Define to 1 if you have the `obstack_printf' function. */
/* #undef HAVE_OBSTACK_PRINTF */

/* Define to 1 if you have the `openat' function. */
/* #undef HAVE_OPENAT */

/* Define to 1 if you have the `opendir' function. */
#define HAVE_OPENDIR 1

/* Define to 1 if you have the `pipe' function. */
/* #undef HAVE_PIPE */

/* Define to 1 if you have the `pread' function. */
/* #undef HAVE_PREAD */

/* Define if program_invocation_name is defined */
/* #undef HAVE_PROGRAM_INVOCATION_NAME */

/* Define if program_invocation_short_name is defined */
/* #undef HAVE_PROGRAM_INVOCATION_SHORT_NAME */

/* Define to 1 if you have the `pwrite' function. */
/* #undef HAVE_PWRITE */

/* Define to 1 if you have the `qsort_r' function. */
/* #undef HAVE_QSORT_R */

/* Define to 1 if you have the `raise' function. */
#define HAVE_RAISE 1

/* Define to 1 if you have the `rawmemchr' function. */
/* #undef HAVE_RAWMEMCHR */


/* Define to 1 if alphasort is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_ALPHASORT */

/* Define to 1 if atoll is declared even after undefining macros. */
#define HAVE_RAW_DECL_ATOLL 1

/* Define to 1 if btowc is declared even after undefining macros. */
#define HAVE_RAW_DECL_BTOWC 1

/* Define to 1 if canonicalize_file_name is declared even after undefining
   macros. */
/* #undef HAVE_RAW_DECL_CANONICALIZE_FILE_NAME */

/* Define to 1 if chdir is declared even after undefining macros. */
#define HAVE_RAW_DECL_CHDIR 1

/* Define to 1 if chown is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_CHOWN */

/* Define to 1 if closedir is declared even after undefining macros. */
#define HAVE_RAW_DECL_CLOSEDIR 1

/* Define to 1 if dirfd is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_DIRFD */

/* Define to 1 if dprintf is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_DPRINTF */

/* Define to 1 if dup is declared even after undefining macros. */
#define HAVE_RAW_DECL_DUP 1

/* Define to 1 if dup2 is declared even after undefining macros. */
#define HAVE_RAW_DECL_DUP2 1

/* Define to 1 if dup3 is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_DUP3 */

/* Define to 1 if endusershell is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_ENDUSERSHELL */

/* Define to 1 if environ is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_ENVIRON */

/* Define to 1 if euidaccess is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_EUIDACCESS */

/* Define to 1 if faccessat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FACCESSAT */

/* Define to 1 if fchdir is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FCHDIR */

/* Define to 1 if fchmodat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FCHMODAT */

/* Define to 1 if fchownat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FCHOWNAT */

/* Define to 1 if fcntl is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FCNTL */

/* Define to 1 if fdatasync is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FDATASYNC */

/* Define to 1 if fdopendir is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FDOPENDIR */

/* Define to 1 if ffs is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FFS */

/* Define to 1 if ffsl is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FFSL */

/* Define to 1 if ffsll is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FFSLL */

/* Define to 1 if fpurge is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FPURGE */

/* Define to 1 if fseeko is declared even after undefining macros. */
#define HAVE_RAW_DECL_FSEEKO 1

/* Define to 1 if fstat is declared even after undefining macros. */
#define HAVE_RAW_DECL_FSTAT 1

/* Define to 1 if fstatat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FSTATAT */

/* Define to 1 if fsync is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FSYNC */

/* Define to 1 if ftello is declared even after undefining macros. */
#define HAVE_RAW_DECL_FTELLO 1

/* Define to 1 if ftruncate is declared even after undefining macros. */
#define HAVE_RAW_DECL_FTRUNCATE 1

/* Define to 1 if futimens is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FUTIMENS */

/* Define to 1 if getcwd is declared even after undefining macros. */
#define HAVE_RAW_DECL_GETCWD 1

/* Define to 1 if getdelim is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETDELIM */

/* Define to 1 if getdomainname is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETDOMAINNAME */

/* Define to 1 if getdtablesize is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETDTABLESIZE */

/* Define to 1 if getgroups is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETGROUPS */

/* Define to 1 if gethostname is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETHOSTNAME */

/* Define to 1 if getline is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETLINE */

/* Define to 1 if getloadavg is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETLOADAVG */

/* Define to 1 if getlogin is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETLOGIN */

/* Define to 1 if getlogin_r is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETLOGIN_R */

/* Define to 1 if getpagesize is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETPAGESIZE */

/* Define to 1 if gets is declared even after undefining macros. */
#define HAVE_RAW_DECL_GETS 1

/* Define to 1 if getsubopt is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETSUBOPT */

/* Define to 1 if getusershell is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETUSERSHELL */

/* Define to 1 if grantpt is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GRANTPT */

/* Define to 1 if group_member is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GROUP_MEMBER */

/* Define to 1 if initstate is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_INITSTATE */

/* Define to 1 if initstate_r is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_INITSTATE_R */

/* Define to 1 if isatty is declared even after undefining macros. */
#define HAVE_RAW_DECL_ISATTY 1

/* Define to 1 if iswctype is declared even after undefining macros. */
#define HAVE_RAW_DECL_ISWCTYPE 1

/* Define to 1 if lchmod is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_LCHMOD */

/* Define to 1 if lchown is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_LCHOWN */

/* Define to 1 if link is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_LINK */

/* Define to 1 if linkat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_LINKAT */

/* Define to 1 if lseek is declared even after undefining macros. */
#define HAVE_RAW_DECL_LSEEK 1

/* Define to 1 if lstat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_LSTAT */

/* Define to 1 if mbrlen is declared even after undefining macros. */
#define HAVE_RAW_DECL_MBRLEN 1

/* Define to 1 if mbrtowc is declared even after undefining macros. */
#define HAVE_RAW_DECL_MBRTOWC 1

/* Define to 1 if mbsinit is declared even after undefining macros. */
#define HAVE_RAW_DECL_MBSINIT 1

/* Define to 1 if mbsnrtowcs is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_MBSNRTOWCS */

/* Define to 1 if mbsrtowcs is declared even after undefining macros. */
#define HAVE_RAW_DECL_MBSRTOWCS 1

/* Define to 1 if memmem is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_MEMMEM */

/* Define to 1 if mempcpy is declared even after undefining macros. */
#define HAVE_RAW_DECL_MEMPCPY 1

/* Define to 1 if memrchr is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_MEMRCHR */

/* Define to 1 if mkdirat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_MKDIRAT */

/* Define to 1 if mkdtemp is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_MKDTEMP */

/* Define to 1 if mkfifo is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_MKFIFO */

/* Define to 1 if mkfifoat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_MKFIFOAT */

/* Define to 1 if mknod is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_MKNOD */

/* Define to 1 if mknodat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_MKNODAT */

/* Define to 1 if mkostemp is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_MKOSTEMP */

/* Define to 1 if mkostemps is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_MKOSTEMPS */

/* Define to 1 if mkstemp is declared even after undefining macros. */
#define HAVE_RAW_DECL_MKSTEMP 1

/* Define to 1 if mkstemps is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_MKSTEMPS */

/* Define to 1 if nl_langinfo is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_NL_LANGINFO */

/* Define to 1 if openat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_OPENAT */

/* Define to 1 if opendir is declared even after undefining macros. */
#define HAVE_RAW_DECL_OPENDIR 1

/* Define to 1 if pclose is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_PCLOSE */

/* Define to 1 if pipe is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_PIPE */

/* Define to 1 if pipe2 is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_PIPE2 */

/* Define to 1 if popen is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_POPEN */

/* Define to 1 if posix_openpt is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_POSIX_OPENPT */

/* Define to 1 if pread is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_PREAD */

/* Define to 1 if pthread_sigmask is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_PTHREAD_SIGMASK */

/* Define to 1 if ptsname is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_PTSNAME */

/* Define to 1 if ptsname_r is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_PTSNAME_R */

/* Define to 1 if pwrite is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_PWRITE */

/* Define to 1 if qsort_r is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_QSORT_R */

/* Define to 1 if random is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_RANDOM */

/* Define to 1 if random_r is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_RANDOM_R */

/* Define to 1 if rawmemchr is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_RAWMEMCHR */

/* Define to 1 if readdir is declared even after undefining macros. */
#define HAVE_RAW_DECL_READDIR 1

/* Define to 1 if readlink is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_READLINK */

/* Define to 1 if readlinkat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_READLINKAT */

/* Define to 1 if reallocarray is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_REALLOCARRAY */

/* Define to 1 if realpath is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_REALPATH */

/* Define to 1 if renameat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_RENAMEAT */

/* Define to 1 if rewinddir is declared even after undefining macros. */
#define HAVE_RAW_DECL_REWINDDIR 1

/* Define to 1 if rmdir is declared even after undefining macros. */
#define HAVE_RAW_DECL_RMDIR 1

/* Define to 1 if rpmatch is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_RPMATCH */

/* Define to 1 if scandir is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SCANDIR */

/* Define to 1 if secure_getenv is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SECURE_GETENV */

/* Define to 1 if setenv is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SETENV */

/* Define to 1 if sethostname is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SETHOSTNAME */

/* Define to 1 if setstate is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SETSTATE */

/* Define to 1 if setstate_r is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SETSTATE_R */

/* Define to 1 if setusershell is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SETUSERSHELL */

/* Define to 1 if sigaction is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SIGACTION */

/* Define to 1 if sigaddset is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SIGADDSET */

/* Define to 1 if sigdelset is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SIGDELSET */

/* Define to 1 if sigemptyset is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SIGEMPTYSET */

/* Define to 1 if sigfillset is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SIGFILLSET */

/* Define to 1 if sigismember is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SIGISMEMBER */

/* Define to 1 if sigpending is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SIGPENDING */

/* Define to 1 if sigprocmask is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SIGPROCMASK */

/* Define to 1 if sleep is declared even after undefining macros. */
#define HAVE_RAW_DECL_SLEEP 1

/* Define to 1 if snprintf is declared even after undefining macros. */
#define HAVE_RAW_DECL_SNPRINTF 1

/* Define to 1 if srandom is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SRANDOM */

/* Define to 1 if srandom_r is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SRANDOM_R */

/* Define to 1 if stat is declared even after undefining macros. */
#define HAVE_RAW_DECL_STAT 1

/* Define to 1 if stpcpy is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_STPCPY */

/* Define to 1 if stpncpy is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_STPNCPY */

/* Define to 1 if strcasecmp is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRCASECMP 1

/* Define to 1 if strcasestr is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_STRCASESTR */

/* Define to 1 if strchrnul is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_STRCHRNUL */

/* Define to 1 if strdup is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRDUP 1

/* Define to 1 if strerror_r is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_STRERROR_R */

/* Define to 1 if strncasecmp is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRNCASECMP 1

/* Define to 1 if strncat is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRNCAT 1

/* Define to 1 if strndup is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_STRNDUP */

/* Define to 1 if strnlen is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRNLEN 1

/* Define to 1 if strpbrk is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRPBRK 1

/* Define to 1 if strsep is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_STRSEP */

/* Define to 1 if strsignal is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_STRSIGNAL */

/* Define to 1 if strtod is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRTOD 1

/* Define to 1 if strtok_r is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRTOK_R 1

/* Define to 1 if strtoll is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRTOLL 1

/* Define to 1 if strtoull is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRTOULL 1

/* Define to 1 if strverscmp is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_STRVERSCMP */

/* Define to 1 if symlink is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SYMLINK */

/* Define to 1 if symlinkat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_SYMLINKAT */

/* Define to 1 if tmpfile is declared even after undefining macros. */
#define HAVE_RAW_DECL_TMPFILE 1

/* Define to 1 if towctrans is declared even after undefining macros. */
#define HAVE_RAW_DECL_TOWCTRANS 1

/* Define to 1 if truncate is declared even after undefining macros. */
#define HAVE_RAW_DECL_TRUNCATE 1

/* Define to 1 if ttyname_r is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_TTYNAME_R */

/* Define to 1 if uname is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_UNAME */

/* Define to 1 if unlink is declared even after undefining macros. */
#define HAVE_RAW_DECL_UNLINK 1

/* Define to 1 if unlinkat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_UNLINKAT */

/* Define to 1 if unlockpt is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_UNLOCKPT */

/* Define to 1 if unsetenv is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_UNSETENV */

/* Define to 1 if usleep is declared even after undefining macros. */
#define HAVE_RAW_DECL_USLEEP 1

/* Define to 1 if utimensat is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_UTIMENSAT */

/* Define to 1 if vdprintf is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_VDPRINTF */

/* Define to 1 if vsnprintf is declared even after undefining macros. */
#define HAVE_RAW_DECL_VSNPRINTF 1

/* Define to 1 if waitpid is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_WAITPID */

/* Define to 1 if wcpcpy is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_WCPCPY */

/* Define to 1 if wcpncpy is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_WCPNCPY */

/* Define to 1 if wcrtomb is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCRTOMB 1

/* Define to 1 if wcscasecmp is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_WCSCASECMP */

/* Define to 1 if wcscat is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSCAT 1

/* Define to 1 if wcschr is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSCHR 1

/* Define to 1 if wcscmp is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSCMP 1

/* Define to 1 if wcscoll is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSCOLL 1

/* Define to 1 if wcscpy is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSCPY 1

/* Define to 1 if wcscspn is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSCSPN 1

/* Define to 1 if wcsdup is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSDUP 1

/* Define to 1 if wcsftime is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSFTIME 1

/* Define to 1 if wcslen is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSLEN 1

/* Define to 1 if wcsncasecmp is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_WCSNCASECMP */

/* Define to 1 if wcsncat is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSNCAT 1

/* Define to 1 if wcsncmp is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSNCMP 1

/* Define to 1 if wcsncpy is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSNCPY 1

/* Define to 1 if wcsnlen is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSNLEN 1

/* Define to 1 if wcsnrtombs is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_WCSNRTOMBS */

/* Define to 1 if wcspbrk is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSPBRK 1

/* Define to 1 if wcsrchr is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSRCHR 1

/* Define to 1 if wcsrtombs is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSRTOMBS 1

/* Define to 1 if wcsspn is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSSPN 1

/* Define to 1 if wcsstr is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSSTR 1

/* Define to 1 if wcstok is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSTOK 1

/* Define to 1 if wcswidth is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_WCSWIDTH */

/* Define to 1 if wcsxfrm is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSXFRM 1

/* Define to 1 if wctob is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCTOB 1

/* Define to 1 if wctrans is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCTRANS 1

/* Define to 1 if wctype is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCTYPE 1

/* Define to 1 if wcwidth is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_WCWIDTH */

/* Define to 1 if wmemchr is declared even after undefining macros. */
#define HAVE_RAW_DECL_WMEMCHR 1

/* Define to 1 if wmemcmp is declared even after undefining macros. */
#define HAVE_RAW_DECL_WMEMCMP 1

/* Define to 1 if wmemcpy is declared even after undefining macros. */
#define HAVE_RAW_DECL_WMEMCPY 1

/* Define to 1 if wmemmove is declared even after undefining macros. */
#define HAVE_RAW_DECL_WMEMMOVE 1

/* Define to 1 if wmemset is declared even after undefining macros. */
#define HAVE_RAW_DECL_WMEMSET 1

/* Define to 1 if _Exit is declared even after undefining macros. */
#define HAVE_RAW_DECL__EXIT 1

/* Define to 1 if you have the `readdir' function. */
#define HAVE_READDIR 1

/* Define to 1 if you have the `readlink' function. */
/* #undef HAVE_READLINK */

/* Define if the 'realloc' function is POSIX compliant. */
/* #undef HAVE_REALLOC_POSIX */

/* Define to 1 if you have the `realpath' function. */
/* #undef HAVE_REALPATH */

/* Define to 1 if you have the `setdtablesize' function. */
/* #undef HAVE_SETDTABLESIZE */

/* Define to 1 if 'sig_atomic_t' is a signed integer type. */
/* #undef HAVE_SIGNED_SIG_ATOMIC_T */

/* Define to 1 if 'wchar_t' is a signed integer type. */
/* #undef HAVE_SIGNED_WCHAR_T */

/* Define to 1 if 'wint_t' is a signed integer type. */
/* #undef HAVE_SIGNED_WINT_T */

/* Define to 1 if the system has the type `sigset_t'. */
/* #undef HAVE_SIGSET_T */

/* Define to 1 if you have the `sleep' function. */
#define HAVE_SLEEP 1

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* Define if the return value of the snprintf function is the number of of
   bytes (excluding the terminating NUL) that would have been produced if the
   buffer had been large enough. */
#define HAVE_SNPRINTF_RETVAL_C99 1
/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define if <stdint.h> exists, doesn't clash with <sys/types.h>, and declares
   uintmax_t. */
#define HAVE_STDINT_H_WITH_UINTMAX 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdio_ext.h> header file. */
/* #undef HAVE_STDIO_EXT_H */

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `stpcpy' function. */
/* #undef HAVE_STPCPY */

/* Define if you have the stpncpy() function and it works. */
/* #undef HAVE_STPNCPY */

/* Define to 1 if you have the `strcasecmp' function. */
#define HAVE_STRCASECMP 1

/* Define to 1 if you have the `strchrnul' function. */
/* #undef HAVE_STRCHRNUL */

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1
/* Define if you have `strerror_r'. */
/* #undef HAVE_STRERROR_R */

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strncasecmp' function. */
						  
#define HAVE_STRNCASECMP 1

/* Define to 1 if you have the `strndup' function. */
						  
/* #undef HAVE_STRNDUP */

/* Define to 1 if you have the `strnlen' function. */
#define HAVE_STRNLEN 1

/* Define to 1 if you have the `strsep' function. */
/* #undef HAVE_STRSEP */

/* Define to 1 if `sysprof-4/sysprof-capture-types.h` is provided by the
   system, 0 otherwise. */
/* #undef HAVE_SYSPROF_4_HEADERS */

/* Define to 1 if `sysprof-6/sysprof-capture-types.h` is provided by the
   system, 0 otherwise. */
/* #undef HAVE_SYSPROF_6_HEADERS */

/* Define to 1 if you have the <sys/resource.h> header file. */
/* #undef HAVE_SYS_RESOURCE_H */
/* Define if there is a member named d_type in the struct describing directory
   headers. */
/* #undef HAVE_STRUCT_DIRENT_D_TYPE */

/* Define to 1 if `f_type' is a member of `struct statfs'. */
/* #undef HAVE_STRUCT_STATFS_F_TYPE */

/* Define to 1 if `st_atimensec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_ATIMENSEC */

/* Define to 1 if `st_atimespec.tv_nsec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_ATIMESPEC_TV_NSEC */

/* Define to 1 if `st_atim.st__tim.tv_nsec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_ATIM_ST__TIM_TV_NSEC */

/* Define to 1 if `st_atim.tv_nsec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_ATIM_TV_NSEC */

/* Define to 1 if `st_birthtimensec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_BIRTHTIMENSEC */

/* Define to 1 if `st_birthtimespec.tv_nsec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_BIRTHTIMESPEC_TV_NSEC */

/* Define to 1 if `st_birthtim.tv_nsec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_BIRTHTIM_TV_NSEC */

/* Define to 1 if the system has the type `struct utsname'. */
/* #undef HAVE_STRUCT_UTSNAME */

/* Define to 1 if you have the `symlink' function. */
/* #undef HAVE_SYMLINK */

/* Define to 1 if you have the <sysexits.h> header file. */
/* #undef HAVE_SYSEXITS_H */

/* Define to 1 if you have the <sys/bitypes.h> header file. */
/* #undef HAVE_SYS_BITYPES_H */

/* Define to 1 if you have the <sys/cdefs.h> header file. */
#define HAVE_SYS_CDEFS_H 1

/* Define to 1 if you have the <sys/inttypes.h> header file. */
/* #undef HAVE_SYS_INTTYPES_H */

/* Define to 1 if you have the <sys/mman.h> header file. */
/* #undef HAVE_SYS_MMAN_H */

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
/* #undef HAVE_SYS_SOCKET_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if <sys/user.h> defines struct user_regs_struct */
/* #undef HAVE_SYS_USER_REGS */

/* Define to 1 if you have the <sys/utsname.h> header file. */
/* #undef HAVE_SYS_UTSNAME_H */

/* Define to 1 if you have the <sys/vfs.h> header file. */
/* #undef HAVE_SYS_VFS_H */

/* Define to 1 if you have the <sys/wait.h> header file. */
/* #undef HAVE_SYS_WAIT_H */

/* Define to 1 if you have the `towlower' function. */
#define HAVE_TOWLOWER 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if the system has the type 'unsigned long long int'. */
#define HAVE_UNSIGNED_LONG_LONG_INT 1

/* Define if you have a global __progname variable */
/* #undef HAVE_VAR___PROGNAME */

/* Define to 1 if you have the `vasnprintf' function. */
/* #undef HAVE_VASNPRINTF */

/* Defined if __attribute__((visibility())) is supported */
/* #undef HAVE_VISIBILITY */

/* Define to 1 if you have the `vsnprintf' function. */
#define HAVE_VSNPRINTF 1

/* Define to 1 if you have the <wchar.h> header file. */
#define HAVE_WCHAR_H 1

/* Define if you have the 'wchar_t' type. */
#define HAVE_WCHAR_T 1

/* Define to 1 if you have the `wcrtomb' function. */
#define HAVE_WCRTOMB 1

/* Define to 1 if you have the `wcslen' function. */
#define HAVE_WCSLEN 1

/* Define to 1 if you have the `wcsnlen' function. */
#define HAVE_WCSNLEN 1

/* Define to 1 if you have the <wctype.h> header file. */
#define HAVE_WCTYPE_H 1

/* Define to 1 if you have the <winsock2.h> header file. */
#define HAVE_WINSOCK2_H 1

/* Define if you have the 'wint_t' type. */
#define HAVE_WINT_T 1

/* Define to 1 if you have the `wmemchr' function. */
#define HAVE_WMEMCHR 1

/* Define to 1 if you have the `wmemcpy' function. */
#define HAVE_WMEMCPY 1

/* Define to 1 if you have the `wmempcpy' function. */
#define HAVE_WMEMPCPY 1

/* Define to 1 if fstatat (..., 0) works. For example, it does not work in AIX
   7.1. */
/* #undef HAVE_WORKING_FSTATAT_ZERO_FLAG */

/* Define to 1 if O_NOATIME works. */
#define HAVE_WORKING_O_NOATIME 0

/* Define to 1 if O_NOFOLLOW works. */
#define HAVE_WORKING_O_NOFOLLOW 0

/* Define to 1 if the system has the type `_Bool'. */
#define HAVE__BOOL 1

/* Define to 1 if you have the `_set_invalid_parameter_handler' function. */
#define HAVE__SET_INVALID_PARAMETER_HANDLER 1

/* Define to 1 if the compiler supports __builtin_expect,
   and to 2 if <builtins.h> does.  */
#define HAVE___BUILTIN_EXPECT 1
#ifndef HAVE___BUILTIN_EXPECT
# define __builtin_expect(e, c) (e)
#elif HAVE___BUILTIN_EXPECT == 2
# include <builtins.h>
#endif
    

/* Define to 1 if the system has the type `__fsword_t'. */
/* #undef HAVE___FSWORD_T */

/* $libdir subdirectory containing libebl modules. */
/* #undef LIBEBL_SUBDIR */

/* Host system file name extension for dynamic libraries. */
#define LIBEXT ".dll"

/* Host system file name prefix for dynamic libraries. */
#define LIBPREFIX "lib"

/* Define to 1 if lseek does not detect pipes. */
#define LSEEK_PIPE_BROKEN 1

/* Define to 1 if 'lstat' dereferences a symlink specified with a trailing
   slash. */
/* #undef LSTAT_FOLLOWS_SLASHED_SYMLINK */

/* If malloc(0) is != NULL, define this to 1. Otherwise define this to 0. */
#define MALLOC_0_IS_NONNULL 1

/* Define to a substitute value for mmap()'s MAP_ANONYMOUS flag. */
/* #undef MAP_ANONYMOUS */

/* Define if the mbrtowc function does not return (size_t) -2 for empty input.
   */
/* #undef MBRTOWC_EMPTY_INPUT_BUG */

/* Define if the mbrtowc function has the NULL pwc argument bug. */
/* #undef MBRTOWC_NULL_ARG1_BUG */

/* Define if the mbrtowc function has the NULL string argument bug. */
/* #undef MBRTOWC_NULL_ARG2_BUG */

/* Define if the mbrtowc function does not return 0 for a NUL character. */
/* #undef MBRTOWC_NUL_RETVAL_BUG */

/* Define if the mbrtowc function returns a wrong return value. */
#define MBRTOWC_RETVAL_BUG 1

/* Use GNU style printf and scanf.  */
#ifndef __USE_MINGW_ANSI_STDIO
# define __USE_MINGW_ANSI_STDIO 1
#endif


/* Identifier for modules in the build. */
/* #undef MODVERSION */

/* Define to 1 if open() fails to recognize a trailing slash. */
/* #undef OPEN_TRAILING_SLASH_BUG */
/* Name of package */
#define PACKAGE "elfutils"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "https://sourceware.org/bugzilla"

/* Define to the full name of this package. */
#define PACKAGE_NAME "elfutils"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "elfutils 0.192"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "elfutils"

/* Define to the home page for this package. */
#define PACKAGE_URL "http://elfutils.org/"

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.192"

/* Define to the type that is the result of default argument promotions of
   type mode_t. */
#define PROMOTED_MODE_T int

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'ptrdiff_t'. */
/* #undef PTRDIFF_T_SUFFIX */

/* Define to 1 if readlink fails to recognize a trailing slash. */
/* #undef READLINK_TRAILING_SLASH_BUG */

/* Define to 1 if gnulib's dirfd() replacement is used. */
/* #undef REPLACE_DIRFD */

/* Define to 1 if gnulib's fchdir() replacement is used. */
#define REPLACE_FCHDIR 1

/* Define to 1 if stat needs help when passed a file name with a trailing
   slash */
/* #undef REPLACE_FUNC_STAT_FILE */

/* Define to 1 if open() should work around the inability to open a directory.
   */
#define REPLACE_OPEN_DIRECTORY 1

/* Define to 1 if strerror(0) does not return a message implying success. */
/* #undef REPLACE_STRERROR_0 */

/* Define if vasnprintf exists but is overridden by gnulib. */
/* #undef REPLACE_VASNPRINTF */

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'sig_atomic_t'. */
/* #undef SIG_ATOMIC_T_SUFFIX */
/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 4

/* Define to 1 if all of the C90 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
   
/* Define as the maximum value of type 'size_t', if the system doesn't define
   it. */
#ifndef SIZE_MAX
/* # undef SIZE_MAX */
#endif

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'size_t'. */
/* #undef SIZE_T_SUFFIX */

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at runtime.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Define to 1 if the `S_IS*' macros in <sys/stat.h> do not work properly. */
/* #undef STAT_MACROS_BROKEN */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if strerror_r returns char *. */
/* #undef STRERROR_R_CHAR_P */

/* Define to 1 if the type of the st_atim member of a struct stat is struct
   timespec. */
/* #undef TYPEOF_STRUCT_STAT_ST_ATIM_IS_STRUCT_TIMESPEC */
/* Support bzip2 decompression via -lbz2. */
#define USE_BZLIB 1

/* Defined if demangling is enabled */
#define USE_DEMANGLE 1

/* Defined if libraries should be thread-safe. */
/* #undef USE_LOCKS */

/* Support LZMA (xz) decompression via -llzma. */
#define USE_LZMA 1

/* Support gzip decompression via -lz. */
#define USE_ZLIB 1

/* Support ZSTD (zst) decompression via -lzstd. */
#define USE_ZSTD 1

/* zstd compression support */
#define USE_ZSTD_COMPRESS 1
			   

/* Declare tdestroy here if it is not available from a system header. */
#define USE_PRIVATE_TDESTROY 1
#ifdef USE_PRIVATE_TDESTROY
void tdestroy(void *root, void (*free_node)(void *nodep));
#endif


/* Define basename() here if it is not available from a system header. */
/* #undef USE_REPLACEMENT_BASENAME */
#ifdef USE_REPLACEMENT_BASENAME
char *basename(const char *path);
#endif


/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
/* # undef _ALL_SOURCE */
#endif
/* Enable general extensions on macOS.  */
#ifndef _DARWIN_C_SOURCE
/* # undef _DARWIN_C_SOURCE */
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
/* # undef _GNU_SOURCE */
#endif
/* Enable NetBSD extensions on NetBSD.  */
#ifndef _NETBSD_SOURCE
/* # undef _NETBSD_SOURCE */
#endif
/* Enable OpenBSD extensions on NetBSD.  */
#ifndef _OPENBSD_SOURCE
/* # undef _OPENBSD_SOURCE */
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
/* # undef _POSIX_PTHREAD_SEMANTICS */
#endif
/* Enable extensions specified by ISO/IEC TS 18661-5:2014.  */
#ifndef __STDC_WANT_IEC_60559_ATTRIBS_EXT__
/* # undef __STDC_WANT_IEC_60559_ATTRIBS_EXT__ */
#endif
/* Enable extensions specified by ISO/IEC TS 18661-1:2014.  */
#ifndef __STDC_WANT_IEC_60559_BFP_EXT__
/* # undef __STDC_WANT_IEC_60559_BFP_EXT__ */
#endif
/* Enable extensions specified by ISO/IEC TS 18661-2:2015.  */
#ifndef __STDC_WANT_IEC_60559_DFP_EXT__
/* # undef __STDC_WANT_IEC_60559_DFP_EXT__ */
#endif
/* Enable extensions specified by ISO/IEC TS 18661-4:2015.  */
#ifndef __STDC_WANT_IEC_60559_FUNCS_EXT__
/* # undef __STDC_WANT_IEC_60559_FUNCS_EXT__ */
#endif
/* Enable extensions specified by ISO/IEC TS 18661-3:2015.  */
#ifndef __STDC_WANT_IEC_60559_TYPES_EXT__
/* # undef __STDC_WANT_IEC_60559_TYPES_EXT__ */
#endif
/* Enable extensions specified by ISO/IEC TR 24731-2:2010.  */
#ifndef __STDC_WANT_LIB_EXT2__
/* # undef __STDC_WANT_LIB_EXT2__ */
#endif
/* Enable extensions specified by ISO/IEC 24747:2009.  */
#ifndef __STDC_WANT_MATH_SPEC_FUNCS__
/* # undef __STDC_WANT_MATH_SPEC_FUNCS__ */
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
/* # undef _TANDEM_SOURCE */
#endif
/* Enable X/Open extensions if necessary.  HP-UX 11.11 defines
   mbstate_t only if _XOPEN_SOURCE is defined to 500, regardless of
   whether compiling with -Ae or -D_HPUX_SOURCE=1.  */
#ifndef _XOPEN_SOURCE
/* # undef _XOPEN_SOURCE */
#endif
/* Enable X/Open compliant socket functions that do not require linking
   with -lxnet on HP-UX 11.11.  */
#ifndef _HPUX_ALT_XOPEN_SOCKET_API
/* # undef _HPUX_ALT_XOPEN_SOCKET_API */
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
/* # undef __EXTENSIONS__ */
#endif


/* Define sysconf(3) here if it is not available from a system header. */
#define USE_WIN32_SYSCONF 1
#ifdef USE_WIN32_SYSCONF
#define _SC_PAGESIZE 1
long sysconf(int name);
#endif

/* Version number of package */
#define VERSION "0.192"


/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'wchar_t'. */
/* #undef WCHAR_T_SUFFIX */

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'wint_t'. */
/* #undef WINT_T_SUFFIX */

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif
/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
#define YYTEXT_POINTER 1

/* Number of bits in a file offset, on hosts where this is settable. */
#define _FILE_OFFSET_BITS 64

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 1 to make NetBSD features available. MINIX 3 needs this. */
/* #undef _NETBSD_SOURCE */

/* The _Noreturn keyword of C11.  */
#if ! (defined _Noreturn \
       || (defined __STDC_VERSION__ && 201112 <= __STDC_VERSION__))
# if (3 <= __GNUC__ || (__GNUC__ == 2 && 8 <= __GNUC_MINOR__) \
      || 0x5110 <= __SUNPRO_C)
#  define _Noreturn __attribute__ ((__noreturn__))
# elif defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn
# endif
#endif


/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for 'stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* For standard stat data types on VMS. */
#define _USE_STD_STAT 1

/* Define to rpl_ if the getopt replacement functions and variables should be
   used. */
#define __GETOPT_PREFIX rpl_

/* Define to 1 if the system <stdint.h> predates C++11. */
/* #undef __STDC_CONSTANT_MACROS */

/* Define to 1 if the system <stdint.h> predates C++11. */
/* #undef __STDC_LIMIT_MACROS */

/* Please see the Gnulib manual for how to use these macros.

   Suppress extern inline with HP-UX cc, as it appears to be broken; see
   <https://lists.gnu.org/r/bug-texinfo/2013-02/msg00030.html>.

   Suppress extern inline with Sun C in standards-conformance mode, as it
   mishandles inline functions that call each other.  E.g., for 'inline void f
   (void) { } inline void g (void) { f (); }', c99 incorrectly complains
   'reference to static identifier "f" in extern inline function'.
   This bug was observed with Sun C 5.12 SunOS_i386 2011/11/16.

   Suppress extern inline (with or without __attribute__ ((__gnu_inline__)))
   on configurations that mistakenly use 'static inline' to implement
   functions or macros in standard C headers like <ctype.h>.  For example,
   if isdigit is mistakenly implemented via a static inline function,
   a program containing an extern inline function that calls isdigit
   may not work since the C standard prohibits extern inline functions
   from calling static functions.  This bug is known to occur on:

     OS X 10.8 and earlier; see:
     https://lists.gnu.org/r/bug-gnulib/2012-12/msg00023.html

     DragonFly; see
     http://muscles.dragonflybsd.org/bulk/bleeding-edge-potential/latest-per-pkg/ah-tty-0.3.12.log

     FreeBSD; see:
     https://lists.gnu.org/r/bug-gnulib/2014-07/msg00104.html

   OS X 10.9 has a macro __header_inline indicating the bug is fixed for C and
   for clang but remains for g++; see <https://trac.macports.org/ticket/41033>.
   Assume DragonFly and FreeBSD will be similar.  */
#if (((defined __APPLE__ && defined __MACH__) \
      || defined __DragonFly__ || defined __FreeBSD__) \
     && (defined __header_inline \
         ? (defined __cplusplus && defined __GNUC_STDC_INLINE__ \
            && ! defined __clang__) \
         : ((! defined _DONT_USE_CTYPE_INLINE_ \
             && (defined __GNUC__ || defined __cplusplus)) \
            || (defined _FORTIFY_SOURCE && 0 < _FORTIFY_SOURCE \
                && defined __GNUC__ && ! defined __cplusplus))))
# define _GL_EXTERN_INLINE_STDHEADER_BUG
#endif
#if ((__GNUC__ \
      ? defined __GNUC_STDC_INLINE__ && __GNUC_STDC_INLINE__ \
      : (199901L <= __STDC_VERSION__ \
         && !defined __HP_cc \
         && !defined __PGI \
         && !(defined __SUNPRO_C && __STDC__))) \
     && !defined _GL_EXTERN_INLINE_STDHEADER_BUG)
# define _GL_INLINE inline
# define _GL_EXTERN_INLINE extern inline
# define _GL_EXTERN_INLINE_IN_USE
#elif (2 < __GNUC__ + (7 <= __GNUC_MINOR__) && !defined __STRICT_ANSI__ \
       && !defined _GL_EXTERN_INLINE_STDHEADER_BUG)
# if defined __GNUC_GNU_INLINE__ && __GNUC_GNU_INLINE__
   /* __gnu_inline__ suppresses a GCC 4.2 diagnostic.  */
#  define _GL_INLINE extern inline __attribute__ ((__gnu_inline__))
# else
#  define _GL_INLINE extern inline
# endif
# define _GL_EXTERN_INLINE extern
# define _GL_EXTERN_INLINE_IN_USE
#else
# define _GL_INLINE static _GL_UNUSED
# define _GL_EXTERN_INLINE static _GL_UNUSED
#endif

/* In GCC 4.6 (inclusive) to 5.1 (exclusive),
   suppress bogus "no previous prototype for 'FOO'"
   and "no previous declaration for 'FOO'" diagnostics,
   when FOO is an inline function in the header; see
   <https://gcc.gnu.org/bugzilla/show_bug.cgi?id=54113> and
   <https://gcc.gnu.org/bugzilla/show_bug.cgi?id=63877>.  */
#if __GNUC__ == 4 && 6 <= __GNUC_MINOR__
# if defined __GNUC_STDC_INLINE__ && __GNUC_STDC_INLINE__
#  define _GL_INLINE_HEADER_CONST_PRAGMA
# else
#  define _GL_INLINE_HEADER_CONST_PRAGMA \
     _Pragma ("GCC diagnostic ignored \"-Wsuggest-attribute=const\"")
# endif
# define _GL_INLINE_HEADER_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wmissing-prototypes\"") \
    _Pragma ("GCC diagnostic ignored \"-Wmissing-declarations\"") \
    _GL_INLINE_HEADER_CONST_PRAGMA
# define _GL_INLINE_HEADER_END \
    _Pragma ("GCC diagnostic pop")
#else
# define _GL_INLINE_HEADER_BEGIN
# define _GL_INLINE_HEADER_END
#endif

/* Define to a replacement function name for fnmatch(). */
#define fnmatch gnu_fnmatch

/* Define to `int' if <sys/types.h> doesn't define. */
#define gid_t int

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to long or long long if <stdint.h> and <inttypes.h> don't define. */
/* #undef intmax_t */

/* Work around a bug in Apple GCC 4.0.1 build 5465: In C99 mode, it supports
   the ISO C 99 semantics of 'extern inline' (unlike the GNU C semantics of
   earlier versions), but does not display it by setting __GNUC_STDC_INLINE__.
   __APPLE__ && __MACH__ test for Mac OS X.
   __APPLE_CC__ tests for the Apple compiler and its version.
   __STDC_VERSION__ tests for the C99 mode.  */
#if defined __APPLE__ && defined __MACH__ && __APPLE_CC__ >= 5465 && !defined __cplusplus && __STDC_VERSION__ >= 199901L && !defined __GNUC_STDC_INLINE__
# define __GNUC_STDC_INLINE__ 1
#endif

/* Define to a type if <wchar.h> does not define. */
/* #undef mbstate_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef mode_t */

/* Define to the type of st_nlink in struct stat, or a supertype. */
#define nlink_t int

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define as the type of the result of subtracting two pointers, if the system
   doesn't define it. */
/* #undef ptrdiff_t */

/* Define to the equivalent of the C99 'restrict' keyword, or to
   nothing if this is not supported.  Do not define if restrict is
   supported directly.  */
#define restrict __restrict
/* Work around a bug in Sun C++: it does not support _Restrict or
   __restrict__, even though the corresponding Sun C compiler ends up with
   "#define restrict _Restrict" or "#define restrict __restrict__" in the
   previous line.  Perhaps some future version of Sun C++ will work with
   restrict; if so, hopefully it defines __RESTRICT like Sun C does.  */
#if defined __SUNPRO_CC && !defined __RESTRICT
# define _Restrict
# define __restrict__
#endif

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define as a signed type of the same size as size_t. */
/* #undef ssize_t */

/* Define to `int' if <sys/types.h> doesn't define. */
#define uid_t int

/* Define as a marker that can be attached to declarations that might not
    be used.  This helps to reduce warnings, such as from
    GCC -Wunused-parameter.  */
#if __GNUC__ >= 3 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)
# define _GL_UNUSED __attribute__ ((__unused__))
#else
# define _GL_UNUSED
#endif
/* The name _UNUSED_PARAMETER_ is an earlier spelling, although the name
   is a misnomer outside of parameter lists.  */
#define _UNUSED_PARAMETER_ _GL_UNUSED

/* gcc supports the "unused" attribute on possibly unused labels, and
   g++ has since version 4.5.  Note to support C++ as well as C,
   _GL_UNUSED_LABEL should be used with a trailing ;  */
#if !defined __cplusplus || __GNUC__ > 4 \
    || (__GNUC__ == 4 && __GNUC_MINOR__ >= 5)
# define _GL_UNUSED_LABEL _GL_UNUSED
#else
# define _GL_UNUSED_LABEL
#endif

/* The __pure__ attribute was added in gcc 2.96.  */
#if __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 96)
# define _GL_ATTRIBUTE_PURE __attribute__ ((__pure__))
#else
# define _GL_ATTRIBUTE_PURE /* empty */
#endif

/* The __const__ attribute was added in gcc 2.95.  */
#if __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 95)
# define _GL_ATTRIBUTE_CONST __attribute__ ((__const__))
#else
# define _GL_ATTRIBUTE_CONST /* empty */
#endif

/* The __malloc__ attribute was added in gcc 3.  */
#if 3 <= __GNUC__
# define _GL_ATTRIBUTE_MALLOC __attribute__ ((__malloc__))
#else
# define _GL_ATTRIBUTE_MALLOC /* empty */
#endif

#if defined(HAVE_DECL_CLEARERR_UNLOCKED) && !HAVE_DECL_CLEARERR_UNLOCKED
# define clearerr_unlocked(x) clearerr (x)
#endif
#if defined(HAVE_DECL_FEOF_UNLOCKED) && !HAVE_DECL_FEOF_UNLOCKED
# define feof_unlocked(x) feof (x)
#endif
#if defined(HAVE_DECL_FERROR_UNLOCKED) && !HAVE_DECL_FERROR_UNLOCKED
# define ferror_unlocked(x) ferror (x)
#endif
#if defined(HAVE_DECL_FFLUSH_UNLOCKED) && !HAVE_DECL_FFLUSH_UNLOCKED
# define fflush_unlocked(x) fflush (x)
#endif
#if defined(HAVE_DECL_FGETS_UNLOCKED) && !HAVE_DECL_FGETS_UNLOCKED
# define fgets_unlocked(x,y,z) fgets (x,y,z)
#endif
#if defined(HAVE_DECL_FPUTC_UNLOCKED) && !HAVE_DECL_FPUTC_UNLOCKED
# define fputc_unlocked(x,y) fputc (x,y)
#endif
#if defined(HAVE_DECL_FPUTS_UNLOCKED) && !HAVE_DECL_FPUTS_UNLOCKED
# define fputs_unlocked(x,y) fputs (x,y)
#endif
#if defined(HAVE_DECL_FREAD_UNLOCKED) && !HAVE_DECL_FREAD_UNLOCKED
# define fread_unlocked(w,x,y,z) fread (w,x,y,z)
#endif
#if defined(HAVE_DECL_FWRITE_UNLOCKED) && !HAVE_DECL_FWRITE_UNLOCKED
# define fwrite_unlocked(w,x,y,z) fwrite (w,x,y,z)
#endif
#if defined(HAVE_DECL_GETC_UNLOCKED) && !HAVE_DECL_GETC_UNLOCKED
# define getc_unlocked(x) getc (x)
#endif
#if defined(HAVE_DECL_GETCHAR_UNLOCKED) && !HAVE_DECL_GETCHAR_UNLOCKED
#  define getchar_unlocked() getchar ()
#endif
#if defined(HAVE_DECL_PUTC_UNLOCKED) && !HAVE_DECL_PUTC_UNLOCKED
# define putc_unlocked(x,y) putc (x,y)
#endif
#if defined(HAVE_DECL_PUTCHAR_UNLOCKED) && !HAVE_DECL_PUTCHAR_UNLOCKED
# define putchar_unlocked(x) putchar (x)
#endif

#ifndef HAVE_DECL_POSIX_MEMALIGN
#define posix_memalign(ptr,align,size) ((*ptr = _aligned_malloc(size,align)) == NULL)
#endif


#include <eu-config.h>
