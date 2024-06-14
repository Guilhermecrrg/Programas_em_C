#include <stdio.h>
#include <time.h>

int menu(void);
void gerar_valores(int, int[*][*]);
void exibir_valores(int, int[*][*]);
int maior_valor(int, int[*][*], int*, int*);

int main() {
    int N, opcao=1;
    printf("Entre com o tamanho da matriz: ");
    scanf("%d", &N);
    int matriz[N][N];
    opcao = menu();
    int pos_linha, pos_coluna, maior;
    while(opcao!=5) {
        switch(opcao) {
            case 1: gerar_valores(N,matriz);
                    printf("Valores gerados com sucesso!\n");
                    break;
            case 2: exibir_valores(N,matriz);
                    break;
            case 3: printf("Maior valor %d\n", maior_valor(N, matriz, &pos_linha, &pos_coluna));
                    printf("Linha %d e Coluna %d\n", pos_linha, pos_coluna);
                    break;
            case 4: //diagonal
                    break;
            case 5: printf("Obrigado por usar este pgm\n");
                    break;
            default: printf("Opcao invalida\n");
        }
        if(opcao == 5) break;
        opcao = menu();
    }
    return 0;
}

int menu() {
    int op=-1;
    printf("\n======================\n");
    printf("1- Gerar valores aleotorios\n");
    printf("2- Exibir valores\n");
    printf("3- Maior valor e posicao (linha e coluna)\n");
    printf("4- Exibir Diagonal principal\n");
    printf("5- Sair\n");
    printf("Digite opcao: ");
    scanf("%d", &op);
    return op;
}

void gerar_valores(int lim, int m[lim][lim]){
    srand(time(NULL));
    int i, j;
    for(i=0; i<lim;i++){
        for(j=0;j<lim;j++){
            m[i][j] = rand()%100;
        }
    }
}

void exibir_valores(int lim, int m[lim][lim]) {
    int i,j;
    for(i=0; i<lim;i++){
        for(j=0;j<lim;j++){
            printf("%4d", m[i][j]);
        }
        printf("\n");
    }
}

int maior_valor(int lim, int m[lim][lim], int *l, int *c) {
    int i, j, maior = m[0][0];
    for(i=0; i<lim;i++){
        for(j=0;j<lim;j++){
            if(maior < m[i][j]) {
                maior = m[i][j];
                *l = i;
                *c = j;
            }
        }
    }
    return maior;
}
