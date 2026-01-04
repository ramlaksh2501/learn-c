//get three numbers as input and print their lcm
#include<stdio.h>
int lcm_3(int n1,int n2,int n3){
int g ;
    if (n2>n1&&n2>n3){g=n2;}
    else if(n3>n1&&n3>n2) g=n3;
    else g=n1;

    for (int lcm=g;g!=0;lcm+=g){
        if(lcm%n1==0 && lcm%n2==0 &&lcm%n3==0){
        return lcm;
    }}
    return 0;
}
int main(){
    int n1,n2,n3;
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
int answer=lcm_3(n1,n2,n3);
printf("%d\n",answer);
 return 0;   
}