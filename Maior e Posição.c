#include <stdio.h>

int main() {

    int valores[100];
    int maior = 0;
    int linha, i;
    for(i=0; i<100; i++){
        scanf("%i", &valores[i]);
        if (valores[i] > maior) {
            maior = valores[i];
            linha = i+1;
        }
    }
    printf("%i\n", maior);
    printf("%i\n", linha);
    return 0;
}
