//get a four digit input and reverse the last two digits
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int x=a/100;
    x*=10;
    x+=a%10;a=a/10;
      x*=10;
    x+=a%10;
    printf("%d",x);
    return 0;
}