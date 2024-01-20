#include <stdio.h>
int main(){
    int i,j,rows;
    // getting input for number of rows from user
    scanf("%d",&rows);
    if (0<rows&& rows<25){
    // loop for printing the half pyramid using *
    for (i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            printf("*\t");
        }
        printf("\n");
      }
    }
    else {
        printf("Invalid Input");
    }
    return 0;
}
