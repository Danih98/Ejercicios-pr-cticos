#include <stdio.h>
#include <string.h>

int main() {
    char origen[] = "Hola"; // Declara una cadena de origen
    char destino[20]; // Declara una cadena de destino

    strcpy(destino, origen); // Copia la cadena de origen en la cadena de destino

    printf("Cadena copiada: %s\n", destino); // Muestra la cadena de destino

    return 0;
}

