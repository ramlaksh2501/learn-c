//get a number as input and print its prime or not 
#include<stdio.h>
void prime_check(int x){
 for(int i=2;i<=x/2;i++){
        if(x%i==0){printf("not a prime");return;}
    }
    printf("is a prime");
}
int main(){
    int x;
    scanf("%d",&x);
    prime_check(x);
    return 0;
}