#include <stdio.h>

int main() {
    // Definir el número de estudiantes y las notas por materia
    const int numEstudiantes = 3;
    const int numMaterias = 4;

    // Array multidimensional para almacenar las notas de los estudiantes
    int notas[numEstudiantes][numMaterias];

    // Solicitar al usuario ingresar las notas para cada estudiante y materia
    for (int i = 0; i < numEstudiantes; ++i) {
        printf("Ingrese las notas para el Estudiante #%d:\n", i + 1);

        for (int j = 0; j < numMaterias; ++j) {
            printf("Nota para Materia #%d: ", j + 1);
            scanf("%d", &notas[i][j]);
        }
    }

    // Mostrar las notas ingresadas
    printf("\nNotas de los estudiantes:\n");
    for (int i = 0; i < numEstudiantes; ++i) {
        printf("Estudiante #%d: ", i + 1);

        for (int j = 0; j < numMaterias; ++j) {
            printf("%d ", notas[i][j]);
        }

        printf("\n");
    }

    return 0;
}
