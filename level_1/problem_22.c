// print the sum of digit of the number only if the sum of the digit is only less than ten or else repeat the same with the sum until the sum of the digit become a
// single digit
#include<stdio.h>
int main(){
int a ;
scanf("%d",&a);
int sum ;
one: sum=0;
sum: if (a!=0){sum+=a%10;
 a=a/10 ; goto sum;
 }
 if(sum<10){
 printf("%d",sum); return 0;}
 a=sum;
 goto one;}
 

