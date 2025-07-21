#include <stdio.h>

struct Veiculo {
    char marca[30];
    char modelo[30];
    int ano;
    float valor;
};

int main() {
    struct Veiculo carro;

    printf("Informe a marca do carro: ");
    fgets(carro.marca, sizeof(carro.marca), stdin);

    printf("Informe o modelo do carro: ");
    fgets(carro.modelo, sizeof(carro.modelo), stdin);

    printf("Informe o ano do carro: ");
    scanf("%d", &carro.ano);

    printf("Informe o valor do carro: ");
    scanf("%f", &carro.valor);

    printf("\n=== DADOS DO VEÍCULO ===\n");
    printf("Marca: %s", carro.marca);
    printf("Modelo: %s", carro.modelo);
    printf("Ano: %d\n", carro.ano);
    printf("Valor: R$ %.2f\n", carro.valor);

    return 0;
}