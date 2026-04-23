#include<stdio.h>
int main(){
	int lower , upper,step;
	lower=0;
	step=-20;
	upper =300;
	printf("\t\tFar to celsius table\n");
	while(lower<upper){
		printf("%3d -> %3.1f\n",upper,(float)5*(upper-32)/9);
		upper+=step;}
	return 0;}
		
