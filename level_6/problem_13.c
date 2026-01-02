//get a number as input and print the reverse of that number 
#include<stdio.h>
int main(){
    int x,sum;
    sum =0;
    scanf("%d",&x);
    while(x!=0){
        sum+=x%10;
        sum*=10;
        x=x/10;
    }printf("%d",sum/10);
    return 0;
}