//print the sum of the two digit numbers whose one's digit is five 
#include<stdio.h>
int sum_5(){
    int sum=0;
    for (int i=10;i<100;i++){
        if(i%10==5) {sum+=i;}
    }
    return sum;
}
int main(){
    int a=sum_5();
    printf("%d\n",a);
    return 0;
}