//make the 10's place of the two digit input of the input one
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    printf("%d",10+(a%10));
    return 0;
} 