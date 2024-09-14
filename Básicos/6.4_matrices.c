#include <stdio.h>

int main() {
    // Declarar las dimensiones de la matriz
    int filas = 3;
    int columnas = 4;

    // Inicializar la matriz
    int matriz[filas][columnas];

    // Llenar la matriz con números secuenciales
    int numero = 1;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = numero;
            numero++;
        }
    }

    // Recorrer y mostrar la matriz
    printf("Matriz:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

