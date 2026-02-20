#include <stddef.h>
#include <stdio.h>
#include "sensors/sensors.h"
#include "sensors/pos.h"
#include "sensors/gest.h"

/*uint8_t data_ajustador(uint8_t* data) {
    int size = sizeof(data)/sizeof(uint8_t);
    uint8_t data_n[size + 1]; 

    data_n[0] = data;
    data_n[1] = 0x00;

    for(int i = 2; i < size; i++) {
        data_n[i] = data+(i-1);
    }

    return data_n;
}*/

int main() {
    uint8_t data[] = {
        0x01,
        0x01, 0x20,
        0x02, 0x02,
        0x00, 0x30
    };

    impresion func;

    switch(data[0]) {
        case POS:;
            uint8_t data_n[8]; 

            data_n[0] = data[0];
            data_n[1] = 0x00;

            for(int i = 2; i < 8; i++) {
                data_n[i] = data[i-1];
            }

            func = p_pos(data_n);
            break;
        case GEST:
            func = p_gest(data);
            break;
        default:
            return -1;
    }

    if (func != NULL) {
        func();
    }

    return 0;
}