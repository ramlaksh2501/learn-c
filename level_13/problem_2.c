//in a student linked list 
//give option to the user to inset new data after a given student id (insert)
//and also give an option for the user to view the entire list(display)
#include<stdio.h>
#include<stdlib.h>
struct stu{
    int sid;
    int maths_mark;
    int science_mark;
    struct stu * next;
};
void insert(struct stu* head,int id){int flag=0;
    for(head;head->sid!=id;head=head->next){
        if(head->next==NULL){flag++;}
    }if(flag==0){
    struct stu*t;
    t=head->next;
    head->next=(struct stu *)malloc(sizeof(struct stu));
    printf("enter the student id to be inserted:");
    scanf("%d",&head->next->sid);
    printf("maths marks:");
    scanf("%d",&head->next->maths_mark);
    printf("maths marks:");
    scanf("%d",&head->next->science_mark);
head->next->next=t;
}

   else printf("no such id in the record\n");
    
}
void display(struct stu * head){
    for(head;head!=NULL;head=head->next){
        printf("\nsid:%d\nmaths mark:%d\nscience mark%d\n",head->sid,head->maths_mark,head->science_mark);
    }
}
int main(){
    struct stu *head=(struct stu *)malloc(sizeof(struct stu));
    struct stu *temp;
    temp=head;
    temp->sid=01;
    temp->maths_mark=85;
    temp->science_mark=85;
    temp->next=(struct stu *)malloc(sizeof(struct stu));
    temp=temp->next;
     temp->sid=02;
    temp->maths_mark=75;
    temp->science_mark=75;
    temp->next=(struct stu *)malloc(sizeof(struct stu));
    temp=temp->next; temp->sid=03;
    temp->maths_mark=65;
    temp->science_mark=65;
    temp->next=(struct stu *)malloc(sizeof(struct stu));
     temp->sid=04;
    temp->maths_mark=55;
    temp->science_mark=55;
    temp->next=(struct stu *)malloc(sizeof(struct stu));
    temp=temp->next; temp->sid=06;
    temp->maths_mark=95;
    temp->science_mark=95;
    temp->next=NULL;
    while(1){int a;
        printf("1.Insert\n2.Display\n3.Quit\n");
        scanf("%d",&a);
        if(a==1){int i;
            printf("inset after student id:");
            scanf("%d",&i);
            insert(head,i);
        }
        else if(a==2) display(head);
        else if(a==3) break;
        else {printf("invaid option\n");
        }
    }
}