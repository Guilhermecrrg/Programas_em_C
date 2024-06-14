#include <stdio.h>

    int main() {

    int a[6], b[6];
    int i;

    for(i=1; i<6; i++) {
        printf("A[%i] = ", i);
        scanf("%i", &a[i]);
    }
    for(i=1; i<6; i++) {
        printf("B[%i] = ", i);
        scanf("%i", &b[i]);
    }
    for(i=1; i<6; i++) {
        printf("%iº elemento de A = %i\n", i, a[i]);
        printf("%iº elemento de B = %i\n", i, b[i]);
    }

    return 0;
}
