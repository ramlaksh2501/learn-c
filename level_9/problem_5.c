//get five numbers from the user and print them in ascending order
#include<stdio.h>
int main(){
    int arr[5];
     for (int i=0;i<5;i++){
            scanf("%d",&arr[i]);}

    for (int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            if(arr[i]>arr[j]){int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
        }
    }
    for (int i=0;i<5;i++){
            printf("%d\n",arr[i]);}
        return 0;}
//this is called the selection sort algorithm