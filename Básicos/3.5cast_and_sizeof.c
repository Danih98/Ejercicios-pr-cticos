#include <stdio.h>

int main() {
    // Declaración de variables
    int entero = 42;          // Variable de tipo int con el valor 42
    double doble = 3.14159265; // Variable de tipo double con el valor 3.14159265

    // Uso del operador sizeof para obtener el tamaño de las variables en bytes
    size_t tamEntero = sizeof(entero); // sizeof retorna el tamaño en bytes de la variable entero
    size_t tamDoble = sizeof(doble);   // sizeof retorna el tamaño en bytes de la variable doble

    // Impresión de los tamaños de las variables
    printf("Tamaño de int: %zu bytes\n", tamEntero);
    printf("Tamaño de double: %zu bytes\n", tamDoble);

    // Realizando una conversión (casting) de int a double
    double enteroComoDouble = (double)entero; // Se convierte el valor de entero a tipo double

    // Impresión del valor resultante de la conversión
    printf("Valor de entero como double: %f\n", enteroComoDouble);

    return 0;
}
