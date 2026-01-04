//sum of the two digit odd numbers whose ten's digit is 7
#include<stdio.h>
int so_7(){
    int sum=0;
    for (int i=10;i<100;i++){
        if(i%2!=0 && i/10==7){sum+=i;}
    }
    return sum;

}
int main(){
    int x=so_7();
    printf("%d\n",x);
    return 0;
}