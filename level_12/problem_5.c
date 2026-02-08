//get upto 50 digit number as a string input
//get 2 such inputs and print the multiplication  of the two inputs 
#include<stdio.h>
int uj=0;
#include<string.h>
char * recol(char *d,char *s){
int flag=0;
    int size=strlen(s);
    //printf("%d\n",size);
    for (int i=0;i<size;i++){
        if(flag==0 && s[i]==48){// printf("hello");
        }
        else {d=s+i; return s+i;}
        
}d=s;}
void print(char *ans){
    int flag=0;
    int size=strlen(ans);
    //printf("%d\n",size);
    for (int i=0;i<size;i++){
        if(flag==0 && ans[i]==48){
        }
        else {printf("%s\n",ans+i);return;}
        
}return;}
int dec(char* y){   //print(y);
    // printf("decstrarted");
    int k=strlen(y);//printf("size%d\n",k);
    //printf("%c\n",y[k-1]);
        if(y[k-1]!=48){y[k-1]--;return 1;}
        else{ int i=k-1;//printf("%c\n",y[k-1]);
            for(i;i>=0;){
            if(y[i]>48){y[i]--;// printf("%c\n",y[i]);
              //  printf("decended\n");
                break;}
       i--; }//printf("i:%d\n",i);
        if(i==-1){ //printf("decended\n");
        return 0;}
        else{
        for(i=i+1;i<=k-1;i++){y[i]=57;}
        return 1;}
    }
}
void add(char *a,char *b,char * ans){
    uj++;
    //if(1){print(ans);//return;
    //}
    //printf("%s\n",ans);
    int x=strlen(a)-1;
    int y=strlen(b)-1;
    int big=x;
    if(x>y) big =x;
    else big =y;
    int carry=0;
    ans[big+2]='\0';
    for(x;x>=0 || y>=0 ;big--){int o=0;
        int p=0;
        //printf("%c %c\n",a[x],b[y]);
        if(x>=0 && a[x]>=48 && a[x]<=57) { o=a[x]-48;}
        if(y>=0 && b[y]>=48 && b[y]<=57){ p=b[y]-48;}
      // printf("%d %d\n",p,o);
       int sum=p+o+carry;
       ans[big+1]=(sum%10)+48;
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
    char answer[151]={0};
    getinput(inp,inpp);
    char *t="0";
    
    if(inpp[0]==48){printf("0\n");
    return 0;}
    int i=dec(inpp);
    for (i;i;i=dec(inpp)){
     //   print(inpp);
       // print(answer);
    add(inp,t,answer);
    //}
     t=recol(t,answer);
        // print(answer);  
    }
    printf("answer:");
    print(answer);
    return 0;
}