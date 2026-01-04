//get a number as input and print the total no of single digit perfect squares in it
#include<stdio.h>
int t_ps(int x){
    int count=0;
    for (x;x!=0;x=x/10){
        if(x%10==0||x%10==4||x%10==9||x%10==1){count++;}
    }
    return count;
}
int main(){
    int input;
    scanf("%d",&input);
    int result=t_ps(input);
    printf("%d\n",result);
    return 0;
}