#include <stdio.h>
#include <string.h>

struct Funcionario {
    int matricula;
    char nome[50];
    char setor[50];
    char situacao[20];
};

int main() {
    struct Funcionario f1, f2;


    f1.matricula = 101;
    strcpy(f1.nome, "Carlos Souza");
    strcpy(f1.setor, "RH");
    strcpy(f1.situacao, "Ativo");

 
    f2.matricula = 102;
    strcpy(f2.nome, "Ana Lima");
    strcpy(f2.setor, "Financeiro");
    strcpy(f2.situacao, "Inativo");


    printf("Funcionário 1:\n");
    printf("Matrícula: %d\nNome: %s\nSetor: %s\nSituação: %s\n\n", f1.matricula, f1.nome, f1.setor, f1.situacao);

    printf("Funcionário 2:\n");
    printf("Matrícula: %d\nNome: %s\nSetor: %s\nSituação: %s\n", f2.matricula, f2.nome, f2.setor, f2.situacao);

    return 0;
}