#include<stdio.h>
#include<math.h>
int main(){
	int num=34000000;
	int count=(int)(log10(num)) +1;
	printf("%d\n",count);
	return 0; 
}	
