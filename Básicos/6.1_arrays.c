#include <stdio.h>

int main() {
    // Declarar un array de números con decimales
    float valores[10];

    // Asignar valores
    valores[0] = 22.33;
    valores[1] = 22.34;
    valores[2] = 23.45;
    valores[3] = 25.33;
    valores[4] = 27.34;
    valores[5] = 29.22;
    valores[6] = 35.34;
    valores[7] = 37.58;
    valores[8] = 45.12;
    valores[9] = 50.34;

    printf("Valor en la posición 8: %.2f\n", valores[8]);

    // Imprimir los valores del array
    printf("Valores del array:\n");
    for (int i = 0; i < 10; i++) {
        printf("Posición: %d: %.2f \n",i, valores[i]);
    }

    return 0;
}
