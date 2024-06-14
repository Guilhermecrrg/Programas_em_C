#include<stdio.h>

    int main(){

    int n[4];

    for(int i=0; i<5; i++){
        scanf("%i", &n[i]);
    }
    for(int i=0; i<5; i++){
        if(n[i]<0){
            n[i] = 0;
        }
    }
    for(int i=0; i<5; i++){
        printf("%i\n", n[i]);
    }



    return 0;
    }

