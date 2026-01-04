//get 5 numbers as input from user and print them in ascending order
#include<stdio.h>
int main(){
    int arr[5];
     for (int i=0;i<5;i++){
            scanf("%d",&arr[i]);}

    for (int i=0;i<5;i++){
        for(int j=0;j<(5-1-i);j++){
          int temp=arr[j];
          if(arr[j]>arr[j+1]){arr[j]=arr[j+1];
        arr[j+1]=temp;}
        }
    }
    for (int i=0;i<5;i++){
            printf("%d\n",arr[i]);}
        return 0;}
//this is called bubble sort 
