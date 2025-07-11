#include <stdio.h>
#include <stdbool.h>

int main() {
    char nome_completo[50];
    float nota1, nota2, media;
    bool tem_recuperacao;
    const float MEDIA_MINIMA = 6.0;

     // 1. solicita o nome completo do aluno

    printf("digite o nome completo do aluno: ");
    fgets(nome_completo, sizeof(nome_completo), stdin);

    // 2. solicita as duas notas

    printf("digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("digite a segunda nota: ");
    scanf("%f", &nota2);

    // 3. calcula a média

    media = (nota1 + nota2) / 2;

     // 5. pergunta se o aluno tem direito à recuperação (1 para Sim, 0 para Não)

    int resposta;
    printf("o aluno tem direito a recuperação? (1 para sim, 0 para não): ");
    scanf("%d", &resposta);
    tem_recuperacao = (resposta == 1);

    // 6. verifica a situação do aluno
    
    printf("\nAluno: %s", nome_completo);
    printf("media: %.2f\n", media);

    if (media >= MEDIA_MINIMA) {
        printf("situação: aprovado!\n");
    } else if (media < MEDIA_MINIMA && tem_recuperacao) {
        printf("situação: em recuperação.\n");
    } else {
        printf("situação: reprovado.\n");
    }

return 0;

}