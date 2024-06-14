#include <stdio.h>

int main() {

    double a, b, c, d, e, f, X;
    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);
    X= (((a+b)/(c-d))*e)/((f/(a*b))+e);
    printf("%.3lf", X);

    return 0;
}
