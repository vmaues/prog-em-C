#include <stdio.h>

int main() {
    int numero;
    int soma = 0; // Variável para armazenar a soma dos números

    // Loop que continua até o usuário digitar um número negativo
    do {
        printf("Digite um número inteiro positivo (ou negativo para sair): ");
        scanf("%d", &numero);

        // Verifica se o número é positivo
        if (numero >= 0) {
            soma += numero; // Soma o número à variável 'soma'
        }

    } while (numero >= 0); // Continua enquanto o número for positivo ou zero

    // Exibe a soma dos números positivos digitados
    printf("A soma dos números positivos digitados é: %d\n", soma);

    return 0;
}