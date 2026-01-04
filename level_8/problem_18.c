//get two numbers as input and print their lcm
/* lcm is the lowest number that can be formed by multipling any of the given number 
(input for lcm)with any other number(which makes the output same for both numbers
this may be different for both number but the result will be same)
(its always larger than the larger input)
*/
#include<stdio.h>
int lcm_2(int n1,int n2){
 int g=n1;
    if (n2>n1){g=n2;}
    for (int lcm=g;g!=0;lcm+=g){
        if(lcm%n1==0 && lcm%n2==0){
        return lcm ;
    }}  return 0;
}
int main(){
    int n1,n2;
    scanf("%d",&n1);
    scanf("%d",&n2);
  int answer= lcm_2(n1,n2);
  printf("%d\n",answer);
   return 0;
}