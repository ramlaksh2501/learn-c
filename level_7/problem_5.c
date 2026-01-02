//print the odd numbers from 0 to 9
#include<stdio.h>
int main(){
    int x=0;
    for (x;x<10;x++){
        if(x%2!=0){
            printf("%d\n",x);
        }

    }
    return 0;
}