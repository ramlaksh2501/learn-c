#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
#include<time.h>
int main(){
	//----------TO GENERATE RANDOM NUMBERS-----------
	srand(time(NULL));//to get random value 
			  //without this we get the same value from rand() for every time of execution 
			  //this call randomize it every time we run it 
			  //ran relies on a seed value which does not change so we change that value on every run time 
	//printing random numbers
	printf("%d\n",rand()%11);
	printf("%d\n",rand()%11);
	//---------  OPENING AND CLOSING A PIPE -----------
//------>	int fd_pipe[2];
//------>	pipe(fd_pipe); -> opening pipe
//------>	close(fd_pipe[0]);// -> reading end of the pipe 
//------>	close(fd_pipe[1]); //-> wrinting end of the pipe 

	//-------------CREATING A CHILD PROCESS AND HANDLING PIPES-----------
	int pipe_fd[2];
	if(pipe(pipe_fd) < 0) return 1;// error while creating the pipe
	int id =fork();
	if(id <0) return 2;//fork failed 
	
	if(id==0){
// we are the child process 
	close(fd[0]);
	close(fd[1]);
	printf("hello from the child!!\n");
	
	}

	else {
	//we are the parent process 
	write(1,"hello from the parent :\n",24);
	wait(NULL);
	close(fd[0]);
	close(fd[1]);

	}
	//------------CREATING AND HANDLING FIFOs-----------------
	return 0;		  
}
