//print the sum of the two digit odd numbers whose 10's digit is 7
#include<stdio.h>
int main(){
    int x=10;int m=0;
    loop:
    if(x<100){
        if((x/10==7)&&(x%2!=0)){m+=x;}
        x++;
        goto loop;
    }
    printf("%d",m);
    return 0;

}