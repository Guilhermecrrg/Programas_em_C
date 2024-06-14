#include <stdio.h>

int main() {
    double valor;
    int notas[6] = {100, 50, 20, 10, 5, 2};
    double moedas[6] = {1.0, 0.5, 0.25, 0.1, 0.05, 0.01};
    int quantidadeNotas[6] = {0, 0, 0, 0, 0, 0};
    int quantidadeMoedas[6] = {0, 0, 0, 0, 0, 0};

    scanf("%lf", &valor);

    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        quantidadeNotas[i] = (int) (valor / notas[i]);
        printf("%d nota(s) de R$ %d.00\n", quantidadeNotas[i], notas[i]);
        valor -= quantidadeNotas[i] * notas[i];
    }

    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        quantidadeMoedas[i] = (int) (valor / moedas[i]);
        printf("%d moeda(s) de R$ %.2lf\n", quantidadeMoedas[i], moedas[i]);
        valor -= quantidadeMoedas[i] * moedas[i];
    }

    return 0;
}
