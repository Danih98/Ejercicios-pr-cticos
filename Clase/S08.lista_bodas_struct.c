#include <stdio.h>
#include <stdlib.h>

// Definición de la estructura para representar una boda
typedef struct {
    char nombreNovio[50];
    char nombreNovia[50];
    int numInvitados;
} Boda;

int main() {
    int numBodas;

    // Solicitar al usuario el número de bodas
    printf("Ingrese el número de bodas: ");
    scanf("%d", &numBodas);

    // Crear un arreglo de estructuras Boda
    Boda bodas[numBodas];

    // Solicitar información para cada boda
    for (int i = 0; i < numBodas; ++i) {
        printf("\nBoda #%d:\n", i + 1);

        // Solicitar nombres de los novios
        printf("Nombre del novio: ");
        scanf("%s", bodas[i].nombreNovio);

        printf("Nombre de la novia: ");
        scanf("%s", bodas[i].nombreNovia);

        // Solicitar el número de invitados
        printf("Número de invitados: ");
        scanf("%d", &bodas[i].numInvitados);
    }

    // Mostrar la información de todas las bodas
    printf("\nLista de Bodas:\n");
    for (int i = 0; i < numBodas; ++i) {
        printf("Boda #%d:\n", i + 1);
        printf("Novio: %s\n", bodas[i].nombreNovio);
        printf("Novia: %s\n", bodas[i].nombreNovia);
        printf("Invitados: %d\n", bodas[i].numInvitados);
        printf("--------------------\n");
    }

    return 0;
}
