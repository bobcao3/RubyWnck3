#include "rbWnck3private.h"

#define RG_TARGET_NAMESPACE mWnck

void Init_Wnck3(void);

void
Init_Wnck3(void)
{
    VALUE RG_TARGET_NAMESPACE;

    RG_TARGET_NAMESPACE = rb_define_module("Wnck3");

    rb_define_const(RG_TARGET_NAMESPACE, "BUILD_VERSION",
                    rb_ary_new3(3,0,1,0));

    Init_Wnck_Tasklist(RG_TARGET_NAMESPACE);
    Init_Wnck_Screen(RG_TARGET_NAMESPACE);
    Init_Wnck_Pager(RG_TARGET_NAMESPACE);
}
