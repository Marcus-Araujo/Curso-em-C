#include <stdio.h>
#include <stdlib.h>

int main (){
// a=97 z=122
   char letra = 'a';
   int i;
   for (i = 97; i <=122; i++) {
       printf ("%c \n", letra);
       letra++;
   }
    return 0;
}