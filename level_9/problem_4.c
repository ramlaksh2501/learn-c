//get 5 number from the user and print the biggest number
#include<stdio.h>
int main(){
    int arr[5];
    int big=0;
     for (int i=0;i<5;i++){
        scanf("%d",&arr[i]);
        if(big<arr[i]) big=arr[i];
        
    }
    printf("%d\n",big);
    return 0;
}