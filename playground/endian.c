#include<stdio.h>
int main (){
    long s;
    s=1;
    long long  *p;
    p=&s;
    printf("%d\n",sizeof(p));
    return 0;
}