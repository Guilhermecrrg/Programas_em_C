#include <stdio.h>
#include <math.h>

int main(void) {

    int h1, m1, h2, m2;
    int h, m;

    scanf("%d %d", &h1, &m1);
    scanf("%d %d", &h2, &m2);

    h = (m1 + m2) / 60 + (h1+h2);
    m = (m1 + m2) - ((m1 + m2) / 60) * 60;

    printf("%d:%d + %d:%d = %d:%02d", h1, m1, h2, m2, h, m);

    return 0;
}
