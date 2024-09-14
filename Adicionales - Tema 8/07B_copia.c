/*
 * Programa que copia un fichero en otro
 * carácter a carácter
 * Solución alternativa utilizando feof
 * https://www.cplusplus.com/reference/cstdio/feof/
 * También utilizamos los parámetros de main para pasar
 * los nombres de archivo origen y destino
 */

#include <stdio.h>

#define ARCHIVO_ORIGEN  "chistes.txt"
#define ARCHIVO_DESTINO "chistes_copia.txt"

int main() {
    FILE *ficheroOrigen, *ficheroDestino;
    int c = 0;
    ficheroOrigen = fopen(ARCHIVO_ORIGEN, "r");
    if (ficheroOrigen == NULL) {
        printf("No se pudo abrir el fichero de origen: %s\n", ARCHIVO_ORIGEN);
        return -2;
    }
    ficheroDestino = fopen(ARCHIVO_DESTINO, "w");
    if (ficheroDestino == NULL) {
        printf("No se pudo abrir el fichero de destino: %s\n", ARCHIVO_DESTINO);
        return -2;
    }
    while (1) {
        c = fgetc(ficheroOrigen);
        if (feof(ficheroOrigen)) break;
        fputc(c, ficheroDestino);
    }
    fclose(ficheroOrigen);
    fclose(ficheroDestino);
    return 0;
}