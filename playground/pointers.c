#include<stdio.h>
int main(){
    char r[]="laksh";
    char *l;
    l=r;
    do {
        printf("%c",*l);

    }
    while(*l++);
   // int k=0;
    //printf("%d",k++);
}