#include <stdio.h>

int main() {

    int n, i, j=0, c=0;
    int x[15];
    int par[5];
    int impar[5];

    for(i=0; i<15; i++){
        scanf("%i", &x[i]);
    }
    for(i=0; i<15; i++){
        n = x[i];
        if(n%2==0){
            par[j] = n;
            j++;
        }
         else if(j==5){
            for(j=0; j<5; j++){
                printf("par[%i] = %i\n", j, par[j]);
            }
            j=0;
          }
        if(n%2!=0){
            impar[c] = n;
            c++;
        }
        else if(c==5){
            for(c=0; c<5; c++){
                printf("impar[%i] = %i\n", c, impar[c]);
            }
            c=0;
          }
    }
    for(i=0; i<c; i++){
        printf("impar[%i] = %i\n", i, impar[i]);
    }
    for(i=0; i<j; i++){
        printf("par[%i] = %i\n", i, par[i]);
    }
    return 0;
}
