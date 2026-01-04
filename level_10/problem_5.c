//get an integer input and print it as string
#include<stdio.h>
#include<string.h>
int pow_10(int a){int res=1;
    for(a;a>=0;a--){res*=10;}
    return res;
}
int len(int x){int c=0;
    for(x;x!=0;x=x/10){
        c++;
    }
    return c;
}
int ntoc(int s){return s+48;}
int main(){
    char answer[10];int input;
    scanf("%d",&input);int index=0;
    for (int k=pow_10(len(input)-2);k>=1;k=k/10){
        answer[index]=ntoc(input/k);
        input=input%k;
         index++;
    }
    answer[index]='\0';
    printf("%s\n",answer);
    return 0;
}