#include <stdio.h>
#include <stdlib.h>

int main () {
//Faça um programa para ler um número inteiro e
//informar se o número é par ou ímpar.
    int num;
    printf ("insira um número inteiro:");
    scanf ("%d", &num);
    if (num%2 == 0){
        printf ("O número %d é par\n", num);
    }else { printf ("O número %d é ímpar \n", num);}
    return 0;
}
