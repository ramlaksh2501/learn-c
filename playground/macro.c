#include<stdio.h>

void print(){
	printf("%s",MACRO);
}
int main(){#define MACRO "hello"
	return 0;}
