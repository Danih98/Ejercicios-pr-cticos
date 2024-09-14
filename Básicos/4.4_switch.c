#include <stdio.h>

int main() {
    int numero=0;
    printf("Por favor, ingrese un número: ");
    scanf("%d", &numero);

    switch (numero) {
        case 1:
            //Se ejecuta si numero = 1
            printf("Caso 1");
            break;
        case 2:
            //Se ejecuta si numero = 2
            printf("Caso 2");
            break;
        case 3:
            //Se ejecuta si numero = 3
            printf("Caso 3");
            break;
        default:
            //Se ejecuta en el caso de que no se de ningún caso
    }
}

