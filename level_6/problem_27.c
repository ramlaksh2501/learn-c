//total count of numbers less than 100000 whose sum of digits in 14
#include<stdio.h>
int main(){
    int count =0;
    int i=0;
    while(i<100000){int sum=0;
    int j=i;
    while(j!=0){
        sum+=j%10;
        j=j/10;
    }if(sum==14) count++;
    i++;
    }
    printf("%d",count);
    return 0;
}