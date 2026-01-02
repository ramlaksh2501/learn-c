//print the sum of the two  digit odd numbers whose ten's digit is equal to 7
#include<stdio.h>
int main(){
    int x=10;int s=0;
    while(x<100){
       if((x/10==7) &&(x%2!=0)){s+=x;}
        x++;
    }
     printf("%d\n",s);
    return 0;
}