#include <stdio.h>

int main() {
    // Declaración e inicialización de variables de diferentes tipos de datos
    int entero = 10;
    float flotante = 3.14;
    double doble = 3.14159265359;
    char caracter = 'A';
    unsigned int sinSigno = 42;
    short corto = 100;
    long largo = 1000000;
    long long muyLargo = 10000000000;

    // Mostrar los valores de las variables
    printf("Entero: %d\n", entero);
    printf("Flotante: %f\n", flotante);
    printf("Doble: %lf\n", doble);
    printf("Caracter: %c\n", caracter);
    printf("Sin Signo: %u\n", sinSigno);
    printf("Corto: %hd\n", corto);
    printf("Largo: %ld\n", largo);
    printf("Muy Largo: %lld\n", muyLargo);
    return 0;
}

