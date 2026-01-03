//get a number as input and print the sum of digit 
#include<stdio.h>
void sum_digits(int x){
int sum;
    sum =0;
    
    for(x;x!=0;x=x/10){
        sum+=x%10;
    }printf("%d",sum);
}
int main(){
    int x;
    scanf("%d",&x);
    sum_digits(x);
    
    return 0;
}