#include<stdio.h>
#include<string.h>

void print_ascii(char *string){
	printf("char:ascii\n");
	int size=strlen(string);
	for(int i=0;i<size;i++){
		printf("  %c :  %d \n",string[i],string[i]);
	}
}


int main(int argv,char ** argc){
	print_ascii(&argc[1][0]);
	return 0;
}
	
