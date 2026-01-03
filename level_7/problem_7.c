// to print the two digit odd numbers  whose sum of digits is equal to 7
#include<stdio.h>
void two_odd(){int x=10;
    for (x;x<100;x++){
        if((x%2!=0) && (((x%10)+(x/10))==7)){
            printf("%d\n",x);
        }

    }}
int main(){two_odd();
    
    return 0;
}