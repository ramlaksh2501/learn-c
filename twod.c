#include<stdio.h>
int two(int * a,int row,int coulumn){
    return *((a+(10*row)+coulumn));
}


int main(){
    int arr[10][10]={{0,0,0,0,0,0,0,0,0,0},{11},{12}};
    printf("%d\n",two(arr,2,0));
    return 0;
}