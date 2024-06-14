#include <stdio.h>

int main() {

    int N, i = 0, v;

        scanf("%i", &N);
        for(i=0; i<10; i++){
            v = N*i;
            printf("%i x %i = %i\n", i, N, v);
        }


    return 0;
}
