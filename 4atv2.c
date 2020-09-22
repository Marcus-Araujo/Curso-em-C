#include <stdio.h>
#include <stdlib.h>

int main () {
    int numero1;

    printf ("digite um número inteiro: ");
    scanf ("%d", &numero1);
   
 if (numero1 >= 20) { 
     if (numero1 <= 90){ printf ("Seu número está no intervalo entre 20 e 90! \n");}
     else { printf ("Seu número é maior que 90 \n");}

 }else { printf ("Seu número está fora do intervalo de 20 a 90 \n");}

    return 0;
}