#include<stdio.h>
int main(){
	char *m;
	*m='o';
//.	*(m+1)='h';
//
	*(m+2)=0;
	char s[]="hello world!";
	s[0]='a';
  	//m[0]='h';
//*m='a';
	printf("m:%s\ns:%s\n",m,s);
	return 0; }
