//get a number as input and print the sum of digits
#include<stdio.h>
int s_digit(int x){int sum =0;
    for (x;x!=0;x=x/10){sum+=x%10;}
    return sum ;
}
int main(){
    int s;
    scanf("%d",&s);
    int r=s_digit(s);
    printf("%d\n",r);
    return 0;
}