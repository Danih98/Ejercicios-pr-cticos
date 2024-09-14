#include <stdio.h>
#include <string.h>

int main() {
    char cadena1[] = "Hola, mundo!"; // Declara una primera cadena
    char cadena2[] = "Hola, amigos!"; // Declara una segunda cadena

    int comparacion = strcmp(cadena1, cadena2); // Compara las dos cadenas

    if (comparacion == 0) {
        printf("Las cadenas son iguales.\n"); // Muestra un mensaje si las cadenas son iguales
    } else {
        printf("Las cadenas son diferentes.\n"); // Muestra un mensaje si las cadenas son diferentes
    }

    return 0;
}

