// to subtract five from the input print the result if the input is odd else print the input;(do no use if)
#include<stdio.h>
int main(){
    int a ;
    scanf("%d",&a);
    int e,o,s;
    e=a%2;
    printf("%d",((e*(a-5))+(((e-1))*a*-1)));
    return 0;
}