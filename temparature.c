#include<stdio.h>
int main()
{
printf("hello user \n");
int t;
printf("please enter the elapsed time\n");
scanf("%d",&t);
double  temp;
temp=(4*t*t)/(t+2)-20;
printf("the temparature in the frezeer is %f",temp);
return 0;
}
