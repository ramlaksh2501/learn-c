//get a number as input and count how many two digit odd number are in that number 
#include<stdio.h>
int main(){
    int input,rev=0;
    scanf("%d",&input);
    while(input!=0){
        rev+=input%10;
        rev*=10;
        input=input/10;
    }
    int count=0;
    rev/=10;
    while(rev!=0){
        input=0;
        input+=rev%10;
        input*=10;
        input+=(rev/10)%10;
        rev=rev/10;
    if(input%2!=0){count++;}
    }printf("%d",count);
    return 0;
}