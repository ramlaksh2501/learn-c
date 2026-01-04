//we are gonna use function to do each task and return the result throughout this level
//sum of numbers from 1 to 5
#include<stdio.h>

int count_sum (){int sum=0;
    for (int i=0;i<=5;i++){
sum+=i;
    }
    return sum;

}
int main(){
int y=count_sum();
printf("%d\n",y);
return 0;
}