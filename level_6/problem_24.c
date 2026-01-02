//get a number as input and print the number of two digit perfect square numbers in that number
#include<stdio.h>
int main(){
    int input,rev=0;
    scanf("%d",&input);
    while(input!=0){
        rev+=input%10;
        rev*=10;
        input=input/10;
    }int count=0;
    rev/=10;
    while(rev!=0){
        input=0;
        input+=rev%10;
        input*=10;
        input+=(rev/10)%10;
    if(input==16||input==81||input==64||input==49||input==36||input==25){count++;}
    rev=rev/10;
    }printf("%d",count);
    return 0;
}