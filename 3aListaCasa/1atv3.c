#include <stdio.h>
#include <stdlib.h>

int main () {
    int idade;
    int nota;
//Faça um programa que indique se alguém conseguirá sua carteira de motorista. 
//Para que o usuário seja aprovado ele deve ser maior de idade e tirar acima de 7.0 na prova de direção. 

printf (" Verificação de resultado da Carteira de Motorista \n");
printf ("Insira sua idade: ");
scanf ("%d", &idade);
printf ("Idique sua nota na prova de direção:");
scanf ("%d", &nota);

if ((nota >= 7) && (idade >= 18)) {
    printf ("Você recebera a carteira de motorista \n");
} else {
    printf ("Você não está apto \n");
}
    return 0;
}