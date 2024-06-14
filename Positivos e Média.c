#include <stdio.h>

int main() {

    double n;
    float i=0;
    float positivos=0;
    double media;


    while(i<6) {
        scanf("%lf", &n);
        if(n>0) {
           positivos++; media = media+n;
        }
        i++;
    }
        media = media/ positivos;
        printf("%.lf valores positivos\n%.1lf\n", positivos, media);
    return 0;
}
