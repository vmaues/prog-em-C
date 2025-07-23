#include <stdio.h>

int main() {
    char nome[3][200];
    int idade[3];
    float altura[3];

    char *ptrNome[3];
    int *ptrIdade[3];
    float *ptrAltura[3];

    for (int i = 0; i < 3; i++) {
        printf("Digite o nome completo da pessoa %d: ", i + 1);
        fgets(nome[i], sizeof(nome[i]), stdin);

        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade[i]);

        printf("Digite a altura da pessoa %d (ex: 1.75): ", i + 1);
        scanf("%f", &altura[i]);
        getchar(); 

        ptrNome[i] = nome[i];
        ptrIdade[i] = &idade[i];
        ptrAltura[i] = &altura[i];
    }

    printf("\n--- DADOS E ENDEREÇOS DE MEMÓRIA ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: %s", ptrNome[i]);
        printf("Idade: %d | Endereço: %p\n", *ptrIdade[i], ptrIdade[i]);
        printf("Altura: %.2f | Endereço: %p\n\n", *ptrAltura[i], ptrAltura[i]);
    }

    return 0;
}


#include <stdio.h>
#include <string.h>

//Aqui utilizei typedef para definir o tipo de dados struct
typedef struct Pessoa {
    int idade;
    char nome[100];
    float altura;
};

int main() {

    Pessoa alunos[3]; // Aqui já não usei a palavra struct, veja como fica mais simples.

    
    for (int cont = 0; cont < 3; cont++) {
        printf("\n_____ Aluno(a) %d ________\n", cont + 1);
        printf("Digite o nome completo do(a) Aluno(a): ");
        fgets(alunos[cont].nome, sizeof(alunos[cont].nome), stdin);
        
        alunos[cont].nome[strcspn(alunos[cont].nome, "\n")] = '\0';
		
        printf("Digite a idade do(a) Aluno(a): ");
        scanf("%d", &alunos[cont].idade);
		
		getchar( );
		
        printf("Digite a altura do(a) Aluno(a): ");
        scanf("%f", &alunos[cont].altura);
		getchar( );
        
    }

    
    printf("\n____ Dados dos Alunos ____\n");
    for (int cont = 0; cont < 3; cont++) {
        printf("\n____ Aluno(a) %d _____\n", cont + 1);
        printf("Nome: %s", alunos[cont].nome);
        printf("\nEndereço de memoria do nome: %p\n", &alunos[cont].nome);

        printf("\nIdade: %d\n", alunos[cont].idade);
        printf("Endereço de memoria da idade: %p\n", &alunos[cont].idade);

        printf("\nAltura: %.2f\n", alunos[cont].altura);
        printf("Endereço de memoria da altura: %p\n", &alunos[cont].altura);
    }

    return 0;
}