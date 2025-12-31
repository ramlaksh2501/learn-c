//get a four digit input print 1 if the first two digits and the last two digits  are identical ,else print 0
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    printf("%d",(((a%10)+(((a/10)%10)*10))==((a/100)%100)));
    return 0;
}