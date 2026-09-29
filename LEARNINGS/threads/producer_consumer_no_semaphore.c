/* actually i can solve this problem with just if conditions ,but it turns out pollig on the count of the 
  elements filled wastes cpu . If the threads are high lets say 64 threads the waiting threads will use all the cpu
  leaving no room for a thread to produce 
  thats where semaphore comes to play, if we use semaphores if it cannot able to do sem_wait it will eventually
  release cpu ( sort of the OS scheduler will only shedule this thread only if it ever receive a post[i think its like this] ) 
  so its better to use semaphores :)
 */




#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<semaphore.h>
#include<unistd.h>
#include<time.h>



#define THREAD_NUM 30


int buffer[10];
int count=0;
pthread_mutex_t buffer_mutex;

void* producer(void* args){
	while(1){
		pthread_mutex_lock(&buffer_mutex);
		if(count<10){
		buffer[count]=(random()%9)+1;
		count++;
		}
		pthread_mutex_unlock(&buffer_mutex);
		sleep(1);
		
	}
	return NULL;

}

void* consumer(void* args){
	while(1){
		pthread_mutex_lock(&buffer_mutex);
		if(count>0 && count<11){
		printf("got value:%d\n",buffer[count-1]);
		count--;
		}
		pthread_mutex_unlock(&buffer_mutex);
	}
	return NULL;
}




int main(int argc, char** argv){
	pthread_mutex_init(&buffer_mutex,0);
	srand(time(NULL));
	pthread_t th[THREAD_NUM];
	for(int i=0;i<THREAD_NUM;i++){
		if(i%2==0){
		       	if(pthread_create(&th[i],NULL,&producer,NULL)!=0){
				printf("Not able to create thread\n");
			}
		}
		else{
			if(pthread_create(&th[i],NULL,&consumer,NULL)!=0){
				printf("Not able to create thread\n");
			}
		}


	}

	for(int i=0;i<THREAD_NUM;i++){
		if(pthread_join(th[i],NULL)!=0){
			printf("not able to join the threads\n");
			}
	}
	pthread_mutex_destroy(&buffer_mutex);


	return 0;
}
