/*
 * C11 <stdatomic.h> emulation header for MSVC 2019
 *
 * PLEASE LICENSE, (C) 2022, Michael Clark <michaeljclark@mac.com>
 *
 * All rights to this work are granted for all purposes, with exception of
 * author's implied right of copyright to defend the free use of this work.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#pragma once

#if defined _MSC_VER
#include <intrin.h>
#include <stddef.h>
#include <stdint.h>
#else
#include_next <stdatomic.h>
#endif

/*
 * C11 <stdatomic.h> emulation for MSVC 2019
 *
 * This header avoids C11 _Generic to ensure compatibility with MSVC 2019.
 * Requires MSVC flags: "/O2 /TC /volatile:iso".
 */

#if defined _MSC_VER

#define __concat2(x,y) x ## y
#define __concat3(x,y,z) x ## y ## z

#if UINTPTR_MAX == 0xFFFFFFFFFFFFFFFFull
#define __intptr __int64
#define __ptr i64
#elif UINTPTR_MAX == 0xFFFFFFFFu
#define __intptr __int32
#define __ptr i32
#else
#error unable to determine pointer width
#endif

/*
 * Constant macros and enumerations
 */
#define _Atomic volatile

#define ATOMIC_BOOL_LOCK_FREE 1
#define ATOMIC_CHAR_LOCK_FREE 1
#define ATOMIC_SHORT_LOCK_FREE 1
#define ATOMIC_INT_LOCK_FREE 1
#define ATOMIC_LONG_LOCK_FREE 1
#define ATOMIC_LLONG_LOCK_FREE 1
#define ATOMIC_POINTER_LOCK_FREE 1

#define ATOMIC_FLAG_INIT { 0 }

#define __ATOMIC_RELAXED 0
#define __ATOMIC_CONSUME 1
#define __ATOMIC_ACQUIRE 2
#define __ATOMIC_RELEASE 3
#define __ATOMIC_ACQ_REL 4
#define __ATOMIC_SEQ_CST 5

typedef enum memory_order {
	memory_order_relaxed = __ATOMIC_RELAXED,
	memory_order_consume = __ATOMIC_CONSUME,
	memory_order_acquire = __ATOMIC_ACQUIRE,
	memory_order_release = __ATOMIC_RELEASE,
	memory_order_acq_rel = __ATOMIC_ACQ_REL,
	memory_order_seq_cst = __ATOMIC_SEQ_CST
} memory_order;

/*
 * Type definitions
 */
typedef long long llong;
typedef unsigned char uchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned long long ullong;

typedef _Atomic _Bool atomic_bool;
typedef _Atomic char atomic_char;
typedef _Atomic unsigned char atomic_uchar;
typedef _Atomic short atomic_short;
typedef _Atomic unsigned short atomic_ushort;
typedef _Atomic int atomic_int;
typedef _Atomic unsigned int atomic_uint;
typedef _Atomic long atomic_long;
typedef _Atomic unsigned long atomic_ulong;
typedef _Atomic long long atomic_llong;
typedef _Atomic unsigned long long atomic_ullong;
typedef _Atomic intptr_t atomic_intptr_t;
typedef _Atomic uintptr_t atomic_uintptr_t;
typedef _Atomic size_t atomic_size_t;
typedef _Atomic ptrdiff_t atomic_ptrdiff_t;
typedef _Atomic intmax_t atomic_intmax_t;
typedef _Atomic uintmax_t atomic_uintmax_t;
typedef void * _Atomic atomic_ptr;

typedef struct atomic_flag { atomic_bool _Value; } atomic_flag;

/*
 * Helper macro to cast to correct volatile type
 */
#define __ATOMIC_CAST(type, obj) ((volatile type *)obj)

/*
 * atomic_exchange
 */
static __int8  __msvc_xchg_i8(__int8 volatile *addr, __int8 val)
{
	__int8 result;
	result = _InterlockedExchange8(addr, val);
	return result;
}

static __int16 __msvc_xchg_i16(__int16 volatile *addr, __int16 val)
{
	__int16 result;
	result = _InterlockedExchange16(addr, val);
	return result;
}

static __int32 __msvc_xchg_i32(__int32 volatile *addr, __int32 val)
{
	__int32 result;
	result = _InterlockedExchange(addr, val);
	return result;
}

static __int64 __msvc_xchg_i64(__int64 volatile *addr, __int64 val)
{
	__int64 result;
	result = _InterlockedExchange64(addr, val);
	return result;
}

static __intptr __msvc_xchg_ptr(__intptr volatile *addr, __intptr val)
{
	__intptr result;
#if UINTPTR_MAX == 0xFFFFFFFFFFFFFFFFull
	result = _InterlockedExchange64(addr, val);
#else
	result = _InterlockedExchange(addr, val);
#endif
	return result;
}

#define atomic_exchange(obj, desired) ( \
	(void)0, \
	sizeof(*(obj)) == sizeof(char) ? (char)__msvc_xchg_i8(__ATOMIC_CAST(__int8, obj), (__int8)(desired)) : \
	sizeof(*(obj)) == sizeof(short) ? (short)__msvc_xchg_i16(__ATOMIC_CAST(__int16, obj), (__int16)(desired)) : \
	sizeof(*(obj)) == sizeof(int) ? (int)__msvc_xchg_i32(__ATOMIC_CAST(__int32, obj), (__int32)(desired)) : \
	sizeof(*(obj)) == sizeof(long long) ? (llong)__msvc_xchg_i64(__ATOMIC_CAST(__int64, obj), (__int64)(desired)) : \
	sizeof(*(obj)) == sizeof(void*) ? (void*)__msvc_xchg_ptr(__ATOMIC_CAST(__intptr, obj), (__intptr)(desired)) : \
	(void)0)

#define atomic_store(obj, desired) atomic_exchange(obj, desired)
#define atomic_exchange_explicit(obj, desired, mo) atomic_exchange(obj, desired)
#define atomic_store_explicit(obj, desired, mo) atomic_exchange(obj, desired)

/*
 * atomic_compare_exchange
 */
static __int8  __msvc_cmpxchg_i8(__int8 volatile *addr, __int8 oldval, __int8 newval)
{
	__int8 result;
	result = _InterlockedCompareExchange8(addr, newval, oldval);
	return result;
}

static __int16 __msvc_cmpxchg_i16(__int16 volatile *addr, __int16 oldval, __int16 newval)
{
	__int16 result;
	result = _InterlockedCompareExchange16(addr, newval, oldval);
	return result;
}

static __int32 __msvc_cmpxchg_i32(__int32 volatile *addr, __int32 oldval, __int32 newval)
{
	__int32 result;
	result = _InterlockedCompareExchange(addr, newval, oldval);
	return result;
}

static __int64 __msvc_cmpxchg_i64(__int64 volatile *addr, __int64 oldval, __int64 newval)
{
	__int64 result;
	result = _InterlockedCompareExchange64(addr, newval, oldval);
	return result;
}

static __intptr __msvc_cmpxchg_ptr(__intptr volatile *addr, __intptr oldval, __intptr newval)
{
	__intptr result;
#if UINTPTR_MAX == 0xFFFFFFFFFFFFFFFFull
	result = _InterlockedCompareExchange64(addr, newval, oldval);
#else
	result = _InterlockedCompareExchange(addr, newval, oldval);
#endif
	return result;
}

#define atomic_compare_exchange_strong(obj, expected, desired) ( \
	(void)0, \
	sizeof(*(obj)) == sizeof(char) ? ( \
		*__ATOMIC_CAST(char, expected) = (char)__msvc_cmpxchg_i8(__ATOMIC_CAST(__int8, obj), *(__ATOMIC_CAST(__int8, expected)), (__int8)(desired)), \
		*(__ATOMIC_CAST(__int8, expected)) == __msvc_cmpxchg_i8(__ATOMIC_CAST(__int8, obj), *(__ATOMIC_CAST(__int8, expected)), (__int8)(desired)) \
	) : \
	sizeof(*(obj)) == sizeof(short) ? ( \
		*__ATOMIC_CAST(short, expected) = (short)__msvc_cmpxchg_i16(__ATOMIC_CAST(__int16, obj), *(__ATOMIC_CAST(__int16, expected)), (__int16)(desired)), \
		*(__ATOMIC_CAST(__int16, expected)) == __msvc_cmpxchg_i16(__ATOMIC_CAST(__int16, obj), *(__ATOMIC_CAST(__int16, expected)), (__int16)(desired)) \
	) : \
	sizeof(*(obj)) == sizeof(int) ? ( \
		*__ATOMIC_CAST(int, expected) = (int)__msvc_cmpxchg_i32(__ATOMIC_CAST(__int32, obj), *(__ATOMIC_CAST(__int32, expected)), (__int32)(desired)), \
		*(__ATOMIC_CAST(__int32, expected)) == __msvc_cmpxchg_i32(__ATOMIC_CAST(__int32, obj), *(__ATOMIC_CAST(__int32, expected)), (__int32)(desired)) \
	) : \
	sizeof(*(obj)) == sizeof(long long) ? ( \
		*__ATOMIC_CAST(llong, expected) = (llong)__msvc_cmpxchg_i64(__ATOMIC_CAST(__int64, obj), *(__ATOMIC_CAST(__int64, expected)), (__int64)(desired)), \
		*(__ATOMIC_CAST(__int64, expected)) == __msvc_cmpxchg_i64(__ATOMIC_CAST(__int64, obj), *(__ATOMIC_CAST(__int64, expected)), (__int64)(desired)) \
	) : \
	sizeof(*(obj)) == sizeof(void*) ? ( \
		*__ATOMIC_CAST(__intptr, expected) = __msvc_cmpxchg_ptr(__ATOMIC_CAST(__intptr, obj), *(__ATOMIC_CAST(__intptr, expected)), (__intptr)(desired)), \
		*(__ATOMIC_CAST(__intptr, expected)) == __msvc_cmpxchg_ptr(__ATOMIC_CAST(__intptr, obj), *(__ATOMIC_CAST(__intptr, expected)), (__intptr)(desired)) \
	) : \
	(_Bool)0)

#define atomic_compare_exchange_weak(obj, expected, desired) atomic_compare_exchange_strong(obj, expected, desired)
#define atomic_compare_exchange_strong_explicit(obj, expected, desired, smo, fmo) atomic_compare_exchange_strong(obj, expected, desired)
#define atomic_compare_exchange_weak_explicit(obj, expected, desired, smo, fmo) atomic_compare_exchange_strong(obj, expected, desired)

/*
 * atomic_fetch_add
 */
static __int8  __msvc_xadd_i8(__int8 volatile *addr, __int8 val)
{
	__int8 result;
	result = _InterlockedExchangeAdd8(addr, val);
	return result;
}

static __int16 __msvc_xadd_i16(__int16 volatile *addr, __int16 val)
{
	__int16 result;
	result = _InterlockedExchangeAdd16(addr, val);
	return result;
}

static __int32 __msvc_xadd_i32(__int32 volatile *addr, __int32 val)
{
	__int32 result;
	result = _InterlockedExchangeAdd(addr, val);
	return result;
}

static __int64 __msvc_xadd_i64(__int64 volatile *addr, __int64 val)
{
	__int64 result;
	result = _InterlockedExchangeAdd64(addr, val);
	return result;
}

static __intptr __msvc_xadd_ptr(__intptr volatile *addr, __intptr val)
{
	__intptr result;
#if UINTPTR_MAX == 0xFFFFFFFFFFFFFFFFull
	result = _InterlockedExchangeAdd64(addr, val);
#else
	result = _InterlockedExchangeAdd(addr, val);
#endif
	return result;
}

#define atomic_fetch_add(obj, arg) ( \
	(void)0, \
	sizeof(*(obj)) == sizeof(char) ? (char)__msvc_xadd_i8(__ATOMIC_CAST(__int8, obj), (__int8)(arg)) : \
	sizeof(*(obj)) == sizeof(short) ? (short)__msvc_xadd_i16(__ATOMIC_CAST(__int16, obj), (__int16)(arg)) : \
	sizeof(*(obj)) == sizeof(int) ? (int)__msvc_xadd_i32(__ATOMIC_CAST(__int32, obj), (__int32)(arg)) : \
	sizeof(*(obj)) == sizeof(long long) ? (llong)__msvc_xadd_i64(__ATOMIC_CAST(__int64, obj), (__int64)(arg)) : \
	sizeof(*(obj)) == sizeof(void*) ? (void*)__msvc_xadd_ptr(__ATOMIC_CAST(__intptr, obj), (__intptr)(arg)) : \
	(void)0)

#define atomic_fetch_sub(obj, arg) atomic_fetch_add(obj, -(arg))
#define atomic_fetch_add_explicit(obj, arg, mo) atomic_fetch_add(obj, arg)
#define atomic_fetch_sub_explicit(obj, arg, mo) atomic_fetch_add(obj, -(arg))

/*
 * atomic_load
 */
#define atomic_load(obj) ( \
	(void)0, \
	_ReadBarrier(), \
	sizeof(*(obj)) == sizeof(char) ? *(__ATOMIC_CAST(char, obj)) : \
	sizeof(*(obj)) == sizeof(short) ? *(__ATOMIC_CAST(short, obj)) : \
	sizeof(*(obj)) == sizeof(int) ? *(__ATOMIC_CAST(int, obj)) : \
	sizeof(*(obj)) == sizeof(long long) ? *(__ATOMIC_CAST(llong, obj)) : \
	sizeof(*(obj)) == sizeof(void*) ? *(__ATOMIC_CAST(void*, obj)) : \
	(void)0, \
	_ReadWriteBarrier(), \
	*(obj))

#define atomic_load_explicit(obj, mo) atomic_load(obj)

/*
 * atomic_fetch_and/or/xor using compare-exchange loop
 */
#define __ATOMIC_FETCH_OP(type, obj, arg, op) \
{ \
	type oldval, newval; \
	oldval = atomic_load(obj); \
	newval = oldval op (arg); \
	while (!atomic_compare_exchange_strong(obj, &oldval, newval)) \
		newval = oldval op (arg); \
	return oldval; \
}

#define atomic_fetch_and(obj, arg) ( \
	(void)0, \
	sizeof(*(obj)) == sizeof(char) ? __ATOMIC_FETCH_OP(char, obj, arg, &) : \
	sizeof(*(obj)) == sizeof(short) ? __ATOMIC_FETCH_OP(short, obj, arg, &) : \
	sizeof(*(obj)) == sizeof(int) ? __ATOMIC_FETCH_OP(int, obj, arg, &) : \
	sizeof(*(obj)) == sizeof(long long) ? __ATOMIC_FETCH_OP(llong, obj, arg, &) : \
	sizeof(*(obj)) == sizeof(void*) ? __ATOMIC_FETCH_OP(__intptr, obj, (__intptr)(arg), &) : \
	(void)0)

#define atomic_fetch_or(obj, arg) ( \
	(void)0, \
	sizeof(*(obj)) == sizeof(char) ? __ATOMIC_FETCH_OP(char, obj, arg, |) : \
	sizeof(*(obj)) == sizeof(short) ? __ATOMIC_FETCH_OP(short, obj, arg, |) : \
	sizeof(*(obj)) == sizeof(int) ? __ATOMIC_FETCH_OP(int, obj, arg, |) : \
	sizeof(*(obj)) == sizeof(long long) ? __ATOMIC_FETCH_OP(llong, obj, arg, |) : \
	sizeof(*(obj)) == sizeof(void*) ? __ATOMIC_FETCH_OP(__intptr, obj, (__intptr)(arg), |) : \
	(void)0)

#define atomic_fetch_xor(obj, arg) ( \
	(void)0, \
	sizeof(*(obj)) == sizeof(char) ? __ATOMIC_FETCH_OP(char, obj, arg, ^) : \
	sizeof(*(obj)) == sizeof(short) ? __ATOMIC_FETCH_OP(short, obj, arg, ^) : \
	sizeof(*(obj)) == sizeof(int) ? __ATOMIC_FETCH_OP(int, obj, arg, ^) : \
	sizeof(*(obj)) == sizeof(long long) ? __ATOMIC_FETCH_OP(llong, obj, arg, ^) : \
	sizeof(*(obj)) == sizeof(void*) ? __ATOMIC_FETCH_OP(__intptr, obj, (__intptr)(arg), ^) : \
	(void)0)

#define atomic_fetch_and_explicit(obj, arg, mo) atomic_fetch_and(obj, arg)
#define atomic_fetch_or_explicit(obj, arg, mo) atomic_fetch_or(obj, arg)
#define atomic_fetch_xor_explicit(obj, arg, mo) atomic_fetch_xor(obj, arg)

/*
 * atomic_flag_test_and_set, atomic_flag_clear
 */
static _Bool atomic_flag_test_and_set(volatile atomic_flag *obj)
{
	char o;
	o = 0;
	if (atomic_compare_exchange_strong((atomic_char*)&obj->_Value, &o, 1))
		return 0;
	return 1;
}

static void atomic_flag_clear(volatile atomic_flag *obj)
{
	atomic_store((atomic_char*)&obj->_Value, 0);
}

#define atomic_flag_test_and_set_explicit(obj, mo) atomic_flag_test_and_set(obj)
#define atomic_flag_clear_explicit(obj, mo) atomic_flag_clear(obj)

/*
 * atomic_thread_fence, atomic_signal_fence
 */
static void __c11_atomic_thread_fence(memory_order mo)
{
	atomic_int v;
	atomic_exchange(&v, 0);
}

static void __c11_atomic_signal_fence(memory_order mo)
{
	_ReadWriteBarrier();
}

#define atomic_thread_fence(mo) __c11_atomic_thread_fence(mo)
#define atomic_signal_fence(mo) __c11_atomic_signal_fence(mo)

/*
 * atomic_is_lock_free
 */
#define atomic_is_lock_free(obj) ( \
	(void)0, \
	sizeof(*(obj)) == sizeof(char) || \
	sizeof(*(obj)) == sizeof(short) || \
	sizeof(*(obj)) == sizeof(int) || \
	sizeof(*(obj)) == sizeof(long long) || \
	sizeof(*(obj)) == sizeof(void*) ? 1 : 0)

#define atomic_init(x, y)

#endif