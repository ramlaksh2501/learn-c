#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* addBinary(char* a, char* b) {
    
    int x=strlen(a)-1;
    int y=strlen(b)-1;
    int big =x+2;
    if(x<y) big =y+2;
    char *ans=(char *)malloc(big*sizeof(char));
    char carry='0';
    ans[big-1]=0;
    for(int i=big-2;i>0;i--){
        if(x>=0 && y>=0){
            if(a[x]=='1'&& b[y]=='1') {if(carry=='0') {ans[i]='0';
            carry='1';}
            else {ans[i]='1';carry='1';}}

            else if(a[x]=='1'|| b[y]=='1'){
                {if(carry=='0') {ans[i]='1';
            }
            else {ans[i]='0';carry='1';}}
            }
            else {if(carry=='1'){
                ans[i]='1';
                carry='0';
            }
            else{
                ans[i]=='0';
            }}
        }
        else if(x>=0 && y<0){
            if(carry=='1' && a[x]=='1'){
                ans[i]='0';carry='1';
            }
             else if(carry=='0' && a[x]=='1'){
                ans[i]='1';
            }
            else ans[i]='0';
        }
        else{
            if(carry=='1' && b[y]=='1'){
                ans[i]='0';carry='1';
            }
             else if(carry=='0' && b[y]=='1'){
                ans[i]='1';
            }
            else ans[i]='0';
        }

x--;
y--;
    }
    if(carry == '1'){ans[0]=carry;
    return ans; }
    return ans+1;
    
}
int main (){
    printf("%s\n",addBinary("100","101"));
}