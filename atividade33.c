#include <stdio.h>

struct Animal {
    char nome[50];
    char especie[30];
    char raca[30];
    int idade;
    float peso;
};

int main() {
    struct Animal pet;

    printf("Cadastro de animal no Petshop\n");
    printf("------------------------------\n");

    printf("Nome: ");
    fgets(pet.nome, sizeof(pet.nome), stdin);

    printf("Espécie (ex: cachorro, gato, etc.): ");
    fgets(pet.especie, sizeof(pet.especie), stdin);

    printf("Raça: ");
    fgets(pet.raca, sizeof(pet.raca), stdin);

    printf("Idade (em anos): ");
    scanf("%d", &pet.idade);

    printf("Peso (em kg): ");
    scanf("%f", &pet.peso);

    printf("\n=== Dados Cadastrados ===\n");
    printf("Nome: %s", pet.nome);
    printf("Espécie: %s", pet.especie);
    printf("Raça: %s", pet.raca);
    printf("Idade: %d anos\n", pet.idade);
    printf("Peso: %.2f kg\n", pet.peso);

    return 0;
}

