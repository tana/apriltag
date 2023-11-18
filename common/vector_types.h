#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef uint8_t uint8x16_t __attribute__ ((vector_size(16)));

inline uint8x16_t uint8x16_load(void *ptr)
{
    return *(uint8x16_t*)ptr;
}

inline void uint8x16_store(void *ptr, uint8x16_t value)
{
    *(uint8x16_t*)ptr = value;
}

#ifdef __cplusplus
} // extern "C"
#endif
