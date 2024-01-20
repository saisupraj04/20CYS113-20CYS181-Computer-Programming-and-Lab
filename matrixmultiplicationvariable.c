#include<stdio.h>
#define MAX_SIZE 50

int main(){
    int matrixA[MAX_SIZE][MAX_SIZE], matrixB[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int rows, cols, i, j, k;

    result[i][j] = 0;

    scanf("%d", &rows);
    scanf("%d", &cols);

    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
             scanf("%d", &matrixA[i][j]);             
        }
    }


    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
             scanf("%d", &matrixB[i][j]);             
        }
    }

    
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
             result[i][j] = 0;
            for(k = 0; k < cols; k++){
                 result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
             printf("%d \t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
