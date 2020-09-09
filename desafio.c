#include <stdio.h>
#include <stdlib.h>

int main () {
    int divida;
   int cem;
   int cinq;
   int vint;
   int dez;
   int cinco;
   int dois;
   int um;

printf("Quanto você deve ao banco? ");
scanf("%d", &divida);
cem = (divida/100);
printf ("%d notas de R$ 100 \n", cem);
divida = (divida%100);
cinq = (divida/50);
printf ("%d cédulas de R$ 50 \n", cinq);
divida = (divida%50);
vint = (divida/20);
printf ("%d cédulas de R$ 20 \n", vint);
divida = (divida%20);
dez= (divida/10);
printf ("%d cédulas de R$ 10 \n", dez);
divida = (divida%10);
cinco= (divida/5);
printf(" %d cédulas de R$ 5 \n", cinco);
divida = (divida%5);
dois = (divida/2);
printf ("%d cédulas de R$ 2 reais \n", dois);
divida = (divida%1);
um = (divida/1);
printf ("%d cédulas de R$ 1 \n", um);




    return 0;
}