#ifndef GEST_H
#define GEST_H

#include <stdint.h>
#include "sensors.h"

typedef struct S_GEST {
    uint8_t ID;
    uint8_t tap: 1;
    uint8_t double_tap: 1;
    uint8_t haptic_press: 1;
    uint8_t reserve: 5;
} s_gest;


impresion p_gest(uint8_t * i_gest);

#endif