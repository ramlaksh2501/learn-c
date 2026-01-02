//print the sum of the numbers from 6 to 1
#include<stdio.h>
int main(){
    int x=6;int s=0;
    while(x>0){
       s+=x;
       x--;
    }
     printf("%d\n",s);
    return 0;
}