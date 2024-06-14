#include <stdio.h>
#include <strings.h>

int main() {

    char risada[51];
    char vogal[51];
    char inv_vogal[51];
    int i, j;

    scanf("%s", risada);
    j=0;
    for(i=0; i<strlen(risada); i++) {
        if(risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] =='u') {
            vogal[j] = risada[i];
            j++;
        }
    }
    vogal[j] = '\0';
    j=0;
    for(i=strlen(vogal)-1; i>=0; i--) {
        inv_vogal[j] = vogal[i];
        j++;
    }
    inv_vogal[j] = '\0';

    if(strcmp(vogal, inv_vogal) == 0) {
        printf("S\n");
    }
    else {
        printf("N\n");
    }

return 0;
}
