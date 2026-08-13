//6 players need to roll dice at the same time
//implement with the single routine called by 6 threads
//get the return value 

#include<stdio.h> //for print and 
#include<pthread.h> //for thread functions
#include<time.h> // to provide a unique key to  random function seed value via the time function
#include<stdlib.h> //to get the random funciton
#include<unistd.h> //sleep
void * roll_dice(){
	//return the address of the value of the dice we get 
	//need to allocate the memory dynamically because the local values are not retained as the function ends the stack will be pointing to a new set of values (stack only has local variable)(after function returned it cannot be retained so if we send that address then it will result in a segfault)
	int *dice=malloc(sizeof(int));
	srandom(time(NULL));
	*dice=(random()%6)+1;
//	int di=(random()%6)+1;
//	printf("you got:%d\n",res);
	return (void *)dice;//address of the dice value

}

int main(int argv,char ** argc){
	printf("rolling.....\n");
	int * value; //store the dice value's address
	usleep(999999);
	pthread_t dice;
	pthread_create(&dice,NULL,roll_dice,NULL);
	pthread_join(dice,(void **)&value);//we pass the address of the pointer so the value of the pointer is the address of the dice value so that we derefrence the value of the pointer(address of dice value) to get the dice value
	printf("you got:%d\n",*value);
	return 0;
	}
