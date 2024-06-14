#include <stdio.h>

int main() {

    int n, h;
    float vh, salario;
    scanf("%i %i %f", &n, &h, &vh);
    salario = h * vh;
    printf("NUMBER = %i\nSALARY = U$ %.2f", n, salario);

    return 0;
}
