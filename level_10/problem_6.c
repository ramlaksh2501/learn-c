//get an integer as input and print each digit as a char 
//in each line 
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
    int input;
    scanf("%d",&input);
    for (int k=pow_10(len(input)-2);k>=1;k=k/10){
        printf("%c\n",ntoc(input/k));
        input=input%k;
        
    }
    return 0;
}