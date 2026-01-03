//get three numbers as input and print their lcm
#include<stdio.h>
void lcm_3(int n1,int n2,int n3){
int g ;
    if (n2>n1&&n2>n3){g=n2;}
    else if(n3>n1&&n3>n2) g=n3;
    else g=n1;

    for (int lcm=g;g!=0;lcm+=g){
        if(lcm%n1==0 && lcm%n2==0 &&lcm%n3==0){ printf("%d",lcm);
        return ;
    }}
}
int main(){
    int n1,n2,n3;
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    lcm_3(n1,n2,n3);
 return 0;   
}