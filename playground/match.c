#include<stdio.h>
#include<stdint.h>
int main(){
    uint8_t a;
    a=0x0f;
    if((unsigned char)(~a) == 0xf0) printf("match\n");
  
}