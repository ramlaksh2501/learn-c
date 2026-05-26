// Source - https://stackoverflow.com/q/32142164
// Posted by doe, modified by community. See post 'Timeline' for change history
// Retrieved 2026-04-23, License - CC BY-SA 3.0
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
int main()
{
   int childpid;
   if((childpid = fork()) == -1 )
{
   perror("can't fork");
   exit(1);
}
 else if(childpid == 0)
{
  execlp("ls",(char *)0);
  exit(0);
}
else
{
printf("finish");
exit(0);
}
}

