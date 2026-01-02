//get a number and check if its prime and if the sum of the digits are 14
#include<stdio.h>
int main(){
     int x,sum=0;
    scanf("%d",&x);int k=x;
    for (k;k!=0;k/=10){
        sum+=k%10;
    }
    for(int i=2;i<x/2;i++){
        if(x%i==0 && sum!=14){printf("not a prime and the sum of the digits is not 14\n");return 0;}
        if(x%i==0 && sum==14){printf("not a prime and the sum of the digits is 14\n");return 0;}
    }
    if(sum==14) printf("is a prime and the sum of the digits is 14\n");
    else printf("is a prime and the sum of the digits is not 14\n");
    return 0;
}