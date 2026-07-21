#include<stdio.h>


const struct ma{
	int xa;
	char *star;
};
int main(){
	const struct ma x={.xa=23};
       	printf("%d\n",x.xa);
	return 0;
}
