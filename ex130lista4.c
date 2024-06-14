#include<stdio.h>

    int main(){
    int i = 0;
    int n, j, resto[32];

    scanf("%i", &n);

    if(n==0)printf("0\n");

    while ( n > 0) {
        resto[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", resto[j]);
    }
    printf("\n");

    return 0;
    }
