#ifndef MYON_FMPLAYER_GTK_OSCILLOVIEW_H_INCLUDED
#define MYON_FMPLAYER_GTK_OSCILLOVIEW_H_INCLUDED

#include "libopna/opna.h"
#include "oscillo/oscillo.h"
#if !defined(FMPLAYER_THREADUNSAFE)
#include "common/stdatomic.h"
#endif
extern struct oscilloview {
#if !defined(FMPLAYER_THREADUNSAFE)
  atomic_flag flag;
#endif
  struct oscillodata oscillodata[LIBOPNA_OSCILLO_TRACK_COUNT];
} oscilloview_g;

void show_oscilloview(void);

#endif // MYON_FMPLAYER_GTK_OSCILLOVIEW_H_INCLUDED

