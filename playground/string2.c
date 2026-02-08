#include<stdio.h>
#include<string.h>
int check(char *a,char *b){char *temp;temp=a;
      if(strlen(b)>strlen(a)){a=b;b=temp;return 1;}
      if(strlen(b)==strlen(a)){
        for(int i=0;i<strlen(a);i++){
            if(a[i]==b[i]) continue;
            if(a[i]<b[i]){a=b;b=temp;return 1;}
            else return 0;
        }
        return 0;
      }
      else return 0;
}
int main(){
    char *num1="2781648";
    char *num2="2782648";
    char *temp=num1;
    if(check(num1,num2)){printf("-");}
    printf("%s\n",num1);

    return 0;
}