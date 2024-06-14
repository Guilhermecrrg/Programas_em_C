#include <stdio.h>

int main() {

    int cod, num, cod2, num2;
    float val, val2, pago;
    scanf("%i %i %f", &cod, &num, &val);
    scanf("%i %i %f", &cod2, &num2, &val2);
    pago = (num * val) + (num2 * val2);
    printf("VALOR A PAGAR: R$ %.2f\n", pago);
    return 0;
}
