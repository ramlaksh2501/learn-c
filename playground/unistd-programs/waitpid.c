#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main(){
	int x=getpid();
	waitpid(x,NULL,0);
	return 0;}

