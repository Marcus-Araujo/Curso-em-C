#include <stdio.h>
#include <stdlib.h>

int main () {

    int idade1;
    int idade2;
    int produto;

printf ("Digite sua idade:");
scanf ("%d", &idade1);
printf("Agora digite a idade de sua mãe:");
scanf ("%d", &idade2);
produto = (idade1 * idade2);
printf("Multiplicando sua idade pela da sua mãe temos : %d\n", produto);


    return 0;
}