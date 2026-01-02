//make the 10's digit of the input as zero
#include<stdio.h>
int main()
{
int a ;
scanf("%d",&a);
int r =a%10;
a=a/100;
a=a*100;
a+=r;
printf("%d",a);
return 0;}
