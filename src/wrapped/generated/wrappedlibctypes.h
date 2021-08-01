/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.1.0.16) *
 *******************************************************************/
#ifndef __wrappedlibcTYPES_H_
#define __wrappedlibcTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void (*vFv_t)(void);
typedef void (*vFp_t)(void*);
typedef int64_t (*iFv_t)(void);
typedef int64_t (*iFp_t)(void*);
typedef intptr_t (*lFv_t)(void);
typedef uintptr_t (*LFL_t)(uintptr_t);
typedef void* (*pFL_t)(uintptr_t);
typedef void* (*pFp_t)(void*);
typedef void (*vFpi_t)(void*, int64_t);
typedef void (*vFpu_t)(void*, uint64_t);
typedef void (*vFpp_t)(void*, void*);
typedef void (*vFpV_t)(void*, ...);
typedef int64_t (*iFpi_t)(void*, int64_t);
typedef int64_t (*iFpL_t)(void*, uintptr_t);
typedef int64_t (*iFpp_t)(void*, void*);
typedef int64_t (*iFpV_t)(void*, ...);
typedef int64_t (*iFpA_t)(void*, va_list);
typedef int64_t (*iFSp_t)(void*, void*);
typedef void* (*pFip_t)(int64_t, void*);
typedef void* (*pFpi_t)(void*, int64_t);
typedef void* (*pFpp_t)(void*, void*);
typedef void (*vFipV_t)(int64_t, void*, ...);
typedef void (*vFipA_t)(int64_t, void*, va_list);
typedef void (*vFpii_t)(void*, int64_t, int64_t);
typedef void (*vFpup_t)(void*, uint64_t, void*);
typedef int64_t (*iFiip_t)(int64_t, int64_t, void*);
typedef int64_t (*iFiiN_t)(int64_t, int64_t, ...);
typedef int64_t (*iFipp_t)(int64_t, void*, void*);
typedef int64_t (*iFipV_t)(int64_t, void*, ...);
typedef int64_t (*iFpLi_t)(void*, uintptr_t, int64_t);
typedef int64_t (*iFppi_t)(void*, void*, int64_t);
typedef int64_t (*iFppp_t)(void*, void*, void*);
typedef int64_t (*iFppV_t)(void*, void*, ...);
typedef int64_t (*iFppA_t)(void*, void*, va_list);
typedef int64_t (*iFpOu_t)(void*, int32_t, uint64_t);
typedef intptr_t (*lFppL_t)(void*, void*, uintptr_t);
typedef void* (*pFpip_t)(void*, int64_t, void*);
typedef void (*vFiipV_t)(int64_t, int64_t, void*, ...);
typedef void (*vFpLLp_t)(void*, uintptr_t, uintptr_t, void*);
typedef int64_t (*iFiiip_t)(int64_t, int64_t, int64_t, void*);
typedef int64_t (*iFiiiN_t)(int64_t, int64_t, int64_t, ...);
typedef int64_t (*iFipii_t)(int64_t, void*, int64_t, int64_t);
typedef int64_t (*iFpipp_t)(void*, int64_t, void*, void*);
typedef int64_t (*iFpipV_t)(void*, int64_t, void*, ...);
typedef int64_t (*iFpLpp_t)(void*, uintptr_t, void*, void*);
typedef int64_t (*iFpLpV_t)(void*, uintptr_t, void*, ...);
typedef int64_t (*iFpLpA_t)(void*, uintptr_t, void*, va_list);
typedef int64_t (*iFppii_t)(void*, void*, int64_t, int64_t);
typedef int64_t (*iFppiV_t)(void*, void*, int64_t, ...);
typedef int64_t (*iFpppp_t)(void*, void*, void*, void*);
typedef void (*vFpLLpp_t)(void*, uintptr_t, uintptr_t, void*, void*);
typedef int64_t (*iFiippi_t)(int64_t, int64_t, void*, void*, int64_t);
typedef int64_t (*iFipiip_t)(int64_t, void*, int64_t, int64_t, void*);
typedef int64_t (*iFipppp_t)(int64_t, void*, void*, void*, void*);
typedef int64_t (*iFpilpV_t)(void*, int64_t, intptr_t, void*, ...);
typedef int64_t (*iFpuppp_t)(void*, uint64_t, void*, void*, void*);
typedef void* (*pFpLLiN_t)(void*, uintptr_t, uintptr_t, int64_t, ...);
typedef void* (*pFppLLp_t)(void*, void*, uintptr_t, uintptr_t, void*);
typedef void* (*pFpppLp_t)(void*, void*, void*, uintptr_t, void*);
typedef int64_t (*iFpLiLpV_t)(void*, uintptr_t, int64_t, uintptr_t, void*, ...);
typedef void* (*pFpLiiil_t)(void*, uintptr_t, int64_t, int64_t, int64_t, intptr_t);
typedef int64_t (*iFpippppp_t)(void*, int64_t, void*, void*, void*, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(_Jv_RegisterClasses, vFv_t) \
	GO(__stack_chk_fail, vFv_t) \
	GO(_ITM_deregisterTMCloneTable, vFp_t) \
	GO(__cxa_finalize, vFp_t) \
	GO(fork, iFv_t) \
	GO(_setjmp, iFp_t) \
	GO(getcontext, iFp_t) \
	GO(setjmp, iFp_t) \
	GO(uname, iFp_t) \
	GO(syscall, lFv_t) \
	GO(getauxval, LFL_t) \
	GO(malloc, pFL_t) \
	GO(__deregister_frame_info, pFp_t) \
	GO(__longjmp_chk, vFpi_t) \
	GO(_longjmp, vFpi_t) \
	GO(longjmp, vFpi_t) \
	GO(siglongjmp, vFpi_t) \
	GO(_ITM_registerTMCloneTable, vFpu_t) \
	GO(__register_frame_info, vFpp_t) \
	GO(warn, vFpV_t) \
	GO(warnx, vFpV_t) \
	GO(__sigsetjmp, iFpi_t) \
	GO(backtrace, iFpi_t) \
	GO(munmap, iFpL_t) \
	GO(__vprintf_chk, iFpp_t) \
	GO(dl_iterate_phdr, iFpp_t) \
	GO(execv, iFpp_t) \
	GO(execvp, iFpp_t) \
	GO(sigaltstack, iFpp_t) \
	GO(swapcontext, iFpp_t) \
	GO(execl, iFpV_t) \
	GO(execlp, iFpV_t) \
	GO(printf, iFpV_t) \
	GO(vprintf, iFpA_t) \
	GO(_IO_file_stat, iFSp_t) \
	GO(__sysv_signal, pFip_t) \
	GO(signal, pFip_t) \
	GO(sigset, pFip_t) \
	GO(sysv_signal, pFip_t) \
	GO(backtrace_symbols, pFpi_t) \
	GO(__realpath_chk, pFpp_t) \
	GO(fopen, pFpp_t) \
	GO(fopen64, pFpp_t) \
	GO(realpath, pFpp_t) \
	GO(err, vFipV_t) \
	GO(errx, vFipV_t) \
	GO(syslog, vFipV_t) \
	GO(vsyslog, vFipA_t) \
	GO(backtrace_symbols_fd, vFpii_t) \
	GO(_ITM_addUserCommitAction, vFpup_t) \
	GO(__fxstat, iFiip_t) \
	GO(__fxstat64, iFiip_t) \
	GO(__fcntl, iFiiN_t) \
	GO(fcntl, iFiiN_t) \
	GO(fcntl64, iFiiN_t) \
	GO(__lxstat, iFipp_t) \
	GO(__lxstat64, iFipp_t) \
	GO(__sigaction, iFipp_t) \
	GO(__xstat, iFipp_t) \
	GO(__xstat64, iFipp_t) \
	GO(getopt, iFipp_t) \
	GO(sigaction, iFipp_t) \
	GO(__printf_chk, iFipV_t) \
	GO(mprotect, iFpLi_t) \
	GO(ftw, iFppi_t) \
	GO(ftw64, iFppi_t) \
	GO(__cxa_atexit, iFppp_t) \
	GO(__cxa_thread_atexit_impl, iFppp_t) \
	GO(__isoc99_vfscanf, iFppp_t) \
	GO(__isoc99_vsscanf, iFppp_t) \
	GO(__vfprintf_chk, iFppp_t) \
	GO(__vsscanf, iFppp_t) \
	GO(execve, iFppp_t) \
	GO(__asprintf, iFppV_t) \
	GO(__isoc99_fscanf, iFppV_t) \
	GO(__isoc99_sscanf, iFppV_t) \
	GO(asprintf, iFppV_t) \
	GO(fprintf, iFppV_t) \
	GO(fscanf, iFppV_t) \
	GO(fwprintf, iFppV_t) \
	GO(sprintf, iFppV_t) \
	GO(sscanf, iFppV_t) \
	GO(swscanf, iFppV_t) \
	GO(vasprintf, iFppA_t) \
	GO(vfprintf, iFppA_t) \
	GO(vfscanf, iFppA_t) \
	GO(vsprintf, iFppA_t) \
	GO(vsscanf, iFppA_t) \
	GO(__open, iFpOu_t) \
	GO(open, iFpOu_t) \
	GO(open64, iFpOu_t) \
	GO(readlink, lFppL_t) \
	GO(fts_open, pFpip_t) \
	GO(__syslog_chk, vFiipV_t) \
	GO(qsort, vFpLLp_t) \
	GO(epoll_ctl, iFiiip_t) \
	GO(semctl, iFiiiN_t) \
	GO(epoll_wait, iFipii_t) \
	GO(__vasprintf_chk, iFpipp_t) \
	GO(glob, iFpipp_t) \
	GO(glob64, iFpipp_t) \
	GO(__asprintf_chk, iFpipV_t) \
	GO(__fprintf_chk, iFpipV_t) \
	GO(__vsnprintf_chk, iFpLpp_t) \
	GO(__snprintf, iFpLpV_t) \
	GO(snprintf, iFpLpV_t) \
	GO(swprintf, iFpLpV_t) \
	GO(__vsnprintf, iFpLpA_t) \
	GO(vsnprintf, iFpLpA_t) \
	GO(vswprintf, iFpLpA_t) \
	GO(nftw64, iFppii_t) \
	GO(makecontext, iFppiV_t) \
	GO(__register_atfork, iFpppp_t) \
	GO(__vsprintf_chk, iFpppp_t) \
	GO(scandir, iFpppp_t) \
	GO(scandir64, iFpppp_t) \
	GO(qsort_r, vFpLLpp_t) \
	GO(__fxstatat, iFiippi_t) \
	GO(__fxstatat64, iFiippi_t) \
	GO(epoll_pwait, iFipiip_t) \
	GO(getopt_long, iFipppp_t) \
	GO(getopt_long_only, iFipppp_t) \
	GO(scandirat, iFipppp_t) \
	GO(__sprintf_chk, iFpilpV_t) \
	GO(__vswprintf_chk, iFpuppp_t) \
	GO(mremap, pFpLLiN_t) \
	GO(bsearch, pFppLLp_t) \
	GO(lfind, pFpppLp_t) \
	GO(lsearch, pFpppLp_t) \
	GO(__snprintf_chk, iFpLiLpV_t) \
	GO(__swprintf_chk, iFpLiLpV_t) \
	GO(mmap, pFpLiiil_t) \
	GO(mmap64, pFpLiiil_t) \
	GO(__libc_start_main, iFpippppp_t)

#endif // __wrappedlibcTYPES_H_
