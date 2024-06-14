#include <stdio.h>

int main() {

    int n, i = 0;
    int total = 0, coelhos = 0, ratos = 0, sapos = 0;
    int quantia;
    char tipo;
    double perc_coelhos;
    double perc_ratos;
    double perc_sapos;

    scanf("%i", &n);
    for(i=0; i<n; i++) {
        scanf("%d %c", &quantia, &tipo);

        total += quantia;
        if (tipo == 'C') {
            coelhos += quantia;
        } else if (tipo == 'R') {
            ratos += quantia;
        } else if (tipo == 'S') {
            sapos += quantia;
        }
    }


    perc_coelhos = (double) coelhos / total * 100;
    perc_ratos = (double) ratos / total * 100;
    perc_sapos = (double) sapos / total * 100;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2lf %%\n", perc_coelhos);
    printf("Percentual de ratos: %.2lf %%\n", perc_ratos);
    printf("Percentual de sapos: %.2lf %%\n", perc_sapos);


    return 0;
}
