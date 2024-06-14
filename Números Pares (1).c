#include <stdio.h>

int main() {

    int n;
    int i=0;
    int par=0;


    while(i<5) {
        scanf("%i", &n);
        if(n%2==0) par++;

        i++;
    }
        printf("%i valores pares\n", par);
    return 0;
}
