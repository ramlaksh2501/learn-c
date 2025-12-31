//print the sum of 1 to 5 
#include<stdio.h>
int main(){
    int x=1;int m=0;
    loop:
    if(x<6){
       m+=x;
        x++;goto loop;
    }
     printf("%d\n",m);
    
    return 0;
}