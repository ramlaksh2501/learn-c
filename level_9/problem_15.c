//get multiple numbers as input 
//stop getting input when the input is zero
//add each numbers digit and keep it in a new array 
//arrange the new array in ascending order and print it 
#include<stdio.h>
int main(){
    int arr[100];int count=0;
     for (int i=0;i<100;i++){
            scanf("%d",&arr[i]);
        if(arr[i]==0){break;}
    count++;}
int sum_d[count];
for (int i =0;i<count;i++){int sum=0;
    int temp=arr[i];
    for(temp;temp!=0;temp=temp/10){
        sum+=temp%10;
    }
    sum_d[i]=sum;
}
    for (int i=0;i<count;i++){
        for(int j=0;j<(count-1-i);j++){
          int temp=sum_d[j];
          if(sum_d[j]>sum_d[j+1]){sum_d[j]=sum_d[j+1];
        sum_d[j+1]=temp;}
        }
    }
    for (int i=0;i<count;i++){
            printf("%d\n",sum_d[i]);}
        return 0;}