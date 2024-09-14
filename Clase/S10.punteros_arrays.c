#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int *ptr = array; // El puntero apunta al primer elemento del array

    // Imprimir el contenido del array utilizando el puntero
    printf("Contenido del array usando puntero:\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    // Modificar el contenido del array a través del puntero
    for (int i = 0; i < 5; ++i) {
        *(ptr + i) *= 2;
    }

    // Imprimir el contenido del array después de la modificación
    printf("Contenido del array después de la modificación:\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
