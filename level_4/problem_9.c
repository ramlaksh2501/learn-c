//print all the two digit even numbers whose sum of digits is equal to 6
#include<stdio.h>
int main(){
    int x=10;
    loop:
    if(x<100){
        if((((x%2)==0)) && ((((x%10)+(((x/10)))==6))))
         {printf("%d\n",x);}
        x++;goto loop;
    }
    
    
    return 0;
}   