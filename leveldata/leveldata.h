#ifndef MYON_LEVELDATA_H_INCLUDED
#define MYON_LEVELDATA_H_INCLUDED

#if !defined(FMPLAYER_THREADUNSAFE)
	#include "common/stdatomic.h"
#endif
struct leveldata {
#if !defined(FMPLAYER_THREADUNSAFE)
  atomic_flag flag;
#endif
  unsigned level;
  bool read;
};

static inline unsigned leveldata_read(struct leveldata *data) {
#if !defined(FMPLAYER_THREADUNSAFE)
  while (atomic_flag_test_and_set_explicit(&data->flag, memory_order_acquire));
#endif
  unsigned level = data->level;
  data->read = true;
#if !defined(FMPLAYER_THREADUNSAFE)
  atomic_flag_clear_explicit(&data->flag, memory_order_release);
#endif
  return level;
}

static inline void leveldata_update(struct leveldata *data, unsigned level) {
#if !defined(FMPLAYER_THREADUNSAFE)
  while (atomic_flag_test_and_set_explicit(&data->flag, memory_order_acquire));
#endif
  if (data->read || (level > data->level)) data->level = level;
  data->read = false;
#if !defined(FMPLAYER_THREADUNSAFE)
  atomic_flag_clear_explicit(&data->flag, memory_order_release);
#endif
}

static inline void leveldata_init(struct leveldata *data) {
	data->level = 0; data->read = false;
	/* == *data = (struct leveldata) {0}; */
#if !defined(FMPLAYER_THREADUNSAFE)
  atomic_flag_clear_explicit(&data->flag, memory_order_relaxed);
#endif
}

#endif // MYON_LEVELDATA_H_INCLUDED
