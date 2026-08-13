#include<stdio.h>
#include<stdint.h>
int main(){
    struct mo{
        // uint64_t a;
        uint8_t b;
         uint8_t a;
        // uint32_t c;
    };
    struct mo k;
    printf("%zu\n",sizeof(k));
    return 0;
}