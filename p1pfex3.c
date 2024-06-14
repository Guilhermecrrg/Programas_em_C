#include <stdio.h>

int main(void) {

    int n1, n2, n3;
    int menor, maior;

    scanf("%d %d %d", &n1, &n2, &n3);

    if(n1 > n2) {
        if (n1 > n3 ) {
            maior = n1;
            if (n2 < n3) {
                menor = n2;
            }
            else {
                menor = n3;
            }
        }
        else {
            maior = n3;
            menor = n2;
        }
    }
    else {
        if(n2 > n3) {
            maior = n2;
            if (n1 < n3) {
                menor = n1;
            }
            else {
                menor = n3;
            }
        }
        else {
            maior = n3;
            menor = n1;
        }
    }

    printf("%d e %d", menor, maior);

    return 0;
}
