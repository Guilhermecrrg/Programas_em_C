#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int numeros[n];

    for (int i = 0; i < n; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Primeiros %d numeros na ordem digitada:\n", n/2);

    for (int i = 0; i < n/2; i++) {
        printf("%d\n", numeros[i]);
    }

    printf("Ultimos %d numeros na ordem contraria a digitada:\n", n/2);

    for (int i = n - 1; i >= n/2; i--) {
        printf("%d\n", numeros[i]);
    }

    return 0;
}
