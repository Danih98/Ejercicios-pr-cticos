#include <stdio.h>

int main() {

    for (int i = 0; i <= 10; i++) {
        if (i == 5) {
            break; // Salir del bucle cuando i sea igual a 5
        }
        printf("1º bucle: %d\n", i);
    }

    printf("\n");

    for (int i = 0; i <= 5; i++) {
        if (i == 3) {
            continue; // Saltar la iteración cuando i sea igual a 3
        }
        printf("2º bucle: %d\n", i);
    }

    printf("\n");

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            printf("i = %d, j = %d\n", i, j);
            if (i == 2 && j == 2) {
                printf("Se encontró i = 2 y j = 2. Saliendo del bucle interno.\n");
                break; // Sale del bucle más interno
            }
        }
        printf("Final del bucle externo\n");
    }

}

