//Every thread rolls a dice ,save its value in an array .
//The main thread calculates the winner then 
//Each therad prints a message with wheather or not they lost or won 
//get input the number of the players playing the game


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<pthread.h>
#include<unistd.h>
#include<string.h>


typedef struct {
	int id;//player no
	int score;//what is the value of their dice after it rolls
	int status;//is the player a winner or loser in that game
}Player;


pthread_barrier_t wait_players;




void * roll_dice(void* player ){
	pthread_barrier_wait(&wait_players);
	usleep(200000);
        ((Player*)player)->score=(random()%6)+1;
	//printf("rolled dice\n");
	pthread_barrier_wait(&wait_players);
	pthread_barrier_wait(&wait_players);
	printf("player %d scored:%d  and  %s\n",
	((Player*)player)->id,((Player*)player)->score,((Player*)player)->status ? "won" : "lost");
	pthread_barrier_wait(&wait_players);
	return NULL;

}


int convert_char_to_num(char input){
	return input-48;
}

int convert_str_to_num(char *num){
	int size=strlen(num);
	int players=0;
	for(int i=0;i<size;i++){
		players*=10;
		players+=convert_char_to_num(num[size-i-1]);
	}
	return players;
}


int main(int argv,char ** argc){
	if(argv!=2){
		printf("usage:<no_of_players> \nerror:input required\n");
		return 0; 
			}
 	if(argv>2){
		printf("usage:<no_of_players> \nerror:too many input\n");
		return 0;
	}
	
	int players=convert_str_to_num(argc[1]);//converting input string to actual number
	pthread_barrier_init(&wait_players,NULL,players+1);
	pthread_t dice[players];
	Player *player[players];
	for (int i=0;i<players;i++){
		player[i]=(Player*)calloc(sizeof(Player),1);//creating every player stats
		player[i]->id=i;
	}
	for(int i=0;i<players;i++){
		pthread_create(dice+i,NULL,roll_dice,(void **)player[i]);
	}
	pthread_barrier_wait(&wait_players);
	//printf("waiting for everyone to start\n");
	pthread_barrier_wait(&wait_players);
	printf("rolling.........\n");
	int highest=0;
	for(int i=0;i<players;i++){
			if(player[i]->score > highest){
					highest=(player[i])->score;
			}
			}
	for(int i=0;i<players;i++){
		//printf("highest:%d\n",highest);
			if((player[i])->score == highest){
					(player[i])->status=1;
			}
			}
	pthread_barrier_wait(&wait_players);
	pthread_barrier_wait(&wait_players);
	for(int i=0;i<players;i++){
		pthread_join(dice[i],NULL);
		free(player[i]);//don't forget to free
		//printf("done free\n");	
		}
	pthread_barrier_destroy(&wait_players);
	return 0;
	}
