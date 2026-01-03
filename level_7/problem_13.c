//get a number as input and print the reverse of that number 
#include<stdio.h>
void rev_num(int x){
int sum;
    sum =0;
    
    for(x;x!=0;x=x/10){
        sum+=x%10;
        sum*=10;
    }printf("%d",sum/10);
}
int main(){
    int x;
    scanf("%d",&x);
    rev_num(x);
    return 0;
}