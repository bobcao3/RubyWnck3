#ifndef __RBWNCK3H__
#define __RBWNCK3H__

#define RVAL2WNCKTASKLIST(o)	(WNCK_TASKLIST(RVAL2GOBJ(o)))

#define WNCK_I_KNOW_THIS_IS_UNSTABLE

#include <libwnck/libwnck.h>

#include <ruby.h>
#include <rbgtk3.h>

G_GNUC_INTERNAL void Init_Wnck_Tasklist(VALUE mWnck);
G_GNUC_INTERNAL void Init_Wnck_Screen(VALUE mWnck);
G_GNUC_INTERNAL void Init_Wnck_Pager(VALUE mWnck);

#endif
