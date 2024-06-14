#include<stdio.h>

    int main() {

     int mes;
     scanf("%i", &mes);
       if(mes==1||3||5||7||8||10||12){
        printf("31 dias\n");
       }
       else if(mes==2){
       printf("28 dias\n");
       }
       else if(mes==4||6||9||11){
       printf("30 dias\n");
       }

     return 0;
    }
