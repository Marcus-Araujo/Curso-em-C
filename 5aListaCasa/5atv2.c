#include <stdio.h>
#include <stdlib.h>

int main (){
//imprima números aleatórios inseridos pelo usuário de trás para frente.
    int num [500];
    int i;
    int n;
    printf ("indique quantos números deseja utilizar:");
    scanf ("%d", &n);
    printf ("Insira uma sequencia de números:");
    for (i=0;i<n;i++) {
        scanf ("%d", &num[i]);
    } printf ("Seus números em ordem inversa: \n");
    for (i=(n-1);i>=0;i--){
        printf ("%d \n", num[i]);
    }
    return 0;
}