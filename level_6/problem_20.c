//print the total number of single digit prime  number 
#include<stdio.h>
int main(){int no=0;int i=2;
    while(i<10){int f=0;int j=2;
    while(j<=i/2){
        if(i%j==0) f++;
        j++;
    } if(f==0) {no++;}
    i++;
}
printf("%d",no);
return 0;
}