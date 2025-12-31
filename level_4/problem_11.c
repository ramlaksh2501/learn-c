// get a number as input and print the number of digits in that number
#include<stdio.h>
int main(){
    int x,m;m=0;
    scanf("%d",&x);
    loop:if(x!=0){
        m++;
        x/=10;
        goto loop;
    }
    printf("%d",m);
    return 0;
}