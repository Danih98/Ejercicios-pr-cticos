#include <stdio.h>

int main() {
    char cadena[100]; // Declara una cadena de caracteres

    printf("Ingrese una cadena: "); // Muestra un mensaje
    gets(cadena); // Lee una cadena de caracteres desde la entrada estándar

    printf("Cadena ingresada: ");
    puts(cadena); // Muestra la cadena en la salida estándar

    return 0;
}


