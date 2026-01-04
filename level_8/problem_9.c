//get a number as input and if the msb is even print the number ,
//else subtract the msb by one 
#include<stdio.h>
int msb_even(int x){
     int middle ,msb=0,result;
    middle =0;
    
    for(x;x!=0;x=x/10){
        middle+=x%10;
        middle*=10;msb=x;
    }middle/=100;
    if(msb%2!=0){msb--;
    }
    result=msb;
    for(middle;middle!=0;middle=middle/10){
        result*=10;
    result+=middle%10;}
    return result;
}
int main(){
    int s;
    scanf("%d",&s);
    int r=msb_even(s);
    printf("%d\n",r);
    return 0;
}