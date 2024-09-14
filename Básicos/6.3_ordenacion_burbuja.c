#include <stdio.h>

void ordenacionBurbuja(int arreglo[], int longitud) {
    for (int i = 0; i < longitud - 1; i++) {
        for (int j = 0; j < longitud - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                int temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arreglo[] = {64, 34, 25, 12, 22, 11, 90};
    int longitud = sizeof(arreglo) / sizeof(arreglo[0]);

    printf("Arreglo original:\n");
    for (int i = 0; i < longitud; i++) {
        printf("%d ", arreglo[i]);
    }

    ordenacionBurbuja(arreglo, longitud);

    printf("\nArreglo ordenado:\n");
    for (int i = 0; i < longitud; i++) {
        printf("%d ", arreglo[i]);
    }

    return 0;
}
