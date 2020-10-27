#include <stdio.h>
#include <stdlib.h>

int main () {
/*Dadas as temperaturas que foram registradas diariamente durante uma semana, 
deseja-se determinar em quantos dias dessa semana a temperatura esteve acima da média.*/
    int temp [7];
    int i;
    int media;
    int soma=0;
    int dias=1;

    printf ("Informe as temperaduras médias de cada dia da semana:");
    for (i=0;i<7;i++){
        scanf ("%d", & temp[i]);
        soma= (soma + temp [i]);
    //} while ((i >= 0)&&(i<7)){    
    }
    media = (soma/7);
    for (i=0;i<7;i++){
        if (temp[i]>media){
            dias ++;
            } }printf ("A temperatura diária foi maior do que a média semanal em %d dias \n", dias);

    return 0;
}