#include "rbWnck3private.h"

#define RG_TARGET_NAMESPACE cTasklist
#define _SELF(s) (RVAL2WNCKTASKLIST(s))

static ID id_new, id_call;

static VALUE
rg_initialize(VALUE self)
{
    RBGTK_INITIALIZE(self, wnck_tasklist_new());
    return Qnil;
}

static VALUE
rg_set_include_all_workspaces (VALUE self, VALUE b)
{
	wnck_tasklist_set_include_all_workspaces (_SELF(self), RVAL2CBOOL(b));
	return self;
}

void
Init_Wnck_Tasklist(VALUE mWnck)
{
    VALUE RG_TARGET_NAMESPACE;

    id_new = rb_intern("new");
    id_call = rb_intern("call");

    RG_TARGET_NAMESPACE = G_DEF_CLASS(WNCK_TYPE_TASKLIST, "Tasklist", mWnck);

    RG_DEF_METHOD(initialize, 0);
    
    RG_DEF_METHOD(set_include_all_workspaces, 1);
}
