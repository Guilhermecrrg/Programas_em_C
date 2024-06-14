#include <stdio.h>

int main() {

    int a, b, c;
    scanf("%i %i %i", &a, &b, &c);
    if(a>b && a>c) printf("%i eh o maior\n",a);
    if(b>a && b>c) printf("%i eh o maior\n",b);
    if(c>b && c>a) printf("%i eh o maior\n",c);
    if(a==b || a==c) printf("%i eh o maior\n",a);
    if(b==c) printf("%i eh o maior\n",b);

    return 0;
}
