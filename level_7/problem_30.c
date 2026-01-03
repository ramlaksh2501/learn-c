//get two number as input and print their hcf 
/*hcf is the highest number (any number) that can divide both the input
of the hcf (its always less than the smaller input)*/
#include<stdio.h>
void hcf_2(int n1,int n2){
 int s=n1;
    if (n2<n1){s=n2;}int hcf;
    for (int i=1;i<=s;i++){
        if(n1%i==0 && n2%i==0){ hcf=i; }
}
    printf("%d",hcf);
        return ;
}
int main(){
    int n1,n2;
    scanf("%d",&n1);
    scanf("%d",&n2);
    hcf_2(n1,n2);
    return 0;
}