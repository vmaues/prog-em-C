#include <stdio.h>

int main() {
    // Declarando o vetor com 4 posições
    float notas[4] = {7.5, 8.0, 6.5, 9.0};

    // Imprimindo cada posição do vetor
    for (int i = 0; i < 4; i++) {
        printf("Nota %d: %.2f\n", i + 1, notas[i]);
    }

    return 0;
}

