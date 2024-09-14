#include <stdio.h>
#include <string.h>

// Definición de la estructura Profesor (con typedef)
typedef struct {
    char nombre[20];
    char apellido[50];
    int edad;
} Profesor;

// Definición de la estructura Alumno
struct Alumno {
    char nombre[20];
    char apellido[50];
    int edad;
};

int main() {
    // Inicialización de una instancia de Profesor
    Profesor profesor1;
    strcpy(profesor1.nombre, "Juan");
    strcpy(profesor1.apellido, "Pérez");
    profesor1.edad = 35;

    // Inicialización de una instancia de Alumno
    struct Alumno alumno1;
    strcpy(alumno1.nombre, "María");
    strcpy(alumno1.apellido, "González");
    alumno1.edad = 20;

    // Lectura de los datos de Profesor
    printf("Datos del Profesor:\n");
    printf("Nombre: %s\n", profesor1.nombre);
    printf("Apellido: %s\n", profesor1.apellido);
    printf("Edad: %d años\n", profesor1.edad);

    // Lectura de los datos de Alumno
    printf("\nDatos del Alumno:\n");
    printf("Nombre: %s\n", alumno1.nombre);
    printf("Apellido: %s\n", alumno1.apellido);
    printf("Edad: %d años\n", alumno1.edad);

    return 0;
}
