#include<stdio.h>
int main (int aim,char *bot[]){
    printf("no of arguments %d\n",aim);
    char a;
    int b;
    int  c;
    long long d;
    float m;
    m=0xffffFFFF;
    double j;
    printf("char:%p int:%p  long:%p long long :%p float:%p double:%p\n",
        &a,&b,&c,&d,&m,&j);
    printf("char:%ld int:%ld  long:%ld long long :%ld float:%ld double:%ld\n",
        sizeof(a),sizeof(b),sizeof(c),sizeof(d),sizeof(m),sizeof(j));
        printf("%f\n",m);
    return 0;
}