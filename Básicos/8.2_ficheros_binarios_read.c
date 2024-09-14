#include <stdio.h>

struct Registro {
    int id;
    float valor;
};

int main() {
    struct Registro registros[3];
    FILE *archivo;

    // Abrir el archivo en modo de lectura binaria ("rb")
    archivo = fopen("datos.bin", "rb");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo para lectura.\n");
        return 1;
    }

    // Leer la estructura desde el archivo
    fread(registros, sizeof(struct Registro), 3, archivo);

    // Mostrar los registros leídos
    for (int i = 0; i < 3; i++) {
        printf("Registro %d: ID = %d, Valor = %.2f\n", i + 1, registros[i].id, registros[i].valor);
    }

    // Cerrar el archivo
    fclose(archivo);

    return 0;
}
