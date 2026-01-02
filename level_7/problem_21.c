//get a number as input and print the number of odd digits in that number 
#include<stdio.h>
int main(){
    int x,sum;
    sum =0;
    scanf("%d",&x);
    for(x;x!=0;x=x/10){
       if((x%10)%2!=0) {sum++;}
    }printf("%d",sum);
    return 0;
}