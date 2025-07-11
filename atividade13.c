#include <stdio.h>

int main() {
    int num, i;

    printf("Digite um número inteiro para ver a tabuada: ");
    scanf("%d", &num);

    printf("Tabuada do %d:\n", num);
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}





#include <stdio.h>

int main() {
    int N, i, soma = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);

    printf("Soma de 1 até %d:\n", N);
    for(i = 1; i <= N; i++) {
        soma += i;
        printf("%d", i);
        if (i < N) {
            printf(" + ");
        }
    }

    printf(" = %d\n", soma);

    return 0;
}




#include <stdio.h>

int main() {
    int i;

    printf("Múltiplos de 3 entre 1 e 50:\n");
    for(i = 1; i <= 50; i++) {
        if(i % 3 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}

