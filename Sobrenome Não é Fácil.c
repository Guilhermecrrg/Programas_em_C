#include<stdio.h>
#include<string.h>

    int main () {

    int n, i, j;
    int consoantes =0;
    int max_consoantes = 0;

    scanf("%i", &n);
    char nome[n][43];

    for(i=0; i<n; i++) {
        scanf("%s", nome[i]);
    }
    for(i=0; i<n; i++){
        for(j=0; j<strlen(nome[i]); j++) {
            if(nome[i][j]!='a'&& nome[i][j]!= 'e' && nome[i][j]!='i' && nome[i][j]!='o' && nome[i][j]!='u'&& nome[i][j]!='A'&& nome[i][j]!= 'E' && nome[i][j]!='I' && nome[i][j]!='O' && nome[i][j]!='U'){
               consoantes++;
            }
            else {
                if(max_consoantes<consoantes){
                    max_consoantes = consoantes;
                }
                consoantes = 0;
            }
        }
        if(max_consoantes>=3 || consoantes>=3){
           printf("%s nao eh facil\n", nome[i]);
        }
        else if (max_consoantes<3) {
        printf("%s eh facil\n", nome[i]);
        }
         max_consoantes = 0;
        consoantes =0;
    }

    return 0;
    }
