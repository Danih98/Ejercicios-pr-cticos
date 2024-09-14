#include <stdio.h>

void suma_antes() {
    printf("Sumamos i++\n");
    int i = 2;

    //Se realizan dos operaciones:
    //x = i; Primero
    //i = i+1; Segundo
    int x = i++;

    printf("x vale -> %d\n",x);
    printf("i vale -> %d\n",i);
}

void suma_despues() {
    printf("Sumamos ++i\n");
    int i = 2;

    //Se realizan dos operaciones:
    //x = i; Segundo
    //i = i+1; Primero
    int x = ++i;

    printf("x vale -> %d\n",x);
    printf("i vale -> %d\n",i);
}

int main() {
    suma_antes();
    printf("\n");
    suma_despues();

    return 0;
}
