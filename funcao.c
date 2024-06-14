#include <stdio.h>

void cabecalho(void);
void rodape(char[30]);
double triplo(dou)

int main(void) {
    char nome[30];
    cabecalho();
    printf("Digite o seu nome: ");
    scanf("%30[^\n]", nome);
    cabecalho();
    printf("Seja bem-vindo %s!\n", nome);
    rodape(nome);
    return 0;
}

void cabecalho() {
    printf("=================\n");
    printf("| PROGRAMA FUNC |\n");
    printf("=================\n");
}

void rodape(char nome[30]) {
    printf("================\n");
    printf("|  UNISANTOS   |  \n");
    printf("================\n");
    printf("Obrigado por nos visitar %s\n",nome);
}
