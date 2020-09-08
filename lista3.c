#include <stdio.h>
#include <stdlib.h>

int main () {
    int km;
    int litros;
    int medio;


printf("Vamos calcular quantos litros de gasolina seu carro consome por km? Insira a distância percorrida em km:");
scanf ("%d", &km);
printf ("Agora informe quantos litros de gasolina foram consumidos durante o trajeto:");
scanf("%d", &litros);
medio = (km/litros);
printf ("O seu carro consome em média %d litros de gasolina por km percorrido!\n", medio);

    return 0;
}