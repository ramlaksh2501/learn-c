//get numbers as input from the user
//stop getting input from the user when the input is 0
//if the number of input is 4 and the 
//first and the last input is equal then print succes ,else print failure
#include<stdio.h>
int main(){
    int arr[100];int count=0;int sum=0;
    for(int i=0;i<100;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==0){break;}
        count++;
    }
    if(count==4 && arr[0]==arr[(count-1)]){
        printf("succes");
    }
    else{printf("failure");}
    
}