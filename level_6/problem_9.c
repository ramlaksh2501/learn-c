//print the sum of the two digit numbers whose one's digit is equal to 5
#include<stdio.h>
int main(){
    int x=10;int s=0;
    while(x<100){
       if(x%10==5){s+=x;}
    x++;
    }
     printf("%d\n",s);
    return 0;
}