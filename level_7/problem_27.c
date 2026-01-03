//total count of numbers less than 100000 whose sum of digits in 14
#include<stdio.h>
void count_l(){
     int count =0;
    for (int i=0;i<100000;i++){int sum=0;
    for (int j=i;j!=0;j=j/10){
        sum+=j%10;
    }if(sum==14) count++;
    }
    printf("%d",count);

}
int main(){
   count_l();
    return 0;
}