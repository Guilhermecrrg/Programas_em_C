#include <stdio.h>

int main() {
    int hora1, minuto1, hora2, minuto2;
    int hora_total, minuto_total;

    scanf("%d", &hora1);
    scanf("%d", &minuto1);
    scanf("%d", &hora2);
    scanf("%d", &minuto2);

    hora_total = hora1 + hora2;
    minuto_total = minuto1 + minuto2;

    if (minuto_total >= 60) {
        hora_total += 1;
        minuto_total -= 60;
    }

    if (hora_total >= 24) {
        hora_total -= 24;
    }

    printf("%02d:%02d + %02d:%02d = %02d:%02d\n", hora1, minuto1, hora2, minuto2,  hora_total, minuto_total);

    return 0;
}
