#include<stdio.h>
#include<string.h>



void add(char* input_1,char* input_2,char* result){
	int size_1=strlen(input_1)-1;
	int size_2=strlen(input_2)-1;
	int big=size_1>size_2 ? size_1 : size_2;
	int index=big+1+1;
	char result[index];
	result[index-1]=0;
	index-=2;
	for(int i=index;i>=0;i--) result[i]='0';
	while(size_1 || size_2)






}



int char2num(char inp){
	return inp-'0';
}
char num2char(int num){
	return '0'+num;
}

void mul(char* input_1 , char* input_2){
	int size_1=strlen(input_1)-1;
	int size_2=strlen(input_2)-1;
	int big=size_1>size_2 ? size_1 : size_2;
	int index=((big+1)*2)+1;
	char result[index];
	result[index-1]=0;
	index-=2;
	for(int i=index;i>=0;i--) result[i]='0';
	printf("%s\n",result);
	while(size_1>=0){
		int size=size_2;
		while(size>=0){





		}
	}
}

int main(){
	char input_1[70];
	char input_2[70];
	printf("1st number:");
	fgets(input_1,70,stdin);
	input_1[strcspn(input_1,"\n")]=0;
	printf("2nd number:");
	fgets(input_2,70,stdin);
	input_2[strcspn(input_2,"\n")]=0;
	printf("result:");
	mul(input_1,input_2);

}

