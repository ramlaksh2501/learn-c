//get upto 50 digit number as a string input
//get 2 such inputs and print the multiplication  of the two inputs 
#include<stdio.h>
#include<string.h>
void print(char *ans){
    int flag=0;
    int size=strlen(ans);
    //printf("%d\n",size);
    for (int i=0;i<size;i++){
        if(flag==0 && ans[i]==48){
        }
        else {printf("%s\n",ans+i);return;}
        
}return;}
void dec(char* y){
    int k=strlen(y);int barrow=0;
    for(int i =k-1;i<=0;i--){
        if(y[i]==0){}
        else{}
    }
}
void add(char *a,char *b,char * ans){
    int x=strlen(a)-1;
    int y=strlen(b)-1;
    int big=x;
    if(x>y) big =x;
    else big =y;
    int carry=0;
    ans[big+1]='\0';
    for(x;x>=0 || y>=0 ;big--){int o=0;
        int p=0;
        //printf("%c %c\n",a[x],b[y]);
        if(x>=0 && a[x]>=48 && a[x]<=57) { o=a[x]-48;}
        if(y>=0 && b[y]>=48 && b[y]<=57){ p=b[y]-48;}
      // printf("%d %d\n",p,o);
       int sum=p+o+carry;
       ans[big+1]+=(sum%10)+48;
        carry=(sum/10);
    y--;
x--;}
ans[0]=carry+48;
}
void getinput(char *a,char *b){
    fgets(a,52,stdin);
    fgets(b,52,stdin);
    a[strcspn(a,"\n")]='\0';
    b[strcspn(b,"\n")]='\0';
} 
int main(){
    char inp[150];
    char inpp[150];
    char answer[151];
    getinput(inp,inpp);
    for (int i=0;dec(inpp);i++){
    add(inp,"0",answer);
    //}
    }
    // printf("%s\n",answer);
    print(answer);
    return 0;
}