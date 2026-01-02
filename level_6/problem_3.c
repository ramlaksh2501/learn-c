//print the sum of the numbers from 1 to 5
#include<stdio.h>
int main(){
    int x=1;int s=0;
    while (x<6){
       s+=x;
       x++;
    }
     printf("%d\n",s);
    return 0;
}