#include<stdio.h>
#include<unistd.h>
int main(){if( fork()==0)
	{
if(execlp("./out",NULL)!=-1){
    printf("hello then the exec failed\n");
}}
    printf("hello worldfrom the parent!\n");
return 0; }

