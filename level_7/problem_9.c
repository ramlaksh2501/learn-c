//print the sum of the two digit numbers whose one's digit is equal to 5
#include<stdio.h>
void ones_5(){ int x=10;int s=0;
    for (x;x<100;x++){
       if(x%10==5){s+=x;}
    }
     printf("%d\n",s);

}
int main(){
ones_5();
   
    return 0;
}