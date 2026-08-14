//get the sum of the array by spliting the job into two threads
//use thread argument and also return value
#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>


int array[]={1,8,7,6,9,12,23,78,98,1};


void * sum_of_array(void *index){
	int sum=0;
	for(int i=*(int*)index;i<(*(int*)index)+5;i++){
		sum+=array[i];}
	printf("sum from index %d to %d is:%d\n",*(int*)index,*(int*)index+5,sum);
	*(int *)index=sum;
	return (void*)index;
}


int main(){
	pthread_t thread[2];
	for(int count=0;count<2;count++){
		int *index=malloc(sizeof(int));
		*index=count*5;
		pthread_create(&thread[count],NULL,sum_of_array,(void*)index);
	}
	int sum_array=0;
	for(int count=0;count<2;count++){
		int *tempsum;
		pthread_join(thread[count],(void **)&tempsum);
		sum_array+=*tempsum;
		free(tempsum);
	}
	printf("total sum:%d\n",sum_array);
	return 0;}

