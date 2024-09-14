#include <stdio.h>

void sumaDirecta(int a, int b) {
    a = a + b; // Cambio en a dentro de la función, no afecta a la variable original fuera de la función
    printf("La suma es %d", a);
}

int main() {
    int num1 = 5, num2 = 3;
    sumaDirecta(num1, num2);
    // num1 sigue siendo 5 y num2 sigue siendo 3 aquí
    return 0;
}

