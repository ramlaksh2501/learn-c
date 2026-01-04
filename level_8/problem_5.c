//get a number as input and print the number of digits in that number
#include<stdio.h>
int c_digit(int x){int count =0;
    for (x;x!=0;x=x/10){count++;}
    return count ;
}
int main(){
    int s;
    scanf("%d",&s);
    int r=c_digit(s);
    printf("%d\n",r);
    return 0;
}