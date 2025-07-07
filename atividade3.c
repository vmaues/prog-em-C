#include <stdio.h>
#include <string.h>

int main() {
    char nome_completo[50];
    char apelido[20];
    int idade;
    float altura;

    
    printf("Digite seu nome completo: \n");
    fgets(nome_completo, sizeof(nome_completo), stdin);
    
    nome_completo[strcspn(nome_completo, "\n")] = '\0';

    printf("Digite seu apelido: \n");
    scanf("%s", apelido);
   
    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("\nSeu nome completo é: %s\n", nome_completo);
    printf("Seu apelido é: %s\n", apelido);
    printf("Sua idade é: %d\n", idade);
    printf("Sua altura é: %.2f\n", altura);

    return 0;
}
