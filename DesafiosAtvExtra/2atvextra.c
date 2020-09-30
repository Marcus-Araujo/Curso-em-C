#include <stdio.h>
#include <stdlib.h>

int main () {
     int num1;
     int num2;
     int maior;
 // Escreva um programa que leia 2 números inteiros e imprima o maior na variável "maior"

printf ("informe dois números inteiros :  ");
scanf ("%d %d", &num1, &num2);
if (num1!=num2) { 
    if (num1>num2) {
        (maior = num1); printf ("O maior valor é %d\n", maior);
    }else { (maior = num2); printf ("O maior é %d\n", maior);}
}else { printf ("Seus números são iguais\n");}

    return 0; 
}