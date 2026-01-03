//get a number as input and count how many two digit odd number are in that number 
#include<stdio.h>
void two_count_odd(int input){
int rev =0;
    for(input;input!=0;input=input/10){
        rev+=input%10;
        rev*=10;
    }int count=0;
    rev/=10;
    for(rev;rev!=0;rev=rev/10){
        input=0;
        input+=rev%10;
        input*=10;
        input+=(rev/10)%10;
    if(input%2!=0){count++;}
    }printf("%d",count);
}
int main(){
    int input;
    scanf("%d",&input);
    two_count_odd(input);
    return 0;
}