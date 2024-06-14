#include <stdio.h>

int main() {

     int dias = 0;
     int ano = 0;
     int mes = 0;

     scanf("%i", &dias);
     ano = dias / 365;
     mes = (dias % 365) / 30;
     dias = (dias % 365) % 30 ;

     printf("%i ano(s)\n%i mes(es)\n%i dia(s)\n", ano, mes, dias);


    return 0;
}
