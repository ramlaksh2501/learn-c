//get a number as input and print the number of single digit prime numbers in that number
#include<stdio.h>
int main(){
    int input,rev=0;int count=0;
    scanf("%d",&input);
    while(input!=0){
        rev=input%10;
        if(rev==2||rev==3||rev==5||rev==7){count++;}
    input=input/10;
    }printf("%d",count);
    return 0;
}