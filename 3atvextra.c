#include <stdio.h>
#include <stdlib.h>

int main () {
    int num1;
    int num2;
    int num3;
    int num4;
    int soma = 0;
//Dados uma sequência com 4 números inteiros, determinar a soma dos inteiros positivos da sequencia

printf ("Insira quatro números inteiros: ");
scanf ("%d %d %d %d", &num1, &num2, &num3, &num4);

if (num1>0){soma = soma +num1;}
if (num2>0){ soma = soma +num2;}
if (num3>0){ soma = soma +num3;}
if (num4>0){ soma = soma +num4;}
    printf ("A soma dos seus numeros positivos é %d\n", soma);
    return 0;
}