//get a number from the user and print the number of two digit odd numbers in it
#include<stdio.h>
int  two_count_odd(int input){
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
    } return count;
}
int main(){
    int input;
    scanf("%d",&input);
    int co= two_count_odd(input);
    printf("%d\n",co);
    return 0;
}