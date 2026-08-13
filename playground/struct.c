#include<stdio.h>
#include<stdlib.h>
int main(){
	struct name { int x;
		int y;};
	struct name *z;
	z=(struct name *) malloc(sizeof(struct name));
	printf("address :%p\n",z);
	z->x=0;
	z->y=0;
	printf("x:%d  y:%d\n",(*z).y,(*z).x);
	return 0;}
