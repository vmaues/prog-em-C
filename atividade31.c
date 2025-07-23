#include <stdio.h>
#include <stdlib.h>

int main() {
    // Alocação dinâmica de memória para idade (int) e peso (float)
    int *pnt_idade = (int *) malloc(sizeof(int));
    float *pnt_peso = (float *) malloc(sizeof(float));

    // Verifica se a alocação foi bem-sucedida
    if (pnt_idade == NULL || pnt_peso == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Entrada de dados
    printf("Digite a idade: ");
    scanf("%d", pnt_idade);

    printf("Digite o peso: ");
    scanf("%f", pnt_peso);

    // Exibição dos valores e seus respectivos endereços
    printf("\nA idade informada foi: %d\n", *pnt_idade);
    printf("Endereço da idade: %p\n", (void*)pnt_idade);

    printf("\nO peso informado foi: %.2f\n", *pnt_peso);
    printf("Endereço do peso: %p\n", (void*)pnt_peso);

    // Liberação da memória alocada
    free(pnt_idade);
    free(pnt_peso);

    return 0;
}