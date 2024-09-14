#include <stdio.h>

int main() {
    int numero=0;
    printf("Por favor, ingrese un número: ");
    scanf("%d", &numero);

    if (numero == 1) {
        // Código a ejecutar si la condición es verdadera
        printf("ejecuto el código");
    } else {
        printf("ejecuto otro código");
    }
}

