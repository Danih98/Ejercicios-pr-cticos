#include <stdio.h>
#define LONGITUD 5

int main() {
    // Declarar un array de números enteros
    int arreglo[] = {10, 22, 34, 15, 18, 42};

    // Valor que deseamos buscar
    int valorBuscado = 22;

    // Variable para almacenar la posición del valor encontrado (si se encuentra)
    int posicion = -1;

    // Búsqueda lineal
    for (int i = 0; i < LONGITUD; i++) {
        if (arreglo[i] == valorBuscado) {
            posicion = i; // Guardamos la posición
            break; // Terminamos la búsqueda cuando se encuentra el valor
        }
    }

    // Mostrar el resultado
    if (posicion != -1) {
        printf("Valor %d encontrado en la posición %d.\n", valorBuscado, posicion);
    } else {
        printf("El valor %d no se encontró en el arreglo.\n", valorBuscado);
    }

    return 0;
}