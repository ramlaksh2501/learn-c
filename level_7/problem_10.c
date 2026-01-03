//print the sum of the two  digit odd numbers whose ten's digit is equal to 7
#include<stdio.h>
void two_digit_main(){ int x=10;int s=0;
    for (x;x<100;x++){
       if((x/10==7) &&(x%2!=0)){s+=x;}
    }
     printf("%d\n",s);}}
int main(){
   two_digit_odd();
    return 0;
}
