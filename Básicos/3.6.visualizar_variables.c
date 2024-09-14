#include <stdio.h>

int main() {
    // Declaración de variables para almacenar un número entero, un número con decimales, un carácter y una cadena de caracteres.
    int entero;
    float numero_decimales;
    char caracter;
    char cadena[100];  // Capacidad para 100 caracteres

    // Solicitar al usuario que ingrese un número entero.
    printf("Introduce un número entero: ");
    scanf("%d", &entero);

    // Solicitar al usuario que ingrese un número con decimales.
    printf("Introduce un número con decimales: ");
    scanf("%f", &numero_decimales);

    // Solicitar al usuario que ingrese un carácter.
    printf("Introduce un carácter: ");
    scanf(" %c", &caracter);

    // Solicitar al usuario que ingrese una cadena de caracteres.
    printf("Introduce una cadena de caracteres: ");
    scanf("%s", cadena); // El espacio en blanco antes de %c consume el salto de línea anterior

    // Mostrar los valores ingresados por el usuario.
    printf("\nVariables ingresadas:\n");
    printf("Entero: %d\n", entero);
    printf("Número con decimales: %f\n", numero_decimales);
    printf("Carácter: %c\n", caracter);
    printf("Cadena: %s\n", cadena);

    return 0;
}
