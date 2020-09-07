 #include <stdio.h>
 #include <stdlib.h>

 int main(){
     float nota1;
     float nota2;
     float nota3;
     float media;
     float soma;
     int provas = 3;
    
     printf ("insira nota da primeira prova:  ");
     scanf ("%f", &nota1);
     printf ("insira nota da segunda prova:  ");
     scanf ("%f", &nota2);
     printf ("insira a terceira nota: ");
     scanf("%f", &nota3);
     printf ("suas notas são: %f, %f, %f \n", nota1, nota2, nota3);
     soma = (nota1 + nota2 + nota3);
     media = (soma/provas);
     printf ("sua média é de %f \n", media);


    return 0; 
 }



