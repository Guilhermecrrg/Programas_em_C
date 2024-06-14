#include <stdio.h>

int main() {

    int x, y, z, maior = 0, menor = 0;
    scanf("%i %i %i", &x, &y, &z);
    if(x<y && x<z){
        menor = menor + x;
    }
    if(y<x && y<z){
        menor = menor + y;
    }
    if(z<x && z<y){
        menor = menor + z;
    }
        if(x>y && x>z){
        maior = maior + x;
    }
    if(y>x && y>z){
        maior = maior + y;
    }
    if(z>x && z>y){
        maior = maior + z;
    }
    printf("%i e %i", menor, maior);
    return 0;
}
