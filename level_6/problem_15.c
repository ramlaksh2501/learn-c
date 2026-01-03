//get a number as input ,if the msb is odd sub msb -1,else print as it is  
#include<stdio.h>
int main(){
    int x,middle ,msb=0,result;
    middle =0;
    scanf("%d",&x);
    while(x!=0){
        middle+=x%10;
        middle*=10;msb=x;
        x=x/10;
    }middle/=100;
    if(msb%2!=0){msb--;
    }
    result=msb;
    while(middle!=0){
        result*=10;
    result+=middle%10;
    middle=middle/10;}
    printf("%d",result);
    return 0;
}