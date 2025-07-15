#include <stdio.h>

int main() {
    int numero, pares = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numero);
        if (numero % 2 == 0) {
            pares++;
        }
    }

    printf("Quantidade de números pares: %d\n", pares);
    return 0;
}


#include <stdio.h>

int main() {
    int numero, pares = 0, i = 0;

    while (i < 10) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numero);
        if (numero % 2 == 0) {
            pares++;
        }
        i++;
    }

    printf("Quantidade de números pares: %d\n", pares);
    return 0;
}



#include <stdio.h>

int main() {
    int numero, pares = 0, i = 0;

    do {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numero);
        if (numero % 2 == 0) {
            pares++;
        }
        i++;
    } while (i < 10);

    printf("Quantidade de números pares: %d\n", pares);
    
    return 0;
}

