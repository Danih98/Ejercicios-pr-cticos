#include <stdio.h>

int suma(int a, int b);
int resta(int a, int b);
int producto(int a, int b);
int division(int a, int b);

// Función principal
int main() {
    int n1, n2, op, res;
    printf("Introduce el primer valor: ");
    scanf("%d", &n1);
    printf("Introduce el segundo valor: ");
    scanf("%d", &n2);
    printf("Introduce operacion suma(1), resta(2), producto(3), division(4):\n");
    scanf("%d", &op);

    switch (op) {
        case 1:
            res = suma(n1, n2);
            printf("%d + %d = %d\n", n1, n2, res);
            break;
        case 2:
            res = resta(n1, n2);
            printf("%d - %d = %d\n", n1, n2, res);
            break;
        case 3:
            res = producto(n1, n2);
            printf("%d * %d = %d\n", n1, n2, res);
            break;
        case 4:
            // Asegurarse de que el divisor (n2) no sea cero
            if (n2 != 0) {
                res = division(n1, n2);
                printf("%d / %d = %d\n", n1, n2, res);
            } else {
                printf("Error: División por cero\n");
            }
            break;
        default:
            printf("Operación no válida\n");
    }

    return 0;
}

// Definición de funciones

int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

int producto(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    return a / b;
}
