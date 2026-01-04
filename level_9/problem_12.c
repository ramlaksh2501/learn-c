//get input numbers from the user and store them in an array 
//stop getting input when the input is zero 
//print the total number of input got 
//print the sum of the inputs
#include<stdio.h>
int main(){
    int arr[100];int count=0;int sum=0;
    for(int i=0;i<100;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==0){break;}
        count++;
    }
    for (int i=0;i<count;i++){
        sum+=arr[i];
    }
    printf("no of input:%d\nsum of them:%d\n",count,sum);
    return 0;
    
}