//convert an array of integers into char array(string) 
// print that string 
#include<stdio.h>
int main(){
    int arr[50]={1,2,3,4,5,6,7,8,-1};
    //-1 means end of the number (assumption)
    char nums[51];
    int i=0;
    for(i;arr[i]!=-1;i++){
        nums[i]=arr[i]+48;
    }nums[i]='\0';
    printf("%s\n",nums);
    return 0;

  
}