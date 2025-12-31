//get a two digit input print 0 if the two digits are identical ,else print 1
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    printf("%d",(!((a%10)==((a/10)%10))));
    return 0;
}