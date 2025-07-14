
#include <stdio.h>

int main() {
    int numero, soma = 0;

    // Solicita o primeiro número
    printf("Digite um número (0 para sair): ");
    scanf("%d", &numero);

    // Enquanto o número for diferente de 0, continua somando
    while (numero != 0) {
        soma += numero; // Soma o número informado

        // Solicita o próximo número
        printf("Digite um número (0 para sair): ");
        scanf("%d", &numero);
    }

    // Exibe o resultado final
    printf("A soma total dos números digitados é: %d\n", soma);

    return 0;
}
