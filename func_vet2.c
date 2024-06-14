#include <stdio.h>

void ordenar_cresc(int[3]);
void entrada(int[3]);
void exibir(int[3]);
int menor_valor(int[3]);

void entrada(int vet[3]) {
    int i;
    for(i=0; i<3; i++) {
        scanf("%d", &vet[i]);
    }
}

void ordenar_maior(int vet[3]) {
    int aux=0;
    int i;
    for(i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(vet[i] < vet[j]) {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
}

void exibir(int vet[3]) {
    int i;
    for(i=0; i<3; i++) {
        printf("%i\n", vet[i]);
    }
}

int menor_valor(int vet[3]) {
    int i, menor = vet[0];
    for(i=0; i<3; i++) {
        if(menor > vet[i]) {
            menor = vet[i];
        }
    }
    return menor;
}

int main(void) {
    int dados[3];

    entrada(dados);
    printf("-\n");
    exibir(dados);
    printf("-\n");
    ordenar_maior(dados);
    printf("-\n");
    exibir(dados);
    int min = menor_valor(dados);
    printf("Menor = %d\n", min);
    return 0;
}
