 #include <stdio.h>

 int main () {
     int idade= 0;
     int ano_nasc = 0;

    printf("Ola mundo!\n");
    printf("salve minha \"tropa\"!!!\n");
    printf("Seja 100%% Unisantos\n");
    printf("Entre com seu ano de nascimento: ");
    scanf("%i", &ano_nasc);
    idade = 2023 - ano_nasc;
    printf("Idade %i \n", idade);
    printf("Modulo %i %% 2 = %i", idade, idade % 2);
    return 0;
}
