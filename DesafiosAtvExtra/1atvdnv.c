#include <stdio.h>
#include <stdlib.h>

int main () {

//Dado um ano de nascimento, determinar idade.
    int idade;
    int ano;
    printf ("Indique seu ano de nascimento e retornaremos com sua idade vida!: \n");
    scanf ("%d", &idade);
    printf ("Você quer saber sua idade em que ano? \n");
    scanf ("%d", &ano);
    idade = (ano - idade);
    printf ("Sua idade no ano %d é %d\n", ano, idade);
    return 0;
}