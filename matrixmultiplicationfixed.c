#include<stdio.h>
int main(){
    int m1[3][3], m2[3][3], i, j, k;
    int res[3][3] = {0};

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &m1[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &m2[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            for(k = 0; k < 3; k++) {
                res[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d\t", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}
