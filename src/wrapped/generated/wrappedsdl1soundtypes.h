/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.1.0.16) *
 *******************************************************************/
#ifndef __wrappedsdl1soundTYPES_H_
#define __wrappedsdl1soundTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef void* (*pFpppu_t)(void*, void*, void*, uint64_t);

#define SUPER() ADDED_FUNCTIONS() \
	GO(Sound_NewSample, pFpppu_t)

#endif // __wrappedsdl1soundTYPES_H_
