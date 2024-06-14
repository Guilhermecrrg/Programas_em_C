#include <stdio.h>

int main() {

    int i;
    scanf("%i", &i);
    if (i>=18 && i<65){
        printf("obrigatorio\n");
    }
    else if (i<16) {
        printf("nao eleitor\n");
    }
    else if  (i>=16 || i<=17 || i>64){
        printf("facultativo\n");
    }
    return 0;
}
