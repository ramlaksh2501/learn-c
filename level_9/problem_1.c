//in this level we are gonna use arrays to do all the tasks
//get 5 numbers as input and print the sum of all the numbers
#include<stdio.h>
int main(){
    int arr[5];int sum=0;
    for (int i=0;i<5;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("%d",sum);
    return 0; 
}