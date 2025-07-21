#include <stdio.h>

int main() {
    int salas = 3;
    int periodos = 2;

    float temperaturas[salas][periodos];
    float soma = 0, media;
    float maior = -50.0, menor = 50.0;
    int lin, col;

    // FOR para armazenamento das temperaturas
    for (lin = 0; lin < salas; lin++) {
        printf("Sala %d:\n", lin + 1);
        for (col = 0; col < periodos; col++) {
            printf("  Temperatura no período %d: ", col + 1);
            scanf("%f", &temperaturas[lin][col]);
            soma += temperaturas[lin][col];

            // Checagem de valores dentro do intervalo permitido
            if (temperaturas[lin][col] > maior)
                maior = temperaturas[lin][col];
            if (temperaturas[lin][col] < menor)
                menor = temperaturas[lin][col];
        }
    }

    // Média recebea soma dividido pela multiplicação da matriz
    media = soma / (salas * periodos);

    // Exibição dos Resultados
    printf("\nMédia geral: %.2f°C\n", media);
    printf("Maior temperatura: %.2f°C\n", maior);
    printf("Menor temperatura: %.2f°C\n", menor);

    // Checagem de temperaturas acima de 30°C
    printf("\nTemperaturas acima de 30°C:\n");
    for (lin = 0; lin < salas; lin++) {
        for (col = 0; col < periodos; col++) {
            if (temperaturas[lin][col] > 30.0) {
                printf("  Sala %d, Período %d: %.2f°C\n", lin + 1, col + 1, temperaturas[lin][col]);
            }
        }
    }

    return 0;
}


loja????

#include <stdio.h>

int main() {

    int categorias = 4;
    int produtos = 3;
    int opcao;
    int estoque[categorias][produtos] = {
        {10, 5, 8},
        {4, 2, 0},
        {7, 3, 9},
        {6, 1, 2}
    };

    do {
        // Menu principal
        printf("\n:::: Sistema INFO TECH :::::\n");
        printf("1 - Exibir estoque completo\n");
        printf("2 - Atualizar quantidade de um produto\n");
        printf("3 - Verificar produtos com estoque zerada\n");
        printf("4 - Exibir soma dos produtos por categoria\n");
        printf("0 - Logout\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            // Exibir estoque completo com uso do FOR para percorrer linhas e colunas
            printf("\n:::: ESTOQUE GERAL :::::\n");
            for (int lin = 0; lin < categorias; lin++) {
                if (lin == 0) printf("Categoria 0 - Processadores:\n");
                else if (lin == 1) printf("Categoria 1 - Placas de Vídeo:\n");
                else if (lin == 2) printf("Categoria 2 - Memórias RAM:\n");
                else if (lin == 3) printf("Categoria 3 - SSD:\n");

                for (int col = 0; col < produtos; col++) {
                    if (col == 0) printf("  Produto 0 - Produto Alfa: %d\n", estoque[lin][col]);
                    else if (col == 1) printf("  Produto 1 - Produto Bravo: %d\n", estoque[lin][col]);
                    else if (col == 2) printf("  Produto 2 - Produto Charlie: %d\n", estoque[lin][col]);
                }
            }

        } else if (opcao == 2) {
            // Atualizar quantidade a partir dos índices informados pelo usuário
            int cat_escolhida, prod_escolhido, nova_qtd;

            printf("\n--- ATUALIZAR PRODUTO ---\n");

            // Exibir as categorias para que o usuário saiba as opções
            printf("categorias disponíveis:\n");
            printf("0 - Processadores\n");
            printf("1 - Placas de Vídeo\n");
            printf("2 - Memórias RAM\n");
            printf("3 - SSD\n");

            printf("Informe a categoria (0 a 3): ");
            scanf("%d", &cat_escolhida);

           // Exibir os produtos para que o usuário saiba as opções
            printf("Produtos do Estoque:\n");
            printf("0 - Produto A\n");
            printf("1 - Produto B\n");
            printf("2 - Produto C\n");

            printf("Informe o produto (0 a 2): ");
            scanf("%d", &prod_escolhido);

            printf("Digite a nova quantidade: ");
            scanf("%d", &nova_qtd);

            estoque[cat_escolhida][prod_escolhido] = nova_qtd;
            printf("Estoque atualizado com sucesso!\n");

        } else if (opcao == 3) {
            // Checar o estoque zerado comparando com Zero
            printf("\n:::: produtos COM ESTOQUE ZERO ::::\n");
            int localizado = 0;
            for (int lin = 0; lin < categorias; lin++) {
                for (int col = 0; col < produtos; col++) {
                    if (estoque[lin][col] == 0) {
                        printf("ATENÇÃO: Categoria %d, Produto %d esta com estoque ZERADO!\n", lin, col);
                        localizado = 1;
                    }
                }
            }
            if (!localizado) {
                printf("Nenhum produto do estoque está com quantidade zerada.\n");
            }

        } else if (opcao == 4) {
            // Soma e exibição por categoria
            printf("\n:::: TOTAL POR CATEGORIA ::::::\n");
            for (int lin = 0; lin < categorias; lin++) {
                int soma = 0;
                for (int col = 0; col < produtos; col++) {
                    soma += estoque[lin][col];
                }

                printf("Categoria %d: Total de produtos = %d\n", lin, soma);
            }

        } else if (opcao == 0) {
            printf("Logout realizado com sucesso!\n");
        } else {
            printf("Opção inválida! Veja as ações disponíveis e informe o numero da opçao.\n");
        }

    } while(opcao != 0);

    return 0;
}




