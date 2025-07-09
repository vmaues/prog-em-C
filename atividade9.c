#include <stdio.h>

#define IDADE_MINIMA 18 
int main() {
    int idade;

    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);

    if (idade >= IDADE_MINIMA) {
        if (idade > 60) {
            printf("Maior de idade e idoso.\n");
        } else {
            printf("Maior de idade.\n");
        }
    } else {
        printf("Menor de idade.\n");
    }

    return 0;
}