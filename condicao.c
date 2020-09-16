#include <stdio.h>
#include <stdlib.h>

int main( ) {

    int numero;

    printf( "digite um numero inteiro:");
    scanf ("%d", &numero);

    if ((numero%5) == 0) {
        printf ("Seu número é divisível por 5\n");
        }if ((numero%3) == 0) {
            printf (" Seu número é divisível por 3 \n");
        }
     else {
            printf (" Seu número não é divisível por 3 nem por 5 \n");
        }
    return 0;
}