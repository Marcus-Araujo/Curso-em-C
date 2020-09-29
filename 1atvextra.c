#include <stdio.h>
#include <stdlib.h>
 
 int main () {
    int num;

/* Escreva um programa em C que leia um número inteiro e devolve o seu valor absoluto. */
 printf ("Insira um número inteiro e diremos seu valor Habsoluto: ");
 scanf ("%d", &num);

 if (num < 0) { 
     num =(num * (-1)); printf ("Seu valor absoluto é %d \n", num);
} else { printf ("Seu valor absoluto é %d \n", num); }
 
 return 0;
 } 