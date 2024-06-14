#include <stdio.h>

int main() {

    int N=0, X=0, i=0;
    int in=0, out=0;
    scanf("%i", &N);
    while(i<N) {
       scanf("%i",&X);
       if(X>=10 && X<=20) in++;
       else out++;
       i++;

    }
    printf("%i in\n%i out\n", in, out);

    return 0;
}
