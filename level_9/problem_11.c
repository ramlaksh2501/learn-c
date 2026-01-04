//get five numbers as input and reverse them and store them in a new array 
//then print the sum of all the elements in the new array 
#include<stdio.h>
int main(){
    int arr[5];int sum=0;
    int rev[5]={0};
    for(int i=0;i<5;i++){scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){int temp=arr[i];
        for(temp;temp!=0;temp=temp/10){
            rev[i]=(rev[i]*10)+(temp%10);
        }
        sum+=rev[i];
    }
    printf("%d\n",sum);
    return 0;
}
    