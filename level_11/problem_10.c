//add two strings and print them
#include<stdio.h>
#include<string.h>
void cat(char *a,char *b,char *ans){int index=0;
    for(int i=0;i<strlen(a);i++){
        ans[index]=a[i];index++;

    }
    for(int i=0;i<strlen(b);i++){
        ans[index]=b[i];
        index++;
    } 
    ans[index]='\0';
    
} 
int main(){
    char *a="hello from";
    char *b=" lakshmanan's pc";
    char ans[strlen(a)+strlen(b)];
    cat(a,b,ans);
    printf("%s\n",ans);
    return 0;
}
