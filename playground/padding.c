#include<stdio.h>

#include<stdint.h>
struct me{
	uint8_t h;
	uint32_t k;};
	struct moo{
	uint8_t h;
	uint32_t k;
    uint64_t u;};

int main(){
struct me hello;
	printf("address of the char :%lu \naddress of the int :%lu\n",&hello.h,&hello.k);
printf("size of the char :%lu \n size of the int :%lu\nsize of the whole structure:%lu\n",sizeof(hello.h),sizeof(hello.k),sizeof(hello));
struct moo hh;
printf("address of the char :%lu\naddress of the int :%lu\n address of the long :%lu\n",&hh.h,&hh.k,&hh.u);
printf("size of the char :%lu\n size of the int :%lu\nsize of the long :%lu\nsize of the whole structure:%lu\n",sizeof(hh.h),sizeof(hh.k),sizeof(hh.u),sizeof(hh));
 	return 0;}	

