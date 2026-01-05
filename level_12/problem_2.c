//get a string and a character and print where the character occured in that string (index)
#include<stdio.h>
#include<string.h>
int main(){
    char a;
    char input[100];
    printf("input:");
    fgets(input,100,stdin);
    printf("\nto find:");
    scanf("%c",&a);
    for(int i=0;i<strlen(input);i++){
        if(input[i]==a){printf("%d,",i);}
    }
    printf("\b \n");
    return 0;
}
