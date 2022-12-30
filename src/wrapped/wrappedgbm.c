#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _GNU_SOURCE         /* See feature_test_macros(7) */
#include <dlfcn.h>

#include "wrappedlibs.h"

#include "debug.h"
#include "wrapper.h"
#include "bridge.h"
#include "librarian/library_private.h"
#include "x64emu.h"
#include "emu/x64emu_private.h"
#include "callback.h"
#include "librarian.h"
#include "box64context.h"
#include "emu/x64emu_private.h"
#include "myalign.h"

const char* gbmName = "libgbm.so.1";
#define LIBNAME gbm

#define ADDED_FUNCTIONS()                   \

#include "generated/wrappedgbmtypes.h"

#include "wrappercallback.h"

struct gbm_bo;

static uintptr_t my_destroy_user_data_fct = 0;
static void my_destroy_user_data(struct gbm_bo *a, void *b)
{
    RunFunction(my_context, my_destroy_user_data_fct, 2, a, b);
}

EXPORT void my_gbm_bo_set_user_data(x64emu_t* emu, struct gbm_bo *bo, void *data, void (*destroy_user_data)(struct gbm_bo *, void *))
{
    if (my_destroy_user_data_fct && my_destroy_user_data_fct != (uintptr_t) destroy_user_data)
        fprintf(stderr, "BOX64 fail: overwriting previously set gbm destroy_user_data\n");
    my_destroy_user_data_fct = (uintptr_t) destroy_user_data;
    return my->gbm_bo_set_user_data(bo, data, my_destroy_user_data);
}

#define CUSTOM_INIT \
    getMy(lib);

#define CUSTOM_FINI \
    freeMy();

#include "wrappedlib_init.h"
