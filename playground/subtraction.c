#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int char2num(char inp){
	return inp-'0';
}
char num2char(int num){
	return '0'+num;
}
void sub(char *input_1,char* input_2){
int size_1=strlen(input_1)-1;
int size_2=strlen(input_2)-1;
int neg=0;
int res;
int big=size_1>size_2 ? size_1+1 : size_2+1;
big=big+2;
char result[big];
big--;
result[big]=0;
big--;
for(int i=big;i>=0;i--) result[i]='0';
printf("%d size 1 \n %d size 2",size_1,size_2);
if(size_1<size_2){ 
	neg=1;
	char * temp=input_1;
	input_1=input_2;
	input_2=temp;
	int t;
	t=size_1;
	size_1=size_2;
	size_2=t;
}
while(size_1>=0 || size_2>=0){
	if(size_-1>=0 && size_2>=0){
		//printf("....\n");
		res=char2num(input_1[size_1])-char2num(input_2[size_2]);
		if(res<0 && size_1>0){
                        res=char2num(input_1[size_1])+10-char2num(input_2[size_2]);
			if(input_1[size_1-1]!='0'){
			input_1[size_1-1]--;
			}
			else{int count=0;
				for(int i=size_1-1;i>=0;i--){
					//nprintf(")))");
					count++;
					if(input_1[i]!='0') break;
				}
				input_1[size_1-count]--;
				for(int i=size_1-count+1;i<size_1;i++) input_1[i]='9';
			}
		}
		else if(res<0){
			res*=-1;
			neg=1;
		}
		if(res<0) {
		}
		result[big]=num2char(res);
		//nprintf("%d\n",num2char(res));
		//printf("big:%d\n",big);
		big--;
		size_2--;
		size_1--;
	}

	else if(size_1>=0){
	result[big]=input_1[size_1];
		big--;
		size_1--;
	}
	else if(size_2>=0){

}
}
if(neg) result[0]='-';
else result[0]=' '; 
printf("%s\n",result);
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
	sub(input_1,input_2);
}

