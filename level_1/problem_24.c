//in a four digit input only reverse the last two digits
#include<stdio.h>
int main(){
int a ,c;
scanf("%d",&a);
c=((a%10)*10)+((a/10)%10);
a=(a/100)*100;
a+=c;
printf("%d",a);return 0;}
