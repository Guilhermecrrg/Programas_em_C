#include <stdio.h>

    int main() {

    float n[11];
    int i, numeros_c = 0;

    for(i=1; i<11; i++) {
        printf("n[%i] = ", i);
        scanf("%f", &n[i]);
    }
    for(i=1; i<11; i++) {
        if(i%2!=0){
            n[i] = n[i] * 2;
            printf("n[%i] = %.2f\n", i, n[i]);
        }
        else if(i%2==0){
            n[i] = n[i] / 2;
            printf("n[%i] = %.2f\n", i, n[i]);
        }
    }

    return 0;
}
