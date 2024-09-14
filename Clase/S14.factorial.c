#include <stdio.h>

int factorial(int n) {
    // Caso base: cuando n es 0 o 1, el factorial es 1.
    if (n <= 1) {
        return 1;
    } else {
        // Llamada recursiva
        return n * factorial(n - 1);
    }
}

int main() {
    int numero = 5;
    int resultado = factorial(numero);
    printf("El factorial de %d es %d\n", numero, resultado);
    return 0;
}


