//get 5 numbers as input and print the average of all the number
#include<stdio.h>
int main(){
    int arr[5];int sum=0;
    for (int i=0;i<5;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("%d",sum/5);
    return 0; }