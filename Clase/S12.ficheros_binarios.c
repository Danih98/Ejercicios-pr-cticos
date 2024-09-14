#include <stdio.h>

// Definición de la estructura Persona
struct Persona {
    char nombre[50];
    int edad;
};

int main() {
    FILE *archivo;

    // Crear e inicializar una estructura Persona
    struct Persona persona_escrita = {"Juan", 25};

    // Crear y escribir en un archivo binario
    archivo = fopen("ejemplo_bin.bin", "wb"); // Abre para escritura binaria
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo para escritura binaria.\n");
        return 1;  // Termina el programa con un código de error
    }

    fwrite(&persona_escrita, sizeof(struct Persona), 1, archivo);
    fclose(archivo);

    // Leer y mostrar el contenido del archivo binario
    archivo = fopen("ejemplo_bin.bin", "rb"); // Abre para lectura binaria
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo para lectura binaria.\n");
        return 1;  // Termina el programa con un código de error
    }

    // Leer datos del archivo binario y mostrarlos en la consola
    struct Persona persona_leida;
    fread(&persona_leida, sizeof(struct Persona), 1, archivo);
    printf("Contenido del archivo binario:\n");
    printf("Nombre: %s\n", persona_leida.nombre);
    printf("Edad: %d\n", persona_leida.edad);

    fclose(archivo);

    return 0;  // Termina el programa con éxito
}
