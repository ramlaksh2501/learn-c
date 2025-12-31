//get a two digit input if the two digits are identical print success ,else print failure
#include<stdio.h>
int main (){
    int a;
    scanf("%d",&a);
    if((a%10)==((a/10)%10)){
        printf("sucsess");
    }
else{
    printf("failure");
}
return 0;
}