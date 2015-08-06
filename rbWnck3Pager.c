#include "rbWnck3private.h"

#define RG_TARGET_NAMESPACE cPager
#define _SELF(s) (RVAL2GTKWIDGET(s))

static ID id_new, id_call;

static VALUE
rg_initialize(VALUE self)
{
    RBGTK_INITIALIZE(self, wnck_pager_new());
    return Qnil;
}

void
Init_Wnck_Pager(VALUE mWnck)
{
    VALUE RG_TARGET_NAMESPACE;

    id_new = rb_intern("new");
    id_call = rb_intern("call");

    RG_TARGET_NAMESPACE = G_DEF_CLASS(WNCK_TYPE_PAGER, "Pager", mWnck);

    RG_DEF_METHOD(initialize, 1);
}
