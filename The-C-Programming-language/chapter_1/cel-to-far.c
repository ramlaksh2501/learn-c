#include<stdio.h>
int main(){
	int cel,step,upper;
	cel=0;
	step=5;
	upper=50;
	while(cel<=upper){
		printf("%2d -> %3.1f\n",cel,(float)((cel*1.8)+32));
		cel+=step;}
	return 0;}
