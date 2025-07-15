#include <stdio.h>

int main() {
    // 1 – Declarando e inicializando o vetor com 4 notas
    float notas[4] = {7.5, 8.0, 6.5, 9.0};

    // 2 – Laço For para imprimir cada posição do vetor
    for(int i = 0; i < 4; i++) {
        printf("Nota %d: %.2f\n", i + 1, notas[i]);
    }

    return 0;
}