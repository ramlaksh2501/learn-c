//get sum of a array using two threads
//use a common global variable to store the sum 
//use mutex to avoid race conditions



#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>

int array[]={83,43,43,86,20,32,4,12,5,2};
int sum=0;
pthread_mutex_t mut;

void * sum_routine(void * index){
	for(int i=*(int*)index;i<(*(int*)index)+5;i++){
	pthread_mutex_lock(&mut);
	sum+=array[i];
	pthread_mutex_unlock(&mut);
	}
	free(index);
}


int main(){
	pthread_mutex_init(&mut,NULL);
	pthread_t thread[2];
	for(int count=0;count<2;count++){
		int *index=(int *)malloc(sizeof(int));
		*index=count*5;
		pthread_create(thread+count,NULL,sum_routine,(void **)index);
		}
        for(int count=0;count<2;count++){
		pthread_join(thread[count],NULL);
		}
	printf("the sum of the array is:%d\n",sum);
	pthread_mutex_destroy(&mut);
	return 0;
}
