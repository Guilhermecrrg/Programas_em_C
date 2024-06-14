#include<stdio.h>

   int main () {

     float saldo = 0;
     float credito = 0;

     scanf("%f", &saldo);
     if (saldo > 5000) {
     credito = (saldo * 2);
     printf("Valor do credito = %.2f", credito);
     }
     else if (saldo <= 5000 && saldo > 3000) {
     credito = (saldo * 1.5);
     printf("Valor do credito = %.2f", credito);
     }
     else if (saldo <= 3000 && saldo > 2000) {
     credito = (saldo * 1);
     printf("Valor do credito = %.2f", credito);
     }
      else if (saldo <= 2000) {
     credito = (saldo * 0.75);
     printf("Valor do credito = %.2f", credito);
     }



     return 0;
   }
