#include <stdio.h>

int main() {

    int a, b, c, d, e;
    int par = 0;
    int imp = 0;
    int pos = 0;
    int neg = 0;
    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    scanf("%i", &d);
    scanf("%i", &e);
    a % 2 == 0 ? par++ : imp++;
    if (a>0) {
        pos++;
    }
    else if (a!=0) {
        neg++;
    }
     b % 2 == 0 ? par++ : imp++;
    if (b>0) {
        pos++;
    }
    else if (b!=0) {
        neg++;
    }
     c % 2 == 0 ? par++ : imp++;
    if (c>0) {
        pos++;
    }
    else if (c!=0) {
        neg++;
    }
     d % 2 == 0 ? par++ : imp++;
    if (d>0) {
        pos++;
    }
    else if (d!=0) {
        neg++;
    }
     e % 2 == 0 ? par++ : imp++;
    if (e>0) {
        pos++;
    }
    else if (e!=0) {
        neg++;
    }
    printf("%i valor(es) par(es)\n", par);
    printf("%i valor(es) impar(es)\n", imp);
    printf("%i valor(es) positivo(s)\n", pos);
    printf("%i valor(es) negativo(s)\n", neg);

    return 0;
}
