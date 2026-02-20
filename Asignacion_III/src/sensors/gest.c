#include <stdio.h>
#include "gest.h"

s_gest* input_g;

void print_gest_tap(){
    printf("Se detecto un tap.\n");
}

void print_gest_double_tap(){
    printf("Se detecto un double tap.\n");
}

void print_gest_haptic_press(){
    printf("Se detecto un haptic press.\n");
}

impresion p_gest(uint8_t* i_gest){
    input_g = (s_gest*) i_gest;
    
    if (input_g->tap) {
        return print_gest_tap;
    }

    if (input_g->double_tap) {
        return print_gest_double_tap;
    }

    if (input_g->haptic_press) {
        return print_gest_haptic_press;
    }

    return (impresion) NULL;
}