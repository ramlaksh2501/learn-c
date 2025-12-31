//reverse of a three digit number 
#include<stdio.h> 
int main(){
    int a;
    scanf("%d",&a);
    int m;
    m=a%10;
    m*=10;
    a=a/10;
    m+=a%10;
    m*=10;
    a=a/10;
    m+=a%10;
    printf("%d",m);
    return 0;
    
}