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

const char* waylandclientName = "libwayland-client.so.0";
#define LIBNAME waylandclient

#define ADDED_FUNCTIONS()                   \

#include "generated/wrappedwaylandclienttypes.h"

#include "wrappercallback.h"

struct wl_proxy;

static void* callback_fct[100] = {};
static uint32_t callback_size;

#define GO(A)   \
static void* my_callback_##A(void* a, void *b, void *c, void *d, void *e, void *f, void *g, void *h) \
{                                                                                   \
    return (void*)RunFunction(my_context, (uintptr_t) callback_fct[A], 8, a, b, c, d, e, f, g, h);    \
}

GO(0)GO(1)GO(2)GO(3)GO(4)GO(5)GO(6)GO(7)GO(8)GO(9)GO(10)GO(11)GO(12)GO(13)GO(14)GO(15)GO(16)GO(17)GO(18)GO(19)GO(20)GO(21)GO(22)GO(23)GO(24)GO(25)GO(26)GO(27)GO(28)GO(29)GO(30)GO(31)GO(32)GO(33)GO(34)GO(35)GO(36)GO(37)GO(38)GO(39)GO(40)GO(41)GO(42)GO(43)GO(44)GO(45)GO(46)GO(47)GO(48)GO(49)GO(50)GO(51)GO(52)GO(53)GO(54)GO(55)GO(56)GO(57)GO(58)GO(59)GO(60)GO(61)GO(62)GO(63)GO(64)GO(65)GO(66)GO(67)GO(68)GO(69)GO(70)GO(71)GO(72)GO(73)GO(74)GO(75)GO(76)GO(77)GO(78)GO(79)GO(80)GO(81)GO(82)GO(83)GO(84)GO(85)GO(86)GO(87)GO(88)GO(89)GO(90)GO(91)GO(92)GO(93)GO(94)GO(95)GO(96)GO(97)GO(98)GO(99)

#undef GO

static void* callback_native[100] = {
(void*)my_callback_0,(void*)my_callback_1,(void*)my_callback_2,(void*)my_callback_3,(void*)my_callback_4,(void*)my_callback_5,(void*)my_callback_6,(void*)my_callback_7,(void*)my_callback_8,(void*)my_callback_9,(void*)my_callback_10,(void*)my_callback_11,(void*)my_callback_12,(void*)my_callback_13,(void*)my_callback_14,(void*)my_callback_15,(void*)my_callback_16,(void*)my_callback_17,(void*)my_callback_18,(void*)my_callback_19,(void*)my_callback_20,(void*)my_callback_21,(void*)my_callback_22,(void*)my_callback_23,(void*)my_callback_24,(void*)my_callback_25,(void*)my_callback_26,(void*)my_callback_27,(void*)my_callback_28,(void*)my_callback_29,(void*)my_callback_30,(void*)my_callback_31,(void*)my_callback_32,(void*)my_callback_33,(void*)my_callback_34,(void*)my_callback_35,(void*)my_callback_36,(void*)my_callback_37,(void*)my_callback_38,(void*)my_callback_39,(void*)my_callback_40,(void*)my_callback_41,(void*)my_callback_42,(void*)my_callback_43,(void*)my_callback_44,(void*)my_callback_45,(void*)my_callback_46,(void*)my_callback_47,(void*)my_callback_48,(void*)my_callback_49,(void*)my_callback_50,(void*)my_callback_51,(void*)my_callback_52,(void*)my_callback_53,(void*)my_callback_54,(void*)my_callback_55,(void*)my_callback_56,(void*)my_callback_57,(void*)my_callback_58,(void*)my_callback_59,(void*)my_callback_60,(void*)my_callback_61,(void*)my_callback_62,(void*)my_callback_63,(void*)my_callback_64,(void*)my_callback_65,(void*)my_callback_66,(void*)my_callback_67,(void*)my_callback_68,(void*)my_callback_69,(void*)my_callback_70,(void*)my_callback_71,(void*)my_callback_72,(void*)my_callback_73,(void*)my_callback_74,(void*)my_callback_75,(void*)my_callback_76,(void*)my_callback_77,(void*)my_callback_78,(void*)my_callback_79,(void*)my_callback_80,(void*)my_callback_81,(void*)my_callback_82,(void*)my_callback_83,(void*)my_callback_84,(void*)my_callback_85,(void*)my_callback_86,(void*)my_callback_87,(void*)my_callback_88,(void*)my_callback_89,(void*)my_callback_90,(void*)my_callback_91,(void*)my_callback_92,(void*)my_callback_93,(void*)my_callback_94,(void*)my_callback_95,(void*)my_callback_96,(void*)my_callback_97,(void*)my_callback_98,(void*)my_callback_99
};

EXPORT int my_wl_proxy_add_listener(x64emu_t *emu, struct wl_proxy *proxy, void (**implementation)(void), void *data, size_t impl_size)
{
    // not thread safe,
    fprintf(stderr, "my_wl_proxy_add_listener %p %ld %d\n", implementation, impl_size, callback_size);

    uint32_t offset;
    for (offset = 0; offset < callback_size; offset += sizeof(void*)) {
        if (memcmp((void*) callback_fct + offset, implementation, impl_size) == 0)
            break;
    }
    if (offset == callback_size) {
        if (callback_size + impl_size > sizeof(callback_fct)) {
            fprintf(stderr, "BOX64 fail: no more space for listener callback thunks\n");
            return -1;
        }
        memcpy((void*) callback_fct + callback_size, implementation, impl_size);
        callback_size += impl_size;
    }

    implementation = (void*) callback_native + offset;

    return my->wl_proxy_add_listener(proxy, implementation, data, impl_size);
}

#define CUSTOM_INIT \
    getMy(lib);

#define CUSTOM_FINI \
    freeMy();

#include "wrappedlib_init.h"
