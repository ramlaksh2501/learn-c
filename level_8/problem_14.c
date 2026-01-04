//get a number as input and print the total number of 
//perfect two digit squares in that number 
#include<stdio.h>
int two_ps(int input ){
 int rev=0;
    for(input;input!=0;input=input/10){
        rev=(rev*10)+input%10;
    }int count=0;
    
    for(rev;(rev/10)!=0;rev=rev/10){
        input=0;
        input+=rev%10;
        input*=10;
        input+=(rev/10)%10;
    if(input==16||input==81||input==64||input==49||input==36||input==25){count++;}
    }return count;

}
int main(){
    int input;
    scanf("%d",&input);
    int result=two_ps(input);
    printf("%d\n",result);
    return 0;
}