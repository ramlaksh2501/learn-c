//get a number as input and print the number of digit of that number
#include<stdio.h>
int main(){
    int x,sum;
    sum =0;
    scanf("%d",&x);
    for(x;x!=0;x=x/10){
        sum++;
    }printf("%d",sum);
    return 0;
}