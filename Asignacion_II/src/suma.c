#include <stdio.h>
#include "suma.h"

int main() {
    int number_list[] = {0, 2, 3, 13, 30};

    printf("%i", sum_array(number_list, sizeof(number_list)/(sizeof(number_list[0]))));

    return 0;
}