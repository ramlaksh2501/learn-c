//get a number as input and print the number of single digit perfect squares in that numbers
 #include<stdio.h>
 int main(){ int input,rev=0;
    scanf("%d",&input);
    int count=0;
    for(input;input!=0;input=input/10){
      if((input%10)==0||(input%10)==1||(input%10)==9||(input%10)==4) count ++;
    }
    printf("%d",count);
    return 0;
}