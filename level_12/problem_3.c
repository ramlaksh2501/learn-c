//get a main string and a substring and find where the main string occur 
#include<string.h>
#include<stdio.h>
int sub(char *main,char *sub){printf("main string:");
    fgets(main,100,stdin);
   printf("sub string to search:");
    fgets(sub,100,stdin);
    main[strcspn(main,"\n")]='\0';
    sub[strcspn(sub,"\n")]='\0';
    for(int i=0;i<strlen(main);i++){
        int k=1;
        if(main[i]==sub[0]){
            for(int j=1;j<strlen(sub);j++){
                if(main[i+j]==sub[j]){k++;continue;}
                else{break;}
            }
            if(k>=strlen(sub)){ return i;}
        }
    }
return -1;
}
int main(){
 char input[100];
 char substring[100];
 int y=sub(input,substring);
 printf("%d\n",y);
 return 0;
}