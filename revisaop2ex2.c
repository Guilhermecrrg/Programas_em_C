#include<stdio.h>

    int main(){
    int w, i;

    printf("Entre com a quantidade: ");
    scanf("%i", &w);

    float n[w];

    for(i=0; i<w; i++){
        scanf("%f", &n[i]);
    }
    printf("Maiores que 10.5 -> ");
    w--;
    for(i=0; i<=w; i++){
       if (n[i] > 10.5) {
            if (i != w) {
                printf("%.2f - ", n[i]);
            } else {
                printf("%.2f", n[i]);
            }
        }
    }

    printf("\n");

    return 0;
    }

