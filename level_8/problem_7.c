//get a number from user and print the reverse of that number 
#include<stdio.h>
int rev(int x){
    int rev=0;
    for(x;x!=0;x/=10){
        rev=(rev*10)+(x%10);  
    }
    return rev;
}
int main(){
    int s;
    scanf("%d",&s);
    int rev_n= rev(s);
    printf("%d\n",rev_n);
    return 0;
}