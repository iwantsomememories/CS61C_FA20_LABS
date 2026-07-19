#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"

void lfsr_calculate(uint16_t *reg) {
    uint16_t new_bit = (*reg ^ (*reg >> 2) ^ (*reg >> 3) ^ (*reg >> 5)) & 1u;

    *reg = (*reg >> 1) | (new_bit << 15);
}

