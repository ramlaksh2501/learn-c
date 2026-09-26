#include<stdio.h>
#include<string.h>

int str2num(char *input){
	int output=0;
	int size=strlen(input);
	//printf("%d\n",size);
	for(int i=0;i<size;i++){
		output*=10;
		output+=input[i]-'0';
	}
	return output;}



int main(int argc,char** argv){
	int line_count;
	if(argc>1){
	line_count=str2num(argv[1]);
	}
	else {printf("number enter pannu ra dai \nUsage: [depth (line count)]");
	  return 0;
	}
	int max_len=1+(2*(line_count-1));
	int line_hash[max_len];
	for(int i=0;i<max_len;i++){
		line_hash[i]=0;
	}
	line_hash[max_len/2]=1;

	for(int j=0;j<line_count;j++){
	for(int i=0;i<max_len;i++){
		if(line_hash[i]!=1) printf(" ");
		if(line_hash[i]==1){ 
			printf("*");
		}
		
		if(i>=0 && (line_hash[i+1]==1)){
			line_hash[i]=1;
			continue;
		}
	
		if(i<(max_len-1) && (line_hash[i]==1) && (line_hash[i+1]==0)){
			line_hash[i+1]=1;
			break;
		}
	}

		printf("\n");
}
	return 0; 

}	
