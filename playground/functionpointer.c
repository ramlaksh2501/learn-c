#include<stdio.h>
// typedef int (*mm) (int ,int );
typedef int a;
// a koo=0;
// mm j

int add(int a,int b) {return a+b;}
int main(){
    // mm k;
int (*k) (int ,int );
    k=&add;
//     int sum=mm(2,3);
//    
// }
int sum =k(2,4);
 printf("%d\n",sum);
}