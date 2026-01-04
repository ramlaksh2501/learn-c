//get an number as a string and print it as integer 
#include<stdio.h>
#include<string.h>
int main(){
    char input[10];int answer=0;
    fgets(input,10,stdin);
    for(int i=0;i<strlen(input)-1;i++){
        answer=(answer*10)+(input[i]-48);
    }
    printf("%d\n",answer);
    return 0;
}