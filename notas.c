#include<stdio.h>

 int main () {

    float nota1, nota2, media;
    scanf("%f %f", &nota1, &nota2);
    media = (nota1 + nota2) /2;
    if (media >= 5) {
        printf("Aprovado\nmedia = %.2f", media);
    }
     else {
        printf("Reprovado\nmedia = %.2f", media);
     }


   return 0;
 }
