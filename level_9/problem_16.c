//assume an array has 50 digits in each of its index //0<=array[i]<=9
//lets assume there are two such arrays 
//assume those arrays as two 50 digit numbers
//we need to create a 51 digit array and store the sum of the two 50 digit arrays
#include<stdio.h>
int main(){
    int arr[50]={0};
    int arr2[50]={0};
    int sum[51]={0};
    int c=0;
    for (int i=49;i>=0;i--){
        int s=arr[i]+arr2[i]+c;
        sum[i+1]=s%10;
        c=s/10;
    }sum[0]=s;
    return 0;
}