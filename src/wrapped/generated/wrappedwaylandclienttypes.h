/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.1.0.16) *
 *******************************************************************/
#ifndef __wrappedwaylandclientTYPES_H_
#define __wrappedwaylandclientTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef int64_t (*iFpppL_t)(void*, void*, void*, uintptr_t);
typedef void* (*pFpupuuV_t)(void*, uint64_t, void*, uint64_t, uint64_t, ...);

#define SUPER() ADDED_FUNCTIONS() \
	GO(wl_proxy_add_listener, iFpppL_t) \
	GO(wl_proxy_marshal_flags, pFpupuuV_t)

#endif // __wrappedwaylandclientTYPES_H_
