#include <stdio.h>
#include "pos.h"

s_pos* input_p;

void print_pos(){
    printf("x: %u, y: %u z: %u\n", input_p->x, input_p->y, input_p->z);
}

impresion p_pos(uint8_t* i_pos){
    input_p = (s_pos*) i_pos;
    
    return print_pos;
}