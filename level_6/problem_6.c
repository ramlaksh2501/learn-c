// to print the two digit odd numbers below 20
#include<stdio.h>
int main(){
    int x=10;
    while (x<20){
        if(x%2!=0){
            printf("%d\n",x);
        }
        x++;
    }
    return 0;
}