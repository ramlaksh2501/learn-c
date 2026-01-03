//print the biggest four digit number that is divisible by seven and nine 
#include<stdio.h>
void b_4(){
int num;
    for (int i=1000;i<10000;i++){
        if(i%7==0 && i%9==0){num=i;}
    }
    printf("%d",num);
}
int main(){
    b_4();
    return 0;
}