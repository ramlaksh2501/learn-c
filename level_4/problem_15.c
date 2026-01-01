//get a number as input , if the msb of the number is even print the number ,else sub msb by one 
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);int msb;
    int m=0;
     loop: if(a!=0){
        m+=a%10;
        m*=10;
        msb=a;
        a/=10;
        goto loop;
    }m/=100;
    if(msb%2!=0){
        msb--;
    }
    int k=msb; k*=10;
 lp:   if(m!=0){
        k+=m%10;
        k*=10;
        m/=10;
        goto lp;
    }
printf("%d",k/10);
return 0;

}