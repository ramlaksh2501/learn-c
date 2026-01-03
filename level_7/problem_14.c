//get a number as input and swap the first and last digit and print the number 
#include<stdio.h>
void swap(int x){
 int middle ,first=0,last,result;
    middle =0;
    last=x%10;
    x/=10;
    for(x;x!=0;x=x/10){
        middle+=x%10;
        middle*=10;first=x;
    }middle/=100;result=last;
    if(middle!=0) result*=10;
    for(middle;middle!=0;middle=middle/10){
    result+=middle%10;
    result*=10;
    }result+=first;
    printf("%d",result);
}
int main(){
    int x;
    scanf("%d",&x);
   swap(x);
    return 0;
}