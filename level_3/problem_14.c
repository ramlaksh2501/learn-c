//get a four digit input print success if the first and the last two digits of the number is identical
//else print failure
#include<stdio.h>
int main (){
    int a;
    scanf("%d",&a);
    if(((a%10)+(((a/10)%10)*10))==((a/100)%100)){
        printf("sucsess");
    }
else{
    printf("failure");
}
return 0;
}