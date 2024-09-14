#include <stdio.h>
#include <string.h>

int main() {
    char cadena1[100] = "Hola, "; // Declara una cadena de caracteres inicial
    char cadena2[] = "mundo!"; // Declara una segunda cadena de caracteres

    strcat(cadena1, cadena2); // Concatena la segunda cadena a la primera

    printf("Cadena concatenada: %s\n", cadena1); // Muestra la cadena concatenada

    return 0;
}

