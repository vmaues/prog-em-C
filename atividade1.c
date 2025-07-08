#include <stdio.h>

int x_global = 10;  

int main() {
    int x_local = 5;  

    printf("Valor da variável global x_global: %d\n", x_global);
    printf("Valor da variável local x_local: %d\n", x_local);

    return 0; 
}