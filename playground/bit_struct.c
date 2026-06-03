#include<stdio.h>


int main (){
	typedef struct {
		int a;
		int b;}hell;



	hell am;
	hell *pt=&am;
	pt->a=5;
	printf("%d\n",am.a);
	return 0;
}
