#include <stdio.h>

int main() {
    int a, b, menor;
    scanf("%d %d", &a, &b);
    menor = a;
    while (a != b) {
        if (b < menor) {
            menor = b;
        }
        scanf("%d %d", &a, &b);
    }
    printf("Menor: %d\n", menor);
    return 0;
}
