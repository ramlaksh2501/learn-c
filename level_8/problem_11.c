//get a number as input and print the total number of odd digits in that number
#include<stdio.h>
int c_odd(int x){
    int count =0;
    for (x;x!=0;x/=10){
        if((x%10)%2!=0) count++;
    }
    return count;
}
int main(){
    int k;
    scanf("%d",&k);
    int answer=c_odd(k);
    printf("%d\n",answer);
    return 0;
}