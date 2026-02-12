#include <stdio.h>
#include "imprimir.h"

int main() {
    char texto[] = "Los paralelepipedos, son pipedos paralelos.\n";

    imprimir(texto, sizeof(texto)); //Utilizo solo sizeof sobre el arreglo, debido a que el tamaño de los caracteres es 1, por lo que el tamaño del arreglo es el mismo que la cantidad de caracteres que posee.

    return 0;
}