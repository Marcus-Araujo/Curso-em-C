#include <stdio.h>
#include <stdlib.h>

int main () {
    int num;

    printf("Insira um número inteiro: ");
    scanf ("%d", &num);
    if ((num>=0)&&(num<=100)){
        if ((num>0)&&(num<=25)) { printf ("Seu número está no intervalo 1, entre 0 e 25\n");}
        if ((num>25)&& (num<=50)){printf ("Seu número está no intervalo 2, de 26 a 50 \n");}
        if ((num>50)&& (num<=75)){printf ("Seu número está no intervalo 3, de 51 a 75 \n");}
        if ((num>75)&& (num<=100)){printf ("Seu número está no intervalo 4, de 76 a 100 \n");}
    }else { printf ("Seu número não se encontra em nenhum dos quatro intervalos de 0 a 100 \n");}

    return 0;
}