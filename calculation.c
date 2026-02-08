#include<stdio.h>
#include<time.h>
int main(){
clock_t begin = clock();
int i;
    int j;
    scanf("%d",&i);
    scanf("%d",&j);
    int k;
    k=i*j;
    printf("%d\n",k);
      clock_t end = clock();
double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
printf("%f\n",time_spent);
return 0;
 


}