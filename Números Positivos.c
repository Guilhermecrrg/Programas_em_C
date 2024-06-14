#include <stdio.h>

int main() {

    float n;
    float i=0;
    float positivos=0;


    while(i<6) {
        scanf("%f", &n);
        if(n>0) positivos++;

        i++;
    }
        printf("%.f valores positivos\n", positivos);
    return 0;
}
