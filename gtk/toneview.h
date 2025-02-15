#ifndef MYON_FMPLAYER_GTK_TONEVIEW_H_INCLUDED
#define MYON_FMPLAYER_GTK_TONEVIEW_H_INCLUDED

#include "tonedata/tonedata.h"
#if !defined(FMPLAYER_THREADUNSAFE)
#include "common/stdatomic.h"
#endif
extern struct toneview_g {
  struct fmplayer_tonedata tonedata;
#if !defined(FMPLAYER_THREADUNSAFE)
  atomic_flag flag;
#endif
} toneview_g;

void show_toneview(void);

#endif // MYON_FMPLAYER_GTK_TONEVIEW_H_INCLUDED
