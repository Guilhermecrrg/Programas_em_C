#include <stdio.h>

int main() {
    char idioma[3];
    printf("Digite o c�digo do idioma desejado (pt, en, de, jp, es): ");
    scanf("%c%c%c", &idioma[0], &idioma[1], &idioma[2]);

    if (idioma[0] == 'p' && idioma[1] == 't') {
        printf("Ola Mundo!\n");
    }
    else if (idioma[0] == 'e' && idioma[1] == 'n') {
        printf("Hello World!\n");
    }
    else if (idioma[0] == 'd' && idioma[1] == 'e') {
        printf("Hallow Wereld!\n");
    }
    else if (idioma[0] == 'j' && idioma[1] == 'p') {
        printf("Konnichiha Sekai!\n");
    }
    else if (idioma[0] == 'e' && idioma[1] == 's') {
        printf("Hola Mundo!\n");
    }
    else {
        printf("C�digo de idioma inv�lido.\n");
    }

    return 0;
}
