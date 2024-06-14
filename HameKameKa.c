#include<stdio.h>
#include<string.h>

    int main () {

    int c, i, j, l;
    int qt_a = 0;
    int qt_a2 = 0;
    int p1 = 0;
    int p2 = 0;

    scanf("%i", &c);
    char hamekameka[c][201];

    for(i=0; i<c; i++) {
        scanf("%s", hamekameka[i]);
    }
    for(i=0; i<c; i++) {
        for(j=0; j<strlen(hamekameka[i]); j++) {
            if(hamekameka[i][j]=='k'){
               p2 = 1;
            }
            if(hamekameka[i][j]=='a'){
            if(p2 == 0) {
            qt_a++;
            }
            else {
            qt_a2++;
            }
            }
        }
            p2=0;

            printf("k");
            for(l=0;l<(qt_a*qt_a2); l++){
                printf("a");
            }
            printf("\n");
           qt_a2=0;
           qt_a=0;
        }

     return 0;
    }
