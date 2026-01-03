//get a number as input and check wheather the last two digits are prime or not 
#include<stdio.h>
void last_2_prime(int x){
int y=x%100;
    for(int i=2;i<y/2;i++){
        if(y%i==0){printf("not a prime");return ;}
    }
    printf("is a prime");
}
int main(){
     int x;
    scanf("%d",&x);
    last_2_prime(x);
    return 0;
}