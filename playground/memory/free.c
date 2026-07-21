#include<stdlib.h>
#include<stdio.h>



int main(){
	int *a;
	a=malloc(sizeof(int)*10);
	a[9]=99;
	printf("number before free:%d\n",a[9]);
	free(a);
	a=calloc(sizeof(int),10);
	printf("number after free:%d\n",a[9]);
	return 0;
}
