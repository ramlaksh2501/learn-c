//make the ones digit as 2 of the three input 
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    a=a/10;
    a*=10;
    printf("%d",a+2);
    return 0;
}