#include <stdio.h>

void fibonacci(int penultimo, int ultimo, int n) {
    int actual;
    printf("%d ", ultimo);
    if (n > 1) {
        actual = penultimo + ultimo;
        fibonacci(ultimo, actual, n-1);  // Llamadas recursivas
    }
}

int main() {
    int num_terminos = 10;

    printf("Secuencia de Fibonacci de %d términos:\n", num_terminos);
    fibonacci(0, 1, num_terminos);
    return 0;
}

