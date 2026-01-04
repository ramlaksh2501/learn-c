//get a number from the user and print the total number of single digit prime in it 
#include<stdio.h>
int t_sp(int x){
    int count=0;
    for (x;x!=0;x/=10){
        if(x%10==2||x%10==3||x%10==5||x%10==7) count++;
    }
    return count;
}
int main(){
    int input;
    scanf("%d",&input);
    int result=t_sp(input);
    printf("%d\n",result);
    return 0;
}