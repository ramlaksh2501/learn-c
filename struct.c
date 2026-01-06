#include<stdio.h>
#include<stdlib.h>
int main(){
    struct mai{int s;int k;};
    struct mai * head ;
     struct mai * tail ;
    tail=(struct mai*)malloc(sizeof(struct mai));
    head=tail;
    head->s=35;
    head->k=44;
    printf("%d %d\n",head->s,head->k);
    return 0;
}