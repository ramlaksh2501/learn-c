//get a number as input ,if the msb is odd sub msb -1,else print as it is 

#include<stdio.h>
void even_msb(int x){
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
    printf("%d",result);
}
int main(){
    int x;
    scanf("%d",&x);
   even_msb(x);
    return 0;
}