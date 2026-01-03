//get a 4 digit number as input and check if the middle two digits are prime or not 
#include<stdio.h>
void middle_2_prime(int x){
int y=x%1000;
    y/=10;
    for(int i=2;i<y/2;i++){
        if(y%i==0){printf("not a prime");return ;}
    }
    printf("is a prime");
}
int main(){
     int x;
    scanf("%d",&x);
    middle_2_prime(x);
    return 0;
}