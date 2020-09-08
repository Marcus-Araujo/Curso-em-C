#include <stdio.h>
#include <stdlib.h>

int main () {
    float segundos;
    float conversaoh = 3600;
    float conversaom = 60;
    float hora;
    float min;

printf ("Informe, em segundos, o tempo passado entre seu café da manhã e seu almoço:");
scanf ("%d", &segundos);
min = (segundos/conversaom);
hora = (hora/conversaoh);
printf ("O intervalo entre suas refeições em horas é de %f", hora);

    return 0;
}
