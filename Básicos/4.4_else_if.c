#include <stdio.h>

int main() {
    int numero=0;
    printf("Por favor, ingrese un número: ");
    scanf("%d", &numero);

    if (numero == 1) {
        // Código a ejecutar si la condición es verdadera
        printf("ejecuto el código 1");
    } else if (numero == 3){
        printf("ejecuto otro código 3");
    }
    else if (numero == 4) {
        printf("ejecuto este código 4");
    }
    else {
        printf("me ejecuto si no se cumple ninguna condición");
    }

    printf("\nMe ejecuto");
}

