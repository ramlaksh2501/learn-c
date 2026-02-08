//an up graded version of the 50 digit multiplication
//with less time complexity and easy to understand 
// #include<time.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


/* here, do your time-consuming job */


void getinp(char *a,char *b){
    fgets(a,52,stdin);
    fgets(b,52,stdin);
    a[strcspn(a,"\n")]='\0';
    b[strcspn(b,"\n")]='\0';
}
void print(char *ans){
    int flag=0;
    int size=strlen(ans);
    for (int i=0;i<size;i++){
        if(flag==0 && ans[i]==48){
        }
        else {printf("%s\n",ans+i);return;}
        
}return;}
void mul(char *a,char *b,char *c) {char  temp[110]={0};
//    c=(char *)calloc(101,sizeof(char));
   // temp=(char *)calloc(101,sizeof(char));
   // *c='0';
//print(temp);
  // print(c);
 //   for(int no=0;no<100;no++){temp[no]='0';}
   // temp[100]='\0';
  int size1=strlen(a)-1;
  int size2=strlen(b)-1;
  //printf("1:%d 2:%d 3:%d\n",size1,size2,strlen(temp)); //return;
  //the lion in you won't retreat
   // printf("r:%d l:%d a:%d\n",a[size1]-48,b[size2]-48,(a[size1]-48)*(b[size2]-48)); 
  int track =0; //return;
  for (int j=size2;j>=0;j--){// print(b+j);
    int index=99-track;
    int left=b[j]-48;
  //temp=(char *)calloc(101,sizeof(char));
       for(int l=index+1;l<=99;l++){temp[l]='0';
   // printf("j:%d index:%d left:%d\n",j,index,left);
   // return;}
       }
       int carry=0;
        for(int i=size1;i>=0;i--){ int right=a[i]-48;  //print(a+i);
      //  printf("r:%d l:%d a:%d\n",right,left,right*left);    
      int res=carry+(left*right);
     //printf("%c\t",(res%10)+48);
      temp[index]=(res%10)+48;
      carry=res/10;
      //printf("index%d\n",index);
      index--;
        }track++;//index--;
  temp[index]=carry+48;index--;
  
  if(index>0){
    for(index;index>=0;index--){
        temp[index]='0';
    }
  //print(temp);
   //print(c);
  //  print(temp);
  }int flag=0;
    int size=strlen(temp);
    // char *t=temp;
    // for (int z=0;z<size;z++){
        // if(flag==0 && temp[z]==48){
        // }
        // else {temp=temp+z;
        //   break;}
  int x=strlen(temp)-1;
    int y=strlen(c)-1;
    int big=x;
    if(x>y) big =x;
    else big =y;
    int carry1=0;
    c[big+2]='\0';
    //printf("x:%d y:%d\n",x,y);
    for(x;x>=0 || y>=0 ;big--){int o=0;
        int p=0;
       //printf("big:%d res:%d carry:%d\n",big,1,carry1);
        if(x>=0 && temp[x]>=48 && temp[x]<=57) { o=temp[x]-48;}
        if(y>=0 && c[y]>=48 && c[y]<=57){ p=c[y]-48;}
    // print(c);
       
//printf("%c %c \n",c[0],c[1]);
//free(t);
//return c;
//*temp='\0';
int sum=p+o+carry1;
       c[big+1]=(sum%10)+48;
        carry1=(sum/10);
    y--;
x--;}
c[0]=carry1+48;}}


int main(){
  // clock_t begin = clock();
    char answer[150];
    char input[100];
    char inpp[100];
    getinp(input,inpp);
    char *ans;
    mul(input,inpp,answer);
    //ans =mul(input,inpp,answer);
    // print(input);
    // print(inpp);
 print(answer);
//  clock_t end = clock();
// double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
// printf("%f",time_spent);
// //printf("")
    return 0;
}
//passed 7 out of 10 edge cases for 50 digit multiplication 
//needs optimization 
//passes 8 cases outta 10