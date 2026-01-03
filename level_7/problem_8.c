//to print the two digit odd numbers whose sum of digits are equal to 6
#include<stdio.h>
void sum_6(){
 int x=10;
    for (x;x<100;x++){
        if((x%2==0) && (((x%10)+(x/10))==6)){
            printf("%d\n",x);
        }

    }
}
int main(){
   sum_6();
    return 0;
}