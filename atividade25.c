#include <stdio.h>

int main() {
    // Declaração e inicialização da matriz
    int matriz[3][3] = {
        {1, 2, 3},
        {2, 3, 4},
        {3, 4, 5}
    };

    // :::::Legendas:::::
    printf("\t\tImpacto\n");
    printf("Urgencia\n");

    for (int lin = 0; lin < 3; lin++) {
        printf("\t\t");
        for (int col = 0; col < 3; col++) {
            printf("%d\t", matriz[lin][col]);
        }
        printf("\n");
    }

    return 0;
}