//find the two digit odd numbers whose sum of digits is 7
#include<stdio.h>
 int two_o(int *odd){
    int i=10;int index=0;
    for(i;i<100;i++){
        if(i%2!=0&&((i%10)+i/10)==7){odd[index]=i;
        index++;}
    }return index;
}
int main(){int arr[10];int k=two_o(arr);
    for(int i=0;i<k;i++){
        printf("%d\n",arr[i]);

    }
    return 0;
}
