#include <stdio.h>

int main(void) {

    int n;

    scanf("%d", &n);

    //matriz n linhas por 3 colunas (dia mes e ano)
    int data[n][3];

    for(int i=0; i<n; i++) {
        scanf("%d %d %d", &data[i][0], &data[i][1], &data[i][2]);
    }

    for(int i=0; i<n; i++) {
        printf("Linha %d: %d/%d/%d\n", i, data[i][0], data[i][1], data[i][2]);
    }


    int vet[3];
    for(int i=0; i<n; i++) {
        for(int j=0; j < n; j++) {
            if(data[i][2] < data[j][2]) {
                vet[0] = data[i][0];
                vet[1] = data[i][1];
                vet[2] = data[i][2];
                data[i][0] = data[j][0];
                data[i][1] = data[j][1];
                data[i][2] = data[j][2];
                data[j][0] = vet[0];
                data[j][1] = vet[1];
                data[j][2] = vet[2];
            }
            else if(data[i][2] == data[j][2] && data[i][1] < data[j][1]) {
                vet[0] = data[i][0];
                vet[1] = data[i][1];
                data[i][0] = data[j][0];
                data[i][1] = data[j][1];
                data[j][0] = vet[0];
                data[j][1] = vet[1];
            }
            else if(data[i][2] == data[j][2] && data[i][1] == data[j][1] && data[i][0] < data[j][0]) {
                vet[0] = data[i][0];
                data[i][0] = data[j][0];
                data[j][0] = vet[0];
            }
        }
    }

    for(int i=0; i<n; i++) {
        printf("%d %d %d\n",data[i][0], data[i][1], data[i][2]);
    }

    return 0;
}
