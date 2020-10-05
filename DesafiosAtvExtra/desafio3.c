/* Escreva um programa que exiba apenas os números pares entre 0 e 100.dica: usar while e if/else.*/
#include <stdio.h>
#include <stdlib.h>

int main () {
    int num=0;
   
    if (num%2==0){
        while (num<=100){ printf ("%d\n", num);
        num = num + 2;}
    }


    return 0;
}