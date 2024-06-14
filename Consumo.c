#include <stdio.h>

int main() {
    int x;
    float y, gasto;
    scanf("%i %.1f", &x, &y);
    gasto = x /y;
    printf("%.3f km/l\n", gasto);
    return 0;
}
