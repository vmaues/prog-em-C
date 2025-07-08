#include <stdio.h>

int main () {
int num1, num2;

printf ("Digite o primeiro numero inteiro: ");
scanf ("%d", &num1);

printf ("Digite o segundo numero inteiro: ");
scanf ("%d", &num2);

printf ("\nComparações:\n");

printf("%d == %d : %s\n", num1, num2, (num1 == num2) ? "Verdadeiro" : "Falso");

printf("%d != %d : %s\n", num1, num2, (num1 != num2) ? "Verdadeiro" : "Falso");

printf("%d > %d  : %s\n", num1, num2, (num1 > num2)  ? "Verdadeiro" : "Falso");

printf("%d < %d  : %s\n", num1, num2, (num1 < num2)  ? "Verdadeiro" : "Falso");

printf("%d >= %d : %s\n", num1, num2, (num1 >= num2) ? "Verdadeiro" : "Falso");

printf("%d <= %d : %s\n", num1, num2, (num1 <= num2) ? "Verdadeiro" : "Falso");


}