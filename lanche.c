#include<stdio.h>

    int main () {

        int cod,quant;
        float total;
        scanf("%i %i", &cod, &quant);
        switch (cod) {
        case 1 : total= quant*4; printf("Total: R$ %.2f\n",total);
               break;
        case 2 : total= quant*4.5; printf("Total: R$ %.2f\n",total);
               break;
        case 3 : total= quant*5; printf("Total: R$ %.2f\n",total);
               break;
        case 4 : total= quant*2; printf("Total: R$ %.2f\n",total);
               break;
        case 5 : total= quant*1.5; printf("Total: R$ %.2f\n",total);
               break;
               }
     return 0;
    }
