#include <stdio.h>

int main() {
    int n, a, b, c, i;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        a = i;
        b = i * i;
        c = i * i * i;
        printf("%d %d %d\n", a, b, c);
        a = i;
        b = i * i + 1;
        c = i * i * i + 1;
        printf("%d %d %d\n", a, b, c);
    }

    return 0;
}
