//get number as a string upto 50 digits
//remove all the leading zeros
//input:007 output:7
#include<stdio.h>
#include<string.h>
int main(){
    char num[51];
    fgets(num,51,stdin);
    int flag=0;
    int index=0;
    for(int i=0;i<=strlen(num);i++){
            if(num[i]=='\n'){continue;}
            if(flag==0 && num[i]==48){flag=0;}
            else{flag=1;
            num[index]=num[i];
            index++;
            }   
    }
   printf("%s\n",num);
    return 0;
}