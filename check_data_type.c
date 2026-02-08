//write a program so that you can able to check the data type without using any function
//only works for unsigned datatypes i think
#include<stdio.h>                         
#include<inttypes.h>
 int main(){
    uint8_t  x;
  // x=1<<7;
    x=~x;
    printf("%llx",x);
}
