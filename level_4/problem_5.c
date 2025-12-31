//print the odd numbers from 1 to 9
#include<stdio.h>
int main(){
    int x=1;
    loop:
    if(x<10){
        if(x%2!=0) {printf("%d\n",x);}
        x++;goto loop;
    }
    
    
    return 0;
}