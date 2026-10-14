#include<stdio.h>


typedef struct {
	unsigned int a :1;
	unsigned int b:31;}field;
typedef union {
	field number;
	
}union_field;

typedef union{
	unsigned int a:1;
	unsigned int b:31;
}


int main(){

	int x=34;
	union_field* y;
	printf("size of struct:%d\n",sizeof(union_field));
	y=&x;
	printf("%d\n",y->number.a);

	return 0;
}
