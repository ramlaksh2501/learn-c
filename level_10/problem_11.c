//get any number upto 50 digits as a string 
//convert that into array of integers
#include<stdio.h>
#include<string.h>
int main(){
    char num[52];
    int arr[50];
    fgets(num,52,stdin);
    int index=0;
    for(int i=0;i<=strlen(num)-2;i++){
            arr[index]=num[i]-48;
            index++;
            
    }
    for (int i=0;i<index;i++){
        printf("%d\n",arr[i]);
    }
 
    return 0;
}