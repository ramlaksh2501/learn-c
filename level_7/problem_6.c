// to print the two digit odd numbers below 20
#include<stdio.h>
int main(){
    int x=10;
    for (x;x<20;x++){
        if(x%2!=0){
            printf("%d\n",x);
        }

    }
    return 0;
}