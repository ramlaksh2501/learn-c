//subtract 5 from the input only if the input's ten's digit is odd or else print the input 
#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);
int e= a/10;
e=e%10;
e=e%2;
printf("%d",(e*(a-5))+((-1)*(e-1)*a));
return 0;}

