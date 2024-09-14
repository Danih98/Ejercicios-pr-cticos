#include <stdio.h>

int main() {
    int numero = 10; // Declarar una variable entera
    int *puntero;   // Declarar un puntero a entero

    puntero = &numero; // Asignar la dirección de memoria de 'numero' al puntero

    printf("El dirección de memoria de 'numero' es: %p\n", &numero);
    printf("El dirección de memoria de 'numero' es: %p\n", puntero);
    printf("El dirección de memoria de 'numero' es: %p\n", &puntero);
    printf("El valor de 'numero' es: %d\n", numero);

    // Modificar el valor de 'numero' a través del puntero
    *puntero = 20;

    printf("Después de modificarlo, el valor de 'numero' es: %d\n", numero);

    return 0;
}