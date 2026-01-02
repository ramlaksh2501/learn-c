//get a 4 digit number as input and check if the middle two digits are prime or not 
#include<stdio.h>
int main(){
     int x;
    scanf("%d",&x);
    int y=x%1000;
    y/=10;
    for(int i=2;i<y/2;i++){
        if(y%i==0){printf("not a prime");return 0;}
    }
    printf("is a prime");
    return 0;
}