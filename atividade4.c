#include <stdio.h>

int main () {
    int x,y;
    int soma;x+y;
    float mult=x*y;
    int sub=x-y;
    float divi=x/y;
    int resultado;

    printf("digite o primeiro numero: \n");
    scanf("%d", &x);
    sprintf("digite o segundo numero: \n");
    scanf("%d", &y);

    soma= x + y;
    mult= x * y;
    sub= x - y;
    divi= x / y;
    resultado= x % y;

    printf("soma: %d\n", soma);
    printf("multiplicação: %.2f\n", mult);
    prinf("subtração: %d\n", sub);
    printf("divisão: %.2f\n", divi);
    printf("resto da divisão: %d\n", resultado);

    return 0;


}