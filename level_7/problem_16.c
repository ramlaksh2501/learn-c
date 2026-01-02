//get a number as input and print its prime or not 
#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    for(int i=2;i<=x/2;i++){
        if(x%i==0){printf("not a prime");return 0;}
    }
    printf("is a prime");
    return 0;
}