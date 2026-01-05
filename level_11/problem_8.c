//compare two string
// if they are equal(each element of the two string at all index) print success
#include<stdio.h>
#include<string.h>
void comp(char *a,char *b,int size){
    for (int i=0;i<size;i++){
        if(a[i]==b[i]){}
        else {printf("failure");
        return;}
    }
    printf("success");
    return;
}
int main(){
    char str1[50]="hello from the other side";
    char str2[50]="hello from the other side";
    comp(str1,str2,strlen(str1));
    return 0;

}