//get 5 number as input and print the smallest number 
#include<stdio.h>
int main(){
    int arr[5];
    int small=99999999;
     for (int i=0;i<5;i++){
        scanf("%d",&arr[i]);
        if(small>arr[i]) small=arr[i];
        
    }
    printf("%d\n",small);
    return 0;
}