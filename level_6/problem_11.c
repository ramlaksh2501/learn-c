//get a number as input and print the number of digit of that number
#include<stdio.h>
int main(){
    int x,sum;
    sum =0;
    scanf("%d",&x);
    while(x!=0){
        sum++;
    x=x/10;
    }printf("%d",sum);
    return 0;
}