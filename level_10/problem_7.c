//get a string as input and find its length 
#include<stdio.h>
int strlength(char * s){
    int count=0;
    while(s[count]!='\0'){
        count++;
    } return count-1;
}
int main(){
    char input[100];
    fgets(input,100,stdin);
   // printf("%d\n",sizeof(input)/sizeof(char));
   printf("%d\n",strlength(input));
    return 0;
}