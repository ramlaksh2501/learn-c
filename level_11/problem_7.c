//compare two array
// if they are equal(each element of the two array at all index) print success
#include<stdio.h>
void comp(int *a,int *b,int size){
    for (int i=0;i<size;i++){
        if(a[i]==b[i]){}
        else {printf("failure");
        return;}
    }
    printf("success");
    return;
}
int main(){
    int arr[5]={12,45,74,12,14};
    int arr2[5]={12,45,74,12,4};
    comp(arr,arr2,5);
    return 0;

}