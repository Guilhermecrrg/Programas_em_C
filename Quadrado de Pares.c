#include <stdio.h>

int main() {

    int n, i, r;
    scanf("%i", &n);
    if(n%2==0){
    for(i=2; i<=n; i=i+2) {
        r= i*i;
        printf("%i^2 = %i\n", i, r);
    }
    }
    else if(n%2!=0){
    for(i=2; i<=n; i=i+1) {
        r= i*i;
        printf("%i^2 = %i\n", i, r);
    }


    }
    return 0;
}
