#include<stdio.h>

#define DUTY 512

int main(){
	printf("%x\n",DUTY);
	printf("%x\n",DUTY&0x03<<4);
	return 0;}
