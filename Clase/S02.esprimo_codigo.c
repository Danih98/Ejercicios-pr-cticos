#include <stdio.h>

int main() {
    int numero;
    printf("Ingrese un número: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        printf("No es primo");
    } else {
        int esPrimo = 1; // Suponemos que el número es primo por defecto
        for (int i = 2; i < numero; i++) {
            if (numero % i == 0) {
                esPrimo = 0; // Si es divisible por algún número distinto de 1 y sí mismo, no es primo
                break;
            }
        }

        if (esPrimo) {
            printf("Es primo");
        } else {
            printf("No es primo");
        }
    }
    return 0;
}
