// get a number as input and reverse the first and the last digit of the number 
#include<stdio.h>
int main(){
    int x,m,p;m=0;p=0;
   scanf("%d",&x);int y=x%10;int k;
    x=x/10;
    int c=x;
    loop:if(x!=0){ m+=x%10;m*=10;
           k=x;
        x/=10;
        goto loop;
    } m/=100;
    p=y;
    p*=10;
   lp: if(m!=0){
        p+=m%10;
        m/=10;
        p*=10;
        goto lp;
    }p+=k;
   printf("%d",p);
    return 0;
}