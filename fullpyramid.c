#include <stdio.h>
int main(){
int i, space, rows, j;
scanf("%d", &rows);
if (rows>0 && rows<25){
for (i = 1; i <= rows; i++) {
for (space = 1; space <= rows - i; space++) {
printf(" ");
}
for (j = 1; j <= 2 * i - 1; j++) {
printf("* ");
}
printf("\n");
}
}
else{
printf("Invalid Input");
}
return 0;
}
