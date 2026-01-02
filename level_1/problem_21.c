//get a three digit input and subtract five from it only if the ones and the 100's digit of the number are odd else print the input
#include<stdio.h>
int main(){
int  a;
scanf("%d",&a);
int e,x;
e=a%10;
x=(a/100)%10;
e%=2;
x%=2;
int r=e*x;
printf("%d",(r*(a-5))+((-1)*(r-1)*a));
return 0;}
