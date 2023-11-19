#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef uint8_t uint8x16_t __attribute__ ((vector_size(16)));
typedef uint8_t uint8x4_t __attribute__ ((vector_size(4)));

static inline uint8x16_t uint8x16_load(void *ptr)
{
    return *(uint8x16_t*)ptr;
}

static inline void uint8x16_store(void *ptr, uint8x16_t value)
{
    *(uint8x16_t*)ptr = value;
}

static inline uint8x4_t uint8x4_load(void *ptr)
{
    return *(uint8x4_t*)ptr;
}

static inline void uint8x4_store(void *ptr, uint8x4_t value)
{
    *(uint8x4_t*)ptr = value;
}

#ifdef __cplusplus
} // extern "C"
#endif
