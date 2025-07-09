#include <stdio.h>
#include <stdbool.h> 

int main() {
    int idade;
    bool maior_de_idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    maior_de_idade = (idade >= 18);

    if (maior_de_idade) {
        printf("Você é maior de idade.\n");
    } else {
        printf("Você é menor de idade.\n");
    }

    return 0;
}