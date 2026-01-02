//get a number as input and print the sum of digit 
#include<stdio.h>
int main(){
    int x,sum;
    sum =0;
    scanf("%d",&x);
    while(x!=0){
        sum+=x%10;
        x=x/10;
    }printf("%d",sum);
    return 0;
}