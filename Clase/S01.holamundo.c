/**
   gcc -E holamundo.c -o holamundo.E Realizar preprocesado
   gcc -S holamundo.c -o holamundo.S Ensamblar
   gcc -c holamundo.c -o holamundo.o Generamos código objeto sin enlazarlo a otras librerias
   gcc holamundo.c -o holamundo Realizamos la compilación completa
 */

#include <stdio.h>

int main() {
    printf("Hola, mundo\n");
    return 0;
}

