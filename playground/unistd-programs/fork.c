#include<stdio.h>
#include<unistd.h>
void main (){static int i=0;
    // while(i<3){
    //     fork();
    // }
    int y=getpid();
    printf("%d\n",y);
    int k=fork();
   // k=getpid();
    i++;
    //if(k==y) sleep(10);
    printf("hello word %d %d\n",k,i);
      k=fork();   
     // k=getpid();
      //if(k==y+1) sleep(10);
      printf("fork: %d %d\n",k,i);
      fork();
}