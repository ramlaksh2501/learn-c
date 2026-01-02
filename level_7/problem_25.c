//get a number as input and print the number of single digit prime numbers in that number
#include<stdio.h>
int main(){
    int input,rev=0;int count=0;
    scanf("%d",&input);
    for(input;input!=0;input=input/10){
        rev=input%10;
        if(rev==2||rev==3||rev==5||rev==7){count++;}
    
    }printf("%d",count);
    return 0;
}