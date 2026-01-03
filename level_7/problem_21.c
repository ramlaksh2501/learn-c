//get a number as input and print the number of odd digits in that number 
#include<stdio.h>
void no_odd(int x){
 int sum;
    sum =0;
    for(x;x!=0;x=x/10){
       if((x%10)%2!=0) {sum++;}
    }printf("%d",sum);
}
int main(){
    int x;    
    scanf("%d",&x);
   no_odd(x);
    return 0;
}