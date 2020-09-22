#include <stdio.h>
#include <stdlib.h>

int main () {
    char genero;

printf ("Informe seu gênero:\n f, para feminino; \n m, para masculino; \n o, para outro; \n Sua resposta: ");
scanf ("%c", &genero);

    if (genero == 'f') {
        printf ("dirija-se ao banheiro feminino\n");
    }
    else {
        if (genero == 'm') {
            printf ("Dirija-se ao banheiro masculino\n");
        }
        else {
            printf ("Dirija-se ao banheiro neutre \n");
        }
    }
    return 0;
}