#include <stdio.h>

int main() {

    int x, y, i=0, qtd=0;
    int ini, fim;
    scanf("%i", &x);
    scanf("%i", &y);

    if(x>y){
        ini= y;
        fim= x;
        }
    else {
        ini= x;
        fim= y;
    }
     if(ini%2 == 0) {
        ini++;
    }
    else {
        ini = ini + 2;
    }

    for(i=ini; i<fim; i=i+2) {
        qtd = qtd + i;
    }

    printf("%i\n",qtd);

    return 0;
}

