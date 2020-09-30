#include <stdio.h>
#include <stdlib.h>

int main () {
    int numero1;
    int numero2;
    int soma;

printf ("digite um número de 0 a 10: ");
scanf ("%d", &numero1);
printf ("agora digite um segundo número de 0 a 50:");
scanf ("%d", &numero2);
soma = (numero1 + numero2);
printf ("Somando %d e %d temos: %d", numero1, numero2, soma);

    return 0;
}
