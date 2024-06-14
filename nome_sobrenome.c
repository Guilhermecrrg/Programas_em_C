#include <stdio.h>
#include <string.h>

int main(void) {

    char nome[30];
    int pnome, unome, tamanho;

    scanf("%30[^\n]", &nome);

    tamanho = strlen(nome);

    int i;

    for(i=0; i < tamanho; i++) {
        if(nome[i] == 32) {
            pnome = i;
            break;
        }
    }

    for(i=tamanho; i > 0; i--) {
        if(nome[i] == 32) {
            unome = i;
            break;
        }
    }

    for(i=unome+1; i < tamanho; i++) {
        printf("%c",nome[i]);
    }

    printf(", ");

    for(i=0; i < pnome ; i++) {
        printf("%c", nome[i]);
    }

    printf("\n");

    return 0;
}
