//subtract the input(two digit) by 5 only if the sum of the digits is odd else print the input 
#include<stdio.h>
int main(){
int a ;
scanf("%d",&a);
int s=a%10;
s+=(a/10)%10;
int e=s%2;
printf("%d",(e*(a-5))+((-1)*(e-1)*a));
return 0;} 
