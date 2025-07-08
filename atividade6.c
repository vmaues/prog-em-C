#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("O primeiro número (%d) é maior que o segundo (%d).\n", num1, num2);
    } else if (num2 > num1) {
        printf("O segundo número (%d) é maior que o primeiro (%d).\n", num2, num1);
    } else {
        printf("Os dois números são iguais (%d).\n", num1);
    }

    return 0;
}