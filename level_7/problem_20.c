//print the total number of single digit prime number 
#include<stdio.h>
void s(){
int no=0;
    for(int i=2;i<10;i++){int f=0;
    for (int j=2;j<=i/2;j++){
        if(i%j==0) f++;
    } if(f==0) {no++;}
}
printf("%d",no);
}
int main(){s();
    return 0;
}