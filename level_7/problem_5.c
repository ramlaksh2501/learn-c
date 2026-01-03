//print the odd numbers from 0 to 9
#include<stdio.h>
void odd(){
     int x=0;
    for (x;x<10;x++){
        if(x%2!=0){
            printf("%d\n",x);
        }

    }
}
int main(){
   odd();
    return 0;
}