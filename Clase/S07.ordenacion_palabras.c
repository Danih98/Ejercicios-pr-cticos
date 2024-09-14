#include <stdio.h>
#include <string.h>

#define MAX_PALABRAS 10
#define MAX_LONGITUD 20

void intercambiar(char *a, char *b) {
    char temp[MAX_LONGITUD];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

void ordenarBurbuja(char palabras[MAX_PALABRAS][MAX_LONGITUD], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(palabras[j], palabras[j + 1]) > 0) {
                intercambiar(palabras[j], palabras[j + 1]);
            }
        }
    }
}

int main() {
    char listaPalabras[MAX_PALABRAS][MAX_LONGITUD] = {
            "perro", "gato", "casa", "coche", "sol",
            "luna", "agua", "fuego", "tierra", "aire"
    };

    // Mostrar la lista de palabras antes de ordenar
    printf("Lista de palabras antes de ordenar:\n");
    for (int i = 0; i < MAX_PALABRAS; i++) {
        printf("%s\n", listaPalabras[i]);
    }

    // Aplicar el algoritmo de ordenación burbuja
    ordenarBurbuja(listaPalabras, MAX_PALABRAS);

    // Mostrar la lista de palabras después de ordenar
    printf("\nLista de palabras después de ordenar:\n");
    for (int i = 0; i < MAX_PALABRAS; i++) {
        printf("%s\n", listaPalabras[i]);
    }

    return 0;
}