//get numbers as input from the user
//stop getting input from the user when the input is 0
//if odd number of inputs are given print the middle element 
//else print the mean of the middle two elements 
#include<stdio.h>
int main(){
    int arr[100];int count=0;int sum=0;
    for(int i=0;i<100;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==0){break;}
        count++;
    }
    if(count%2!=0){
        printf("%d\n",arr[(count/2)]);
    }
    else{printf("%d\n",((arr[(count/2)]+arr[((count/2)-1)])/2));}
    return 0;
    
}