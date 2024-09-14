#include <stdio.h>

void sumaConPuntero(int *a, int *b) {
    *a = *a + *b; // Cambio en el valor apuntado por
    // a afecta a la variable original fuera de la función
}

int main() {
    int num1 = 5, num2 = 3;
    sumaConPuntero(&num1, &num2);
    printf("%d - %d",num1, num2);
    // num1 ahora es 8 y num2 sigue siendo 3
    return 0;
}

