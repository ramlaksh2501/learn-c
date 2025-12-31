//reverse a two digit number
#include<stdio.h>
int main(){
int a;
scanf("%d",&a);
int x;
x=a%10;
x=x*10;
x+=a/10;
printf("%d",x);
return 0;
}
