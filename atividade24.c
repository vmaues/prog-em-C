#include <stdio.h>

int main() {
    // Definindo uma matriz float 3x3
    float matriz[3][3] = {
        {7.5, 8.0, 6.5},
        {9.0, 5.5, 4.0},
        {6.0, 7.0, 8.5}
    };

    printf("Valores da matriz de notas:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%.1f ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}