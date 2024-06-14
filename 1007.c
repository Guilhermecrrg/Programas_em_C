#include <stdio.h>

int main() {

    int A, B, C, D;
    int diferenca = 0;
    scanf("%i %i %i %i", &A, &B, &C, &D);
    diferenca = (A * B - C * D);
    printf("DIFERENCA = %i\n", diferenca);
    return 0;
}
