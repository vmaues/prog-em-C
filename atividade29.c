#include <stdio.h>

int main() {
    char nome[3][200];   // Espaço fixo (estático) para nomes
    int idade[3];
    float altura[3];

    for (int i = 0; i < 3; i++) {
        printf("Pessoa %d:\n", i + 1);

        printf("Digite o nome completo: ");
        fgets(nome[i], sizeof(nome[i]), stdin);

        printf("Digite a idade: ");
        scanf("%d", &idade[i]);

        printf("Digite a altura (ex: 1.75): ");
        scanf("%f", &altura[i]);
        getchar(); // Limpa o buffer do teclado
    }

    printf("\n--- DADOS COLETADOS ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: %s", nome[i]);
        printf("Idade: %d | Endereço da variável idade: %p\n", idade[i], &idade[i]);
        printf("Altura: %.2f | Endereço da variável altura: %p\n", altura[i], &altura[i]);
        printf("Nome armazenado em: %p\n\n", &nome[i]);
    }

    return 0;
}