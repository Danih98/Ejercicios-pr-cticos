#include <stdio.h>

struct Registro {
    int id;
    float valor;
};

int main() {
    FILE *archivo;
    struct Registro registro;

    // Abrir el archivo binario en modo de lectura y escritura ("rb+")
    archivo = fopen("datos.bin", "rb+");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo para lectura y escritura.\n");
        return 1;
    }

    // Mover el puntero a la posición del segundo registro
    int posicion = 1;  // Número de registro a leer/actualizar
    fseek(archivo, posicion * sizeof(struct Registro), SEEK_SET);

    // Leer el registro en la posición especificada
    fread(&registro, sizeof(struct Registro), 1, archivo);
    printf("Registro %d: ID = %d, Valor = %.2f\n", posicion + 1, registro.id, registro.valor);

    // Mover el puntero a la posición del tercer registro
    posicion = 2;
    fseek(archivo, posicion * sizeof(struct Registro), SEEK_SET);

    // Actualizar el registro en la nueva posición
    struct Registro nuevoRegistro = {3, 42.0}; // Nuevo registro a escribir
    fwrite(&nuevoRegistro, sizeof(struct Registro), 1, archivo);

    // Cerrar el archivo
    fclose(archivo);

    return 0;
}
