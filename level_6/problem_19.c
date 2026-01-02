//get a 4 digit number as input and check if the middle two digits are prime or not 
#include<stdio.h>
int main(){
     int x;
    scanf("%d",&x);
    int y=x%1000;
    y/=10;
    int i=2;
    while(i<y/2){
        if(y%i==0){printf("not a prime");return 0;}
        i++;
    }
    printf("is a prime");
    return 0;
}