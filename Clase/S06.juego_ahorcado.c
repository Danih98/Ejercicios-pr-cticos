#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_INTENTOS 6
#define PALABRA_SECRETA "AHORCADO"

void mostrarTablero(const char *palabraSecreta, const char *letrasIntentadas, int intentosRestantes);
void imprimirEstadoJuego(const char *mensaje, int intentosRestantes);
int adivinarLetra(char letra, const char *palabraSecreta, char *letrasIntentadas);
int todasAdivinadas(const char *palabraSecreta, const char *letrasIntentadas);

int main() {
    char palabraSecreta[strlen(PALABRA_SECRETA)];
    char letrasIntentadas[MAX_INTENTOS * 2];  // Letras intentadas y correctamente adivinadas
    int intentosRestantes = MAX_INTENTOS;

    printf("Bienvenido al juego del ahorcado.\n");

    // Palabra secreta
    strcpy(palabraSecreta, PALABRA_SECRETA);

    while (1) {
        mostrarTablero(palabraSecreta, letrasIntentadas, intentosRestantes);

        // Verificar si el jugador ha ganado
        if (todasAdivinadas(palabraSecreta, letrasIntentadas)) {
            imprimirEstadoJuego("¡Felicidades! ¡Has ganado!", intentosRestantes);
            break;
        }

        // Verificar si el jugador ha perdido
        if (intentosRestantes == 0) {
            imprimirEstadoJuego("Lo siento, has perdido. La palabra era:", intentosRestantes);
            printf("%s\n", palabraSecreta);
            break;
        }

        // Pedir al jugador que ingrese una letra
        printf("Ingresa una letra: ");
        char letra;
        scanf(" %c", &letra);
        letra = toupper(letra);  // Convertir a mayúsculas

        // Adivinar la letra y actualizar el estado del juego
        int adivinado = adivinarLetra(letra, palabraSecreta, letrasIntentadas);

        if (!adivinado) {
            intentosRestantes--;
        }
    }

    return 0;
}

void mostrarTablero(const char *palabraSecreta, const char *letrasIntentadas, int intentosRestantes) {
    printf("\nPalabra secreta: ");

    // Mostrar letras adivinadas, ocultando las no adivinadas
    for (int i = 0; i < strlen(palabraSecreta); i++) {
        if (strchr(letrasIntentadas, palabraSecreta[i]) != NULL) {
            printf("%c ", palabraSecreta[i]);
        } else {
            printf("_ ");
        }
    }

    printf("\nLetras intentadas: %s\n", letrasIntentadas);
    printf("Intentos restantes: %d\n", intentosRestantes);
}

void imprimirEstadoJuego(const char *mensaje, int intentosRestantes) {
    printf("\n%s %d\n", mensaje, intentosRestantes);
}

int adivinarLetra(char letra, const char *palabraSecreta, char *letrasIntentadas) {
    // Verificar si la letra ya ha sido intentada
    if (strchr(letrasIntentadas, letra) != NULL) {
        printf("Ya has intentado esa letra. Inténtalo de nuevo.\n");
        return 0;
    }

    // Agregar la letra a las letras intentadas
    strncat(letrasIntentadas, &letra, 1);

    // Verificar si la letra está en la palabra secreta
    if (strchr(palabraSecreta, letra) != NULL) {
        printf("¡Adivinaste una letra!\n");
        return 1;
    } else {
        printf("Letra incorrecta. Perdiste un intento.\n");
        return 0;
    }
}

int todasAdivinadas(const char *palabraSecreta, const char *letrasIntentadas) {
    // Verificar si todas las letras de la palabra secreta están en las letras intentadas
    for (int i = 0; i < strlen(palabraSecreta); i++) {
        if (strchr(letrasIntentadas, palabraSecreta[i]) == NULL) {
            return 0; // No todas las letras han sido adivinadas
        }
    }
    return 1; // Todas las letras han sido adivinadas
}
