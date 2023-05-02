#include<stdio.h>
int main()
{
int volume;
printf("please enter the amount of volume to be infused\n ");
scanf("%d",&volume);
printf("the volume to be infused is%d ml\n",volume);
double time;
printf("how much time the liquid should be infused\n");
printf("please enter the value in mins\n");
scanf("%lf",&time);
double a ;
a= time/60;
double rate;
rate=volume/a;
printf("the infusion rate is %lf ml per hours",rate);
return 0;
}
