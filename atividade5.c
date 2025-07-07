#include <stdio.h>
#include <string.h>

int main() {
    char nome_completo[50];
    float idade;
    char genero[10];
    char cpf[15];
    char telefone[20];
    char email[50];
    float peso;

    printf("Digite seu nome completo: ");
    fgets(nome_completo, sizeof(nome_completo), stdin);
    nome_completo[strcspn(nome_completo, "\n")] = '\0';

    printf("Digite sua idade: ");
    scanf("%f", &idade);
    getchar(); 

    printf("Digite seu gênero: ");
    fgets(genero, sizeof(genero), stdin);
    genero[strcspn(genero, "\n")] = '\0';

    printf("Digite seu CPF: ");
    fgets(cpf, sizeof(cpf), stdin);
    cpf[strcspn(cpf, "\n")] = '\0';

    printf("Digite seu telefone: ");
    fgets(telefone, sizeof(telefone), stdin);
    telefone[strcspn(telefone, "\n")] = '\0';

    printf("Digite seu e-mail: ");
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\n")] = '\0';

    printf("Digite seu peso (kg): ");
    scanf("%f", &peso);

    printf("\n--- DADOS DIGITADOS ---\n");
    printf("Nome: %s\n", nome_completo);
    printf("Idade: %.1f anos\n", idade);
    printf("Gênero: %s\n", genero);
    printf("CPF: %s\n", cpf);
    printf("Telefone: %s\n", telefone);
    printf("E-mail: %s\n", email);
    printf("Peso: %.2f kg\n", peso);

    return 0;
}
