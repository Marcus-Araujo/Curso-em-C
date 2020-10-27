 #include <stdio.h>
 #include <stdlib.h>

 int main(){
     float nota1;
     float nota2;
     float nota3;
     float media;
     float soma;
     int provas = 3;
     int nFaltas;
     int NumAlunos = 3;
     int i;
    
    for (i=1; i <= 3; i++){
        printf ("insira nota da primeira prova do %d aluno:  ", i);
        scanf ("%f", &nota1);
        printf ("insira nota da segunda prova do %d aluno:  ", i);
        scanf ("%f", &nota2);
        printf ("insira a terceira nota do %d aluno:  ", i);
        scanf("%f", &nota3);
        printf ("Insira suas faltas: ");
        scanf("%d", &nFaltas);
        printf ("suas notas são: %f, %f, %f \n", nota1, nota2, nota3);
     soma = (nota1 + nota2 + nota3);
     media = (soma/provas);
     printf ("Sua média foi %f\n", media);

     if ((media >= 7.0) && (nFaltas<12)) {
         printf ("voce foi aprovado!\n");
     } else {
         if ((media < 5.0) || (nFaltas >= 12)) {
             printf ("vc está reprovado\n");
        }
             else {
                 printf ("voce está na final\n");

             }
     }
    }
     


    return 0; 
 }



