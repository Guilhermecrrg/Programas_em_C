#include <stdio.h>

int main() {

    float n[10];
    int i;

    for(i=0; i<10; i++) {
        scanf("%f", &n[i]);

    }

    for (i=0; i<10; i++) {
        printf("X[%i] = %f\n", i, n[i]);
    }


    return 0;
}
