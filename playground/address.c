#include<stdio.h>
#include<stdlib.h>
int main(){int h=malloc(sizeof(char));
    for(int a=0;a<0x1ff;a++) printf("%c",h+a);
    return 0;
}