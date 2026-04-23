#include<stdio.h>
int main(){
	int lower , upper,step;
	lower=0;
	step=20;
	upper =300;
	printf("\t\tFar to celsius table\n");
	while(lower<=upper){
		printf("%3d -> %3.1f\n",lower,(float)5*(lower-32)/9);
		lower+=step;}
	return 0;}
		
