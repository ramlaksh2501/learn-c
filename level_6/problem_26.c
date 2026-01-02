//print the biggest four digit number that is divisible by seven and nine 
#include<stdio.h>
int main(){int num;int i=1000;
    while(i<10000){
        if(i%7==0 && i%9==0){num=i;}
    i++;
    }
    printf("%d",num);
    return 0;
}