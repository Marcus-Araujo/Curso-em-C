#include <stdio.h>
#include <stdlib.h>

int main () {

    int numero1;
    int numero2;

    printf ("Digite um número inteiro:");
    scanf ("%d", &numero1);
    printf ("Agora informe um segundo número:");
    scanf ("%d", &numero2);

    if (numero1 != numero2) {
        if (numero1 > numero2) { printf ("%d é maior que %d \n", numero1, numero2);}
        else { printf ("%d é maior que %d \n", numero2, numero1);}
       
    }else {
        printf ("Seus números são iguais, tente novamente\n");
    }


    return 0;
}