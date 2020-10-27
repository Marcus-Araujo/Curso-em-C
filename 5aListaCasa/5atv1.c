#include <stdio.h>
#include <stdlib.h>

int main () {
    int num [20];
    int i;
    int j;
    int maior=0;
    int menor=600;
    int pos1;
    int pos2;
    int pos3;
    int igual;
/*Escreva um programa que receba do usuário um vetor com 20 valores inteiros e apresente o maior, 
o menor e suas respectivas posições em que os mesmos foram informados. 
Caso existam números iguais mostre a posição da ultima ocorrência.*/

    printf ("Digite 20 numero inteiros: ");
    for (i=0;i<20;i++){
        scanf ("%d", &num[i]);
            if (num[i]>maior){
                maior = num [i];
                pos1=i;
            } 
            if (num[i]<menor){
                menor = num[i];
                pos2 =i;
            }
            /*if ((num [i] == maior)||(num [i]== menor)){
                igual = num [i];
                pos3 = i;
            }*/  
    }
    for (i=0;i<20;i++){
        for (j=(i+1);j<20;j++){
            if (num [i] == num [j]){
                igual = num [i];
                pos3 = i;
                 printf ("O número %d se repete, e aparece primeiro na posição %d \n", igual, pos3);
            }
        }
    printf ("Seu maior número é %d, que está na posição %d \n", maior, pos1);
    printf ("Seu menor número é %d, e está na posição %d \n", menor, pos2);
    
    return 0;
}