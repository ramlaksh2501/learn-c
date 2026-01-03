//get a number and check if its prime and if the sum of the digits are 14
#include<stdio.h>
void prime_14(int x){ int sum=0;
    int k=x;
    for (k;k!=0;k/=10){
        sum+=k%10;
    }
    for(int i=2;i<x/2;i++){
        if(x%i==0 && sum!=14){printf("not a prime and the sum of the digits is not 14\n");return ;}
        if(x%i==0 && sum==14){printf("not a prime and the sum of the digits is 14\n");return ;}
    }
    if(sum==14) printf("is a prime and the sum of the digits is 14\n");
    else printf("is a prime and the sum of the digits is not 14\n");}
int main(){
     int x;
     scanf("%d",&x);
    prime_14(x);
    return 0;
}