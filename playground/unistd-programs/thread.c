#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<pthread.h>
void  thread_print(){
	while(1){
		printf("hello from the thread!!\n");
		printf("id of thread:%ld\n PID of thread:%d\n",pthread_self(),getpid());
	sleep(2);}
}


void normal_print(){
	while(1){
	printf("hello from the process!!\n");

	printf(" PID of the process:%d\n",getpid());
	sleep(1);}
}


int main(){
	pthread_t id;
void (*he)();
	he=&thread_print;
	pthread_create(&id,NULL,thread_print,NULL);
	normal_print();
	return 0;}
