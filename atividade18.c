#include <stdio.h>

int main() {
    int escolha;

    printf("Escolha a estrutura de repetição:\n");
    printf("1 - for\n");
    printf("2 - while\n");
    printf("3 - do-while\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1: {
            int i, num, pares = 0;
            printf("Usando o laço FOR:\n");
            for (i = 0; i < 10; i++) {
                printf("Digite um número: ");
                scanf("%d", &num);
                if (num % 2 == 0) {
                    pares++;
                }
            }
            printf("Total de números pares: %d\n", pares);
            break;
        }

        case 2: {
            int i = 0, num, pares = 0;
            printf("Usando o laço WHILE:\n");
            while (i < 10) {
                printf("Digite um número: ");
                scanf("%d", &num);
                if (num % 2 == 0) {
                    pares++;
                }
                i++;
            }
            printf("Total de números pares: %d\n", pares);
            break;
        }

        case 3: {
            int i = 0, num, pares = 0;
            printf("Usando o laço DO-WHILE:\n");
            do {
                printf("Digite um número: ");
                scanf("%d", &num);
                if (num % 2 == 0) {
                    pares++;
                }
                i++;
            } while (i < 10);
            printf("Total de números pares: %d\n", pares);
            break;
        }

        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}