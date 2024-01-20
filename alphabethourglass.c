#include <stdio.h>
int main(){
  int r, i, j, k;
// r=number of rows  
scanf("%d", &r);
  r = r+1;
  for(i=r-1;i>1;i--){
    for(k=0;k<r-i;k++) {
        printf("  ");
    }
    int alphabet = 68;
    for(j=0;j<2*i-1;j++){
        printf("%c ",alphabet);
        ++alphabet;
    }
    if(i>2){
    printf("\n");
    }
  }
  for(i=0;i<r;i++){
    for(k=0;k<r-i;k++) {
        printf("  ");
    }
    int alphabet = 68;
    for(j=1;j<=2*i-1;j++){
        if(j>=1){
            printf("%c ",alphabet);
        ++alphabet;
        } 
    }
    printf("\n");  
  }
  return 0;
}
