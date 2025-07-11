#include <stdio.h>

int main() {
    int i;  // Declara a variável 'i' para o laço

    // Laço for de 0 até 20, incrementando de 1 em 1
    for(i = 0; i <= 20; i++) {
        // Verifica se o número é par
        if(i % 2 == 0) {
            // Imprime o número par
            printf("%d\n", i);
        }
    }

    return 0; 
}