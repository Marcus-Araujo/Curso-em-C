#include <stdio.h>
#include <stdlib.h>

int main (){
/*azer a soma dos
elementos de
determinada linha de
uma matriz 4X4.*/
int num[4][4];
int i;
int j;
int soma=0;

printf ("Indique 4 notas para uma série. Faça isso 4 vezes, cada uma para uma série (no total 16 numeros):\n ");
for(i=0;i<4;i++){
    for (j=0;j<4;j++){
        scanf ("%d", &num[i][j]);
        soma = (soma + num [i][j]);
    } printf ("\nA soma das notas da série %d é %d\n", i+1,soma);
}

    return 0;
}