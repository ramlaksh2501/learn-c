//get a number as input and print its prime or not 
#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    int i=2;
    while(i<=x/2){
        if(x%i==0){printf("not a prime");return 0;}
        i++;
    }
    printf("is a prime");
    return 0;
}