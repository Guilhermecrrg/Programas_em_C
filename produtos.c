#include <stdio.h>

 int main () {

     int p1, p2, p3;
     float v1, v2, v3;
     float total;
     printf("Quantidade do produto 1: ");
            scanf("%d", &p1);
     printf("Valor do produto 1: ");
            scanf("%f", &v1);
     printf("Quantidade do produto 2: ");
            scanf("%d", &p2);
     printf("Valor do produto 2: ");
            scanf("%f", &v2);
     printf("Quantidade do produto 3: ");
            scanf("%d", &p3);
     printf("Valor do produto 3: ");
            scanf("%f", &v3);
     total = (p1*v1) + (p2*v2) + (p3*v3);
     printf("Valor total: %.2f", total);
     return 0;
 }
