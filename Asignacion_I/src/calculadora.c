#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int eoa = 1;
int mde = 0;
char op;
char fin = 'n';
float t1;
float t2;
float r;


void encabezado () {
    printf("===============================================================\n");
    printf("=             La Calculadora (Edición bajo costo)             =\n");
    printf("===============================================================\n");
    
    printf("\nEste programa te permite realizar operaciones matemáticas no\navanzadas desde terminal. Primero ingrese el operador de la\noperación que desea realizar (+, -, *, /) y luego proceda a\ncolocar el primer termino y segundo termino de la operación.\n\n");
    
    if (mde) {
       printf("No es un operador válido, vuelva a intentarlo.\n\n");
       mde = 0; 
    }

}

int main () {
    while (eoa) {
        system("clear");

        encabezado();

        printf("Ingrese operador: ");
        scanf(" %c", &op);
        if (!(op == '+' || op == '-' || op == '*' || op == '/')) {
            mde = 1;
            continue;
        }

        printf("\nIngrese primer termino: ");
        scanf("%f", &t1);

        printf("\nIngrese segundo termino: ");
        scanf("%f", &t2);

        switch (op) {
            case '+':
                r = t1 + t2;
                break;
            case '-':
                r = t1 - t2;
                break;
            case '*':
                r = t1 * t2;
                break;
            case '/':
                r = t1 / t2;
                break;
            default:
                break;
        }

        printf("\n%.2f %c %.2f = %.2f", t1, op, t2, r);

        printf("\n\n¿Desea realizar otra operación? [y/n]: ");
        scanf(" %c", &fin);
        
        if (fin == 'y') {
            eoa = 1;
        } else {
            eoa = 0;
        }  
    }
    
    system("clear");

    return 0;
}
