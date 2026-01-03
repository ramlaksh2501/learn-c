//print the sum of the numbers from 1 to 5
#include<stdio.h>
void sum(){int x=1;int s=0;
    for (x;x<6;x++){
       s+=x;
    }
     printf("%d\n",s);}
int main(){
    sum();
    return 0;
}