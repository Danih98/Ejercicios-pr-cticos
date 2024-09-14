#include <stdio.h>

int main() {
    float base, altura;

    // Solicitar la base y la altura del triángulo al usuario
    printf("Diga la base: ");
    scanf("%f", &base);

    printf("Diga la altura: ");
    scanf("%f", &altura);

    // Mostrar el resultado
    printf("El área del triángulo = %.2f\n", (base * altura) / 2);

    return 0;
}

