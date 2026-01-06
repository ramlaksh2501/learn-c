#include<string.h>
#include<stdio.h>
int main(){
    char i[100]={0};
    i[3]='h';
    for(int j=3-1;j>=0;j--){i[j]='0';}
    printf("%s\n",i);
}