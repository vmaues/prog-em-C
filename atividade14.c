#include <stdio.h>

int main() {
    int i, j;

    // Laço externo para os números de 1 a 5
    for (i = 1; i <= 5; i++) {
        // Laço interno para multiplicar o número atual de 1 a 10
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j); // Exibe a multiplicação
        }
        printf("\n"); // Linha em branco para separar as tabelas
    }

    return 0;
}
