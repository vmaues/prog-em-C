#include <stdio.h>
#include <string.h>

int main() {
    int quantidade;
    printf("Quantos nomes você deseja cadastrar? ");
    scanf("%d", &quantidade);
    getchar(); 

    // Aloca espaço para os nomes dinamicamente
    char nomes[quantidade][100];

    for (int cont = 0; cont < quantidade; cont++) {
        printf("Digite o nome completo %d: ", cont + 1);
        fgets(nomes[cont], 100, stdin);

        // Remove o '\n' deixado pelo fgets
        nomes[cont][strcspn(nomes[cont], "\n")] = '\0';
    }

    printf("\nNomes cadastrados:\n");
    for (int cont = 0; cont < quantidade; cont++) {
        printf("Nome %d: %s\n", cont + 1, nomes[cont]);
    }

    return 0;
}