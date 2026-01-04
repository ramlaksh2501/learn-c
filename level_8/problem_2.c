//to print the sum from 6 to one 
#include<stdio.h>
int rev_count(){
    int sum=0;
    for (int i=6;i>=0;i--) {sum+=i;}
    return sum;
}
int main (){
    int z=rev_count();
    printf("%d\n",z);
    return 0;
}