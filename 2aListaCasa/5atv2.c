#include <stdio.h>
#include <stdlib.h>

int main () {
    int numero;

 printf ("Informe um número inteiro:");
 scanf ("%d", &numero);

if (numero%5 == 0) {
    printf("Seu número é divisível por 5\n");
}else {
    printf("Seu número não é divisível por 5, tente novamente! \n");
}
    return 0;
}