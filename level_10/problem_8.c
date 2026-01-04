//get a 50 digit number as a string and validate it 
#include<stdio.h>
#include<string.h>
int main(){
    char num[51];
    fgets(num,51,stdin);
    for(int i=0;i<strlen(num)-1;i++){
        if(num[i]<=57 && num[i]>=48){
        }
        else{printf("invalid"); return 0;}
    }
    printf("valid");
    return 0;
}