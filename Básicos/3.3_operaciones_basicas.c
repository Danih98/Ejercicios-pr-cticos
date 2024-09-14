
#include <stdio.h>

int main() {
    // Declaración e inicialización de variables de diferentes tipos de datos
    int entero = 10;
    double doble = 3.14159265359;
    // Mostrar los valores de las variables
    printf("Entero: %d\n", entero);
    printf("Doble: %lf\n", doble);
    printf("\n");

    // Realizar algunas operaciones básicas
    int suma = entero + doble;
    float multiplicacion = entero * 2.54;
    double division = entero / 1.5;

    // Mostrar los resultados de las operaciones
    printf("Suma: %d\n", suma);
    printf("Multiplicación: %f\n", multiplicacion);
    printf("División: %lf\n", division);

    return 0;
}

