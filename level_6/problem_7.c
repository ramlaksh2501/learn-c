// to print the two digit odd numbers  whose sum of digits is equal to 7
#include<stdio.h>
int main(){
    int x=10;
    while(x<100){
        if((x%2!=0) && (((x%10)+(x/10))==7)){
            printf("%d\n",x);
        }
        x++;
    }
    return 0;
}