//get a number as input and print the number of digit of that number
#include<stdio.h>
void num_len(int x){int sum;
    sum =0;
    for(x;x!=0;x=x/10){
        sum++;}printf("%d",sum);}
int main(){
    int x;
    scanf("%d",&x);
    num_len(x);
    
    return 0;
}