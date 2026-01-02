//get a number as input and print the number of two digit perfect square numbers in that number
#include<stdio.h>
int main(){
    int input,rev=0;
    scanf("%d",&input);
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
    if(input==16||input==81||input==64||input==49||input==36||input==25){count++;}
    }printf("%d",count);
    return 0;
}