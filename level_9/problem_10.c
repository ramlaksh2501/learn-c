//get 5 numbers as input and remove the prime numbers 
//store the other numbers in a new array and print the new array
//get 5 inputs and store only the odd numbers in a new array and print the new array
#include<stdio.h>
int main(){
    int arr[5];
    int no_prime[5];int j=0;
    for(int i=0;i<5;i++){int f=0;
        scanf("%d",&arr[i]);
        for (int l=2;l<=(arr[i]/2);l++){
            if(arr[i]%l==0){f++;break;}
        }
        if(f!=0){no_prime[j]=arr[i];j++;}
    }
    for(int i=0;i<j;i++){
        printf("%d\n",no_prime[i]);
    }
    return 0;
}
