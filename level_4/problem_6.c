//print the two digit odd numbers below 20
#include<stdio.h>
int main(){
    int x=20;
    loop:
    if(x>10){
        if(x%2!=0) {printf("%d\n",x);}
        x--;goto loop;
    }
    
    
    return 0;
}