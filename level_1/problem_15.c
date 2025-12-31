// make the inputs one's place digit to zero 
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    a/=10;
    a*=10;
    printf("%d",a);
    return 0;
}