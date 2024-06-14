#include<stdio.h>

    int main(){

    int ovos;
    float valorovo = 3.50;
    float valortotal = 0;
    scanf("%i", &ovos);
    if (ovos>9) valorovo = 2.50;
    valortotal = valorovo * ovos;
    printf("Valor total da compra R$ %.2f\n", valortotal);


    return 0;
    }
