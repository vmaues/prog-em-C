#include <stdio.h>

int main() {
    int numeros[5];  // Vetor para armazenar 5 números

    // Laço para armazenar os valores digitados pelo usuário
    for (int i = 0; i < 5; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    // Laço para exibir os valores armazenados
    printf("\nNumeros digitados:\n");
    for (int i = 0; i < 5; i++) {
        printf("Posição %d: %d\n", i + 1, numeros[i]);
    }

    return 0;
} 