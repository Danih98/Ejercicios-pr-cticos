#include <stdio.h>

struct Registro {
    int id;
    float valor;
};

int main() {
    struct Registro registros[] = {{1, 10.67}, {2, 20.3}, {3, 15.8}};
    FILE *archivo;

    // Abrir el archivo en modo de escritura binaria ("wb")
    archivo = fopen("datos.bin", "wb");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo para escritura.\n");
        return 1;
    }

    // Escribir la estructura en el archivo
    fwrite(registros, sizeof(struct Registro), 3, archivo);

    // Cerrar el archivo
    fclose(archivo);

    return 0;
}