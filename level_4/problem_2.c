//print from 5 to 1 without using while and for 
#include<stdio.h>
int main(){
    int x=5;
    loop:
    if(x>0){
        printf("%d\n",x);
        x--;goto loop;
    }
    
    
    return 0;
}