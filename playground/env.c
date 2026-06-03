#include<stdio.h>


int main(int argv,char **argc,char **env)
{
int i=0;
	while (*env[i]!=0){
		printf("%s\n",env[i]);
		i++;}
return 0; 




}

