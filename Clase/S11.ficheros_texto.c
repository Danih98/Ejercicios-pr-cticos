#include <stdio.h>//
// Created by university on 14/11/23.
//


int main() {
    FILE *archivo;

    char datos_escritos[] = "Estos son algunos datos que escribiremos en el archivo.";
    char datos_leidos[100];  // Buffer para almacenar los datos leídos

    // Crear y escribir en un archivo
    archivo = fopen("ejemplo.txt", "w"); // Abre para escritura

    fprintf(archivo, "%s", datos_escritos);
    fclose(archivo);

    // Leer y mostrar el contenido del archivo
    archivo = fopen("ejemplo.txt", "r"); // Abre para lectura
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo para lectura.\n");
        return 1;  // Termina el programa con un código de error
    }

    // Leer datos del archivo y mostrarlos en la consola
    printf("Contenido del archivo:\n");
    while (fgets(datos_leidos, sizeof(datos_leidos), archivo) != NULL) {
        printf("%s", datos_leidos);
    }

    fclose(archivo);

    return 0;  // Termina el programa con éxito
}
