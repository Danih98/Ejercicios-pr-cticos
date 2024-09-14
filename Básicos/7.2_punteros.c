#include <stdio.h>

int main() {
    int variable = 10;
    int *ptr = &variable; //Importante & !!!!!

    printf("Valor de la variable: %d\n", variable);
    printf("Valor de la variable a través del puntero: %d\n", *ptr);
    printf("Dirección de memoria de la variable a través del puntero: %p\n", ptr);
    printf("Dirección del puntero: %p\n", &ptr);
    return 0;
}
