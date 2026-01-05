//merge two array in a function
#include<stdio.h>
void merge(int *a ,int *b,int sizea,int sizeb,int *ans){
  int  index=0;
for (int i=0;i<sizea;i++){
    ans[index]=a[i];
    index++;
}
for (int j=0;j<sizeb;j++){
    ans[index]=b[j];
    index++;
}

}
int main(){
    int arr[5]={12,23,4,3,2};
    int arr2[5]={62,21,45,37,24};
    int ans[5+5];
    merge(arr,arr2,5,5,ans);
    for(int i=0;i<10;i++){
        printf("%d  ",ans[i]);
    }
    return 0;
}