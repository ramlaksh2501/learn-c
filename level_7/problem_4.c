//print the sum of the numbers from 6 to 1
#include<stdio.h>
void rev_sum(){ int x=6;int s=0;
    for (x;x>0;x--){
       s+=x;
    }
     printf("%d\n",s);}
int main(){
   rev_sum();
    return 0;
}