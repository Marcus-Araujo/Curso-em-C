#include <stdio.h>
#include <stdlib.h>

int main () {
    int nascimento;
    int ano;
    int idade;

    printf("Vamos adivinhar sua idade! Não acredita? digite o ano de seu nascimento:");
    scanf("%d", &nascimento);
    printf("Agora informe que em que ano estamos:");
    scanf("%d", &ano);
    idade = (ano - nascimento);
    printf(" Você tem %d anos de idade\n", idade);

    return 0;
} 