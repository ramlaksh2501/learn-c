//print the biggest four digit number that is divisible by seven and nine 
#include<stdio.h>
int b_4(){
int num;
    for (int i=1000;i<10000;i++){
        if(i%7==0 && i%9==0){num=i;}
    }
    return num;
}
int main(){
   int result= b_4();
   printf("%d\n",result );
    return 0;
}