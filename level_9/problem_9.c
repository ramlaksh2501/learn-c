//get 5 inputs and store only the odd numbers in a new array and print the new array
#include<stdio.h>
int main(){
    int arr[5];
    int no_even[5];int j=0;
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2!=0){no_even[j]=arr[i];j++;}
    }
    for(int i=0;i<j;i++){
        printf("%d\n",no_even[i]);
    }
    return 0;
}
