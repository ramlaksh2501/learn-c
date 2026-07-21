#include<string.h>
#include<stdio.h>


int main(){
	char *name="hello.asm";
	int seg=strcspn(name,"r");
	printf("seg:%d\n",seg);
	printf("%d\n",strcmp(name+(seg+1),"asm"));
	return 0; 
}

