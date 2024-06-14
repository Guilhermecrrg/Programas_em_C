#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char *nome_mes[12] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho",
                          "Agosto","Setembro","Outbro", "Novembro","Dezembro"};

    char data[8];

    scanf("%8[^\n]", &data);

    int data_i = atoi(data);

    int dia = data_i / 1000000;
    int mes = (data_i / 10000) - dia*100;
    int ano = data_i - (data_i / 10000)*10000;

    printf("Indice mes %d\n", mes);
    printf("%i/%s/%i\n", dia, nome_mes[mes-1], ano);

    return 0;
}
