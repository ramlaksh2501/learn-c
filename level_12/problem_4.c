//get a string as input using gets function and print the number of words in that string 
#include<string.h>
#include<stdio.h>
int main(){
    int i=0;
    char input[100];
    gets(input);
    if(strlen(input)>0){
    i=1;
    }
    else i=0;
    for(int j;j<strlen(input);j++){if(input[j]==' '){i++;} }
printf("%d\n",i);
return 0;
}