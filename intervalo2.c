#include <stdio.h>

int main() {

     float A=0;
     scanf("%f", &A);
     if(A>=0 && A<=25){
        printf("Intervalo [0,25]\n");
        return 0;  }
     if(A>25 && A<=50){
        printf("Intervalo [25,50]\n");
        return 0;  }
     if(A>50 && A<=75){
        printf("Intervalo [50,75]\n");
        return 0;  }
     if(A>75 && A<=100){
     printf("Intervalo [75,100]\n");
        return 0;  }
     else  {
     printf("Fora de intervalo\n");
       return 0;   }
    return 0;
}
