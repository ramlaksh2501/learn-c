//get a three digit number and sum the each digit and print the answer 
#include<stdio.h>
int main(){
 int a ;
 scanf("%d",&a);
 int sum;
 sum=a%10;
 a=a/10;
 sum+=a%10;
 a=a/10;
 sum+=a%10;
 printf("%d",sum);
 return 0; 
}