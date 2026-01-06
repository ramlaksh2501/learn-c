//get input for a student structure which has student id ,maths marks ,science marks
//put student id as -1 to stop getting input
#include<stdio.h>
#include<stdlib.h>

int main()
{ 
struct student {
int sid;
int maths_marks;
int science_marks;
struct student * next;
};
int x;
struct student * head;
 struct student * temp;
 head=(struct student *) malloc(sizeof(struct student));
temp=head;
while(1){
printf("enter student id:");
scanf("%d",&x);
temp->sid=x;
if(temp->sid==-1){ temp->next=NULL;break;}
printf("enter maths mark:");
scanf("\n%d",&x);
//while (getchar() != '\n');
 temp->maths_marks=x;
printf("enter science mark:");
scanf(" %d",&x);temp->science_marks=x;
temp->next=(struct student*)malloc(sizeof(struct student));
temp=temp->next;
}


if(head!=NULL){
for (head;head->next!=NULL;head=head->next){
printf("\nsid:%dmaths marks:%d\nscience marks%d\n",head->sid,head->maths_marks,head->science_marks);
}}
return 0;
}