//print the sum of 6 to 1
#include<stdio.h>
int main(){
    int x=6;int m=0;
    loop:
    if(x>0){
       m+=x;
        x--;goto loop;
    }
     printf("%d\n",m);
    
    return 0;
}