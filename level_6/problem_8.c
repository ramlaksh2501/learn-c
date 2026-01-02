//to print the two digit odd numbers whose sum of digits are equal to 6
#include<stdio.h>
int main(){
    int x=10;
    while(x<100){
        if((x%2==0) && (((x%10)+(x/10))==6)){
            printf("%d\n",x);
        }
        x++;
    }
    return 0;
}