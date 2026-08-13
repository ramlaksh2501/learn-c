#include<stdio.h>
#include<fcntl.h>
#include<errno.h>
#include<unistd.h>
#include<sys/stat.h>
int main(){
    int fd=open("./vin/hl.hex",O_CREAT|O_TRUNC,0777);
    int fk=mkdir("fu", 0755);

    if(fd>0){
        close(fd);}

    else 
        perror("error\n") ;
    return 0;
}
