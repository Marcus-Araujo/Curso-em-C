#include <stdio.h>
#include <stdlib.h>

int main () {
/*aça um programa que informe se alguém é não binarie.
Utilizar os mesmos atributos ‘f’ e ‘m’ usados em exercícios
anteriores.*/
    char gen;
    printf ("OI vida, informe seu gênero, sendo M para masculino, F para feminino e O se não se identificar com nenhum dos rotulos anteriores: \n");
    scanf ("%c", &gen);

    if (gen == 'O'){
        printf ("Boa noite senhorx, vc é não binarie! \n");
    }else { printf ("Vc é cis");}
    return 0;
}