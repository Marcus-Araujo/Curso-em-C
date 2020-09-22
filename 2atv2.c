#include <stdio.h>
#include <stdlib.h>

int main () {
    int numero;

printf (" Digite um número: ");
scanf ("%d", &numero);

if (numero%2 == 0) {
    printf ("Seu número é par! \n");
}else {
    printf ("Seu número é ímpar\n");
}
    return 0;
}