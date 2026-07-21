#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<fcntl.h>
int main (){
	int id=fork();
	if(id == -1 ){
		return 1;
	}
	if(id==0){
		// child process
		int fd=open("cmd.sh",O_CREAT | O_WRONLY );
		write(fd,"echo \"hello world!\" ",21);
		close(fd);
	return 0;	
	}
	else{(NULL);
		return 0 ;
		//parent process
	}	
}
