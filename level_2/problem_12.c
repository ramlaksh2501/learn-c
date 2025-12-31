//get a two digit input print 1 if the ones digit of the input is less than or equal to the 10's digit ,else print 0
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    printf("%d",(((a%10)<=((a/10)%10))));
    return 0;
}