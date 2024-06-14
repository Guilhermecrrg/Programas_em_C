#include <stdio.h>

    int main() {

    float a[10], b[10];
    int i, numeros_c = 0;

    for(i=0; i<10; i++) {
        printf("A[%i] = ", i);
        scanf("%f", &a[i]);
    }
    for(i=0; i<10; i++) {
        printf("B[%i] = ", i);
        scanf("%f", &b[i]);
    }
    for(i=0; i<10; i++) {
        if(a[i] == b[i]){
            numeros_c++;
        }
    }
    printf("A e B possuem %i numeros em comum\n",  numeros_c);

    return 0;
}
