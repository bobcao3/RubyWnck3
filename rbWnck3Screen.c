#include "rbWnck3private.h"

#define RG_TARGET_NAMESPACE cScreen
#define _SELF(s) (RVAL2WNCKSCREEN(s))

static ID id_new, id_call;

static VALUE
rg_s_get_default (void)
{
	return GOBJ2RVAL (wnck_screen_get_default ());
}

void
Init_Wnck_Screen(VALUE mWnck)
{
    VALUE RG_TARGET_NAMESPACE;

    id_new = rb_intern("new");
    id_call = rb_intern("call");

    RG_TARGET_NAMESPACE = G_DEF_CLASS(WNCK_TYPE_SCREEN, "Screen", mWnck);

    RG_DEF_SMETHOD(get_default, 0);
}
