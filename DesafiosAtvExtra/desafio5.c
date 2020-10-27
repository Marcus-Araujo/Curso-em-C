#include <stdio.h>
#include <stdlib.h>

int main (){
    int num1;
    int num2;
    int result;

    for(num1=1;num1<=5;num1++){
        for (num2=1;num2<=10;num2++){
            result = (num1 * num2);
            printf ("%d x %d é igual a %d\n", num1, num2, result);
        }
    }


    return 0;
}