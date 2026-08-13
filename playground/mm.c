#include<stdio.h>
int main (){

	int a=5;
	int *c;
	c=&a;
	printf("%p %p\n",&(*c),c);
	return 0;
}
