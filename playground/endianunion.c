#include<stdio.h>
union a{
	int m;
	char i;}
	;
union z{
	unsigned char a;
	unsigned char b;};
int main(){union z p;
	char * y=(char *)&p;
	int *pa=(int *)y;
	*pa=0xf400ffff;
	if(p.a==0xf4) printf("big\n");
	else printf("little\n");
	union a s;
	s.m=1;
	if(s.i==1) printf("little\n");
	else printf("big\n");
	unsigned int a=1;
	unsigned char *x =(char *)&a;
	printf("%x\n",*(x));
	return 0; }

