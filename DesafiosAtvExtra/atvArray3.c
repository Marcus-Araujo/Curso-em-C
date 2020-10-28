#include <stdio.h>
#include <stdlib.h>

int main () {
/*m programa que .lê 1
número e o coloca na 1a
posição do array.Em cada
posição seguinte, coloque o
dobro do valor da posição
anterior.*/
int i;
int num;
int fila [10];

printf ("Insira um número inteiro: ");
scanf ("%d", &num);
fila[0]=num;
for (i=1;i<10;i++){
    fila[i]= (fila [i-1]*2);
    printf ("O dobro do valor anterior é %d\n", fila[i]);
} 
    return 0;
}