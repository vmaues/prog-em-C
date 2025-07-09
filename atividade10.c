#include <stdio.h>

int main() {
    int idade;
    int tem_ingresso;


    printf("Digite sua idade: ");
    scanf("%d", &idade);


    printf("Você possui ingresso? (1 para SIM, 0 para NÃO): "):
    scanf("%d", &tem_ingresso);


    if (idade >= 14 && tem_ingresso == 1) {
    printf("Você pode entrar no cinema.\n");
    } else {
    printf("Você NÃO pode entrar no cinema.\n");
    }

    return 0;
}