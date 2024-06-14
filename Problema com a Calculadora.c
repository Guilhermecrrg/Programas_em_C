#include <stdio.h>
#include <string.h>

int main() {
    int n, i, j;
    scanf("%i", &n);

    char m[n][15];
    int soma[n];

    for (i = 0; i < n; i++) {
        scanf("%s", m[i]);
    }

    for (i = 0; i < n; i++) {
        int numeros[3] = {0};
        int count = 0;
        int soma_linha = 0;

        for (j = 0; j < 14; j++) {
            if (m[i][j] >= '0' && m[i][j] <= '9') {
                numeros[count] = numeros[count] * 10 + (m[i][j] - '0');
                if (count < 2 && m[i][j + 1] < '0' || m[i][j + 1] > '9') {
                    count++;
                }
            }
        }

        soma_linha = numeros[0] + numeros[1] + numeros[2];
        soma[i] = soma_linha;
    }

    for (i = 0; i < n; i++) {
        printf("%d\n", soma[i]);
    }

    return 0;
}
