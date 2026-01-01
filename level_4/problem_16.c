//to check if the number is prime or not 
#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);int k=2;
    loop:
    if(k<(x/2)){if(x%k==0){
        printf("not a prime");
       return 0;
    } k++;
    goto loop;}
    printf("prime");
    return 0;
}