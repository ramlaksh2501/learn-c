//get upto 50 digits and reverse it 
#include<stdio.h>
#include<string.h>
int main(){
    char num[51];
    char num_rev[51];
    fgets(num,51,stdin);
    int index=0;
    for(int i=strlen(num)-1;i>=0;i--){if(num[i]=='\n'){continue;}
           num_rev[index]=num[i];
           index++;
            }   
    
   printf("%s\n",num_rev);
    return 0;
}