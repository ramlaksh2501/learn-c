//get a number as input and print the number of odd digits in that number 
#include<stdio.h>
int main(){
    int x,sum;
    sum =0;
    scanf("%d",&x);
    while(x!=0){
       if((x%10)%2!=0) {sum++;}
       x=x/10;
    }printf("%d",sum);
    return 0;
}