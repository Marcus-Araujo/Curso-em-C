#include <stdio.h>
#include <stdlib.h>

int main () {

    int numero1;
    int numero2;

    printf (" Insira um número:");
    scanf ("%d", &numero1);
    printf (" Insira um segundo número:");
    scanf ("%d", &numero2);
    
    if (numero1 == numero2) {
        printf ("Seus números são iguais \n");
    } else {
        printf ("Seus números são diferentes, tente novamente! \n");
    }

    return 0;
}