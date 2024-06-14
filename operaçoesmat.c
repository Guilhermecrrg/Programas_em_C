#include <stdio.h>
      int main () {
         int a = 5;
         int b = 2;
         float c = 0;
         scanf("%i %i", &a, &b);
         c = a - b;

         if(c>0) {
               //quando c > 0 for verdadeiro
             printf("Positivo!\n");
         }
         else {
               //quando c > 0 for falso
             if(c== 0) {
             printf("Nulo!\n");
               }
             else {
             printf("Negativo!\n");
             }
         }
          return 0;
      }
