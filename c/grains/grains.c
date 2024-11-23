#include "grains.h"

uint64_t square(uint8_t index)
{
    return (index < 1 || index > 64) ? 0 : UINT64_C(1) << (index -1);
}

uint64_t total(void)
{
    return UINT64_MAX;
}