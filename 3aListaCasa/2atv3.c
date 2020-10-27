#include <stdio.h>
#include <stdlib.h>

int main () {
 char genero;
/*Faça um programa que informe se alguém é não binarie.
Utilizar os mesmos atributos ‘f’ e ‘m’ usados em exercícios anteriores.*/
printf ("Informe seu gênero, 'f', 'm' ou 'o', para outro:");
scanf ("%s", &genero);

if ((genero == 'f') || (genero == 'm')) {
    printf ("Você é cis genero");
}else { printf ("Você é não binário!");}

    return 0;
}