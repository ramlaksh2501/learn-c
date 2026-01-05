//mov elements from one array to another and print the new array in main function 
#include<stdio.h>
void mov(int *s,int *d,int size){
for(int i=0;i<size;i++){
d[i]=s[i];
}
}
int main(){ 
    int arr[5]={1,45,12,63,45};
    int arr2[5];
    mov(arr,arr2,5);
    for(int i=0;i<5;i++){
        printf("%d\n",arr2[i]);
    }
    return 0;

}
