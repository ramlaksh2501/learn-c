//design a 50 digit calculator program to perform addition ,subtraction and multiplication
//the question need to be passed as a single string with the operator 
//like 40+5
//it should give a prompt like this on input ("calc>")
//test case 
//calc>40+50
//90
//Exit as input needs to quit the program 
#include<time.h>
#include<string.h>
#include<stdio.h>
int sign(char* a,char* b);
void print(char *ans);
void sum(char *a,char *b,char *ans);
void mul(char *a,char *b,char *c);
void sub(char *a,char *b,char *ans);
void parse(char *input,char *a,char *b,char *o);
void sub(char *a,char *b,char *ans){
   /// printf("hh");
    int x=strlen(a)-1;
    int y=strlen(b)-1;
    int j,z;
    j=x;
    z=y;int i;
    ans[j+1]=0;
    while(j>=0&&z>=0){
        if((a[j]-b[z])>=0){ 
            ans[j]=(a[j]-b[z])+48;
            }
        else{
           int k;
            for(k=j-1;k>=0;k--){
                if(a[k]>48){a[k]--;break;}
            }
            for(int m=k+1;m<=j;m++){
                if(m==j){
                    ans[j]=58+(a[j]-b[z]);
                    }
                else a[m]=57;}
                //print(&ans[j]);
               // i--;}
            }
            j--;z--;
      }
      while(j>=0){
        ans[j]=a[j];j--;
      }
   // print(ans);
    
   


}
int sign(char *a ,char *b){char *temp;temp=a;
      if(strlen(b)>strlen(a)){a=b;b=temp;return 1;}
      if(strlen(b)==strlen(a)){
        for(int i=0;i<strlen(a);i++){
            if(a[i]==b[i]) continue;
            if(a[i]<b[i]){a=b;b=temp;
               //print(a);
//print(b); 
return 1;}
            else return 0;
        }
        return 0;
      }
      else return 0;}


void sum(char *a,char *b,char *ans){
   // printf("%lu  %lu\n",strlen(a),strlen(b));
    int x=strlen(a)-1;
    int y=strlen(b)-1;
    int big=x;
    if(x>y) big =x;
    else big =y;
    int carry=0;
   // printf("%d\n",big);
    ans[big+2]=0;
    //print(ans);
    for(x;x>=0 || y>=0 ;big--){int o=0;
        int p=0;
        if(x>=0 && a[x]>=48 && a[x]<=57) { o=a[x]-48;}
        if(y>=0 && b[y]>=48 && b[y]<=57){ p=b[y]-48;}
       int sum=p+o+carry;
       ans[big+1]=(sum%10)+48;
       //printf("%c %d\n",ans[big+1],sum);
        carry=(sum/10);
    y--;
x--;}
ans[0]=carry+48;
//printf("%s\n",ans);
return;
}
void print(char *ans){
    int flag=0;
    int size=strlen(ans)-1;
    int i;
    for (i=0;i<size;i++){
            if(ans[i]==48){continue;}  
            else{break;}
}
 printf("%s\n",ans+i);
return;}
void mul(char *a,char *b,char *c){
    char  temp[110]={0};
    int size1=strlen(a)-1;
    int size2=strlen(b)-1;
    int track =0;
    for (int j=size2;j>=0;j--){
        int index=99-track;
        int left=b[j]-48;
     for(int l=index+1;l<=99;l++){temp[l]='0';
        }
       int carry=0;
        for(int i=size1;i>=0;i--){ int right=a[i]-48; 
            int res=carry+(left*right);
            temp[index]=(res%10)+48;
      carry=res/10;
      index--;
        }track++;//index--;
  temp[index]=carry+48;index--;
  
  if(index>0){
    for(index;index>=0;index--){
        temp[index]='0';
    }
    }int flag=0;
    int size=strlen(temp);
     int x=strlen(temp)-1;
    int y=strlen(c)-1;
    int big=x;
    if(x>y) big =x;
    else big =y;
    int carry1=0;
    c[big+2]='\0';
    for(x;x>=0 || y>=0 ;big--){int o=0;
        int p=0;
        if(x>=0 && temp[x]>=48 && temp[x]<=57) { o=temp[x]-48;}
        if(y>=0 && c[y]>=48 && c[y]<=57){ p=c[y]-48;}
        int sum=p+o+carry1;
       c[big+1]=(sum%10)+48;
        carry1=(sum/10);
    y--;
x--;}
c[0]=carry1+48;}}
void parse(char *input,char *a,char *b,char *o){ int collector =0;
    int k=0;
    char operation=0;
    int i;
    int s=0;int ix=0;
    if(input[0]=='-') {collector++;input=input+1;}//printf("%c\n",input[0]);}
     int x=strlen(input)-1;
    for(i=0;i<=x;i++){
         
        if(input[i]=='+'||input[i]=='-'||input[i]=='*'||((input[i]>=48)&& (input[i]<=57))){
            if(i>0&&s==0&&(input[i]=='+'||input[i]=='-'||input[i]=='*')){operation=input[i];
                s=i;a[i]='\0';k++;}

            if(k==0){
                a[i]=input[i];
            }
            else if(k==1){
                b[i-s-1]=input[i];
               
            }}
           
        else{printf("invalid input\n");return;}
    }
 
  if(input[s+1]=='-') collector++;
  if(collector==1&&operation=='*') printf("-");

if(operation==0){printf("invalid input\n");return;}
b[i-s-1]='\0';

if(operation=='+'){ sum(a,b,o);print(o);}
else if(operation=='*'){mul(a,b,o);
print(o);}
else if(operation=='-'){//printf("hh");
    if(sign(a,b)){
        printf("-");
    sub(b,a,o);}
    else {sub(a,b,o);}
    print(o);}
}
int main(){char input[120];
    while(1){
        printf("calc>");
        fgets(input,120,stdin);
        input[strcspn(input,"\n")]='\0';
        if(strcmp(input,"Exit")==0){break;}
        char a[100];
        char b[100];
        char o[101]={0};
        parse(input,a,b,o);
    }
}
//i think that we can also solve the the subtraction by nine's compliment and addition 