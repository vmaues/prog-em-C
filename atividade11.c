#include <stdio.h>

int main() {
int passos = 0; // Iniciei variável com valor 0

printf("Valor inicial de passos: %d\n", passos); // Mostrar valor atual

    // Incrementei 3 vezes
passos++;
passos++;
passos++;
    
printf("Valor após 3 passos à frente: %d\n", passos); // Mostrei valor após incremento

// Decrementei 1 vez
passos--;

printf("Valor final de passos (após 1 passo para trás): %d\n", passos); // Mostrar valor final

return 0;

}