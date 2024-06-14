#include<stdio.h>

    int main() {

     float num;
     scanf("%f", &num);
     if(num<0) { num=num*-1; printf("%.f",num);
     }
     else if(num>0) {
            num=num*100; printf("%.f",num);
     }
    return 0;
    }
