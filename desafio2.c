#include <stdio.h>
#include <stdlib.h>

int main () {
    int A;
    int B;
    int C;
    int D;

    printf ("Digite quatro número inteiros: \n");
    scanf ("%d %d %d %d", &A, &B, &C, &D);

    if (B>C) {
        if (D>A){
            if ((C+D)>(A+B)){
                if (C > 0) {
                    if (D > 0) {
                        if (A%2 == 0) { printf ("Valores aceitos! \n");}
                    }else {printf ("Valores não aceitos \n");}
                }else { printf ("Valores não aceitos \n");}

            } else { printf ("Valores não aceitos \n");}

        }else { printf ("Valores não aceitos \n");}

    }else {
        printf ("Valores não aceitos \n");
    }

    return 0;
}