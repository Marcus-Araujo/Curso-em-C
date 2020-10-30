#include <stdio.h>
#include <stdlib.h>
int main () {
/*Dadas as temperaturas que foram registradas
diariamente durante uma semana, deseja-se determinar em
quantos dias dessa semana a temperatura esteve acima da
média.*/
    int media;
    int soma =0;
    int temp [7];
    int i;
    printf ("Informe a temperatura média de cada dia da semana:");
    for(i=0;i<7;i++){
        scanf ("%d", &temp[i]);
        soma = (soma + temp [i]);
    }
    media = (soma/7);
    printf ("A média das temperaturas da semana é de %d\n", media);

    return 0;
}