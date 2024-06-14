#include <stdio.h>

int main() {

    double M [12][12];
    double s = 0, m = 0;
    char C;
    int i, j, y=0;

    scanf("%c", &C);

    for(i=0; i<12; i++){
        for(j=0;j<12;j++){
            scanf("%lf", &M[i][j]);
        }
    }
    if(C =='S'){
    for(i=0; i<12; i++){
        for(j=0;j<i;j++){
            s = s + M[i][j];
        }
    }
    printf("%.1lf\n", s);
}

    if(C =='M'){
    for(i=0; i<12; i++){
        for(j=0;j<i;j++){
            s = s + M[i][j];
        }

    }
        m = s/66;
        printf("%.1lf\n", m);
}

    return 0;
}
