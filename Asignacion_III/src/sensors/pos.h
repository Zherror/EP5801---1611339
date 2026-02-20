#ifndef POS_H
#define POS_H

#include <stdint.h>
#include "sensors.h"

typedef struct S_POS {
    uint8_t ID;
    uint16_t x;
    uint16_t y;
    uint16_t z;
} s_pos;


impresion p_pos(uint8_t * i_pos);

#endif