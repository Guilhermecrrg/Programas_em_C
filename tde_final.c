#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char ler(char dados [5570][6]);

    int main (){
    int i,j;
    char dados[5570][6];

    ler(dados);
    dados [5570][6] = ler(dados);
    for(i=0; i<5570; i++){
        for(j=0; j<6; j++){
            printf("%s", dados[i][j]);
        }
    }
    printf("\n");




    return 0;
    }

char ler(char dados [5570][6]) {
    FILE *arquivo;
    int i = 0;
    char tamanho[100];
    char *token;
    arquivo = fopen("PIB.csv", "r");

    if (arquivo == NULL) {
        printf("Erro! Não consegui abrir o arquivo de leitura");
        return;
    }

    while (fgets(tamanho, 100, arquivo) != NULL) {
        puts(tamanho);
        token = strtok(tamanho, ",");
        dados[i][0] = (token, NULL);
        token = strtok(tamanho, ",");
        dados[i][1] = (token, NULL);
        token = strtok(tamanho, ",");
        dados[i][2] = (token, NULL);
        token = strtok(tamanho, ",");
        dados[i][3] = (token, NULL);
        token = strtok(tamanho, ",");
        dados[i][4] = (token, NULL);
        token = strtok(tamanho, ",");
        dados[i][5] = (token, NULL);
        i++;
    }
    fclose(arquivo);
}


