/*******************************************************************
 * File automatically generated by rebuild_wrappers.py (v2.1.0.16) *
 *******************************************************************/
#ifndef __wrappedvorbisfileTYPES_H_
#define __wrappedvorbisfileTYPES_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef int64_t (*iFppplPPPP_t)(void*, void*, void*, intptr_t, void*, void*, void*, void*);

#define SUPER() ADDED_FUNCTIONS() \
	GO(ov_open_callbacks, iFppplPPPP_t) \
	GO(ov_test_callbacks, iFppplPPPP_t)

#endif // __wrappedvorbisfileTYPES_H_
