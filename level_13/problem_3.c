//same as last one but add an option to delete 
//to delete a record of a particular student id
#include<stdio.h>
#include<stdlib.h>
struct stu{
    int sid;
    int maths_mark;
    int science_mark;
    struct stu * next;
};
struct stu * head1;
void delete(struct stu* head,int id){int flag=0;
    if(head->sid==id){head1=head1->next;return;}
    for(head;head->next->sid!=id;head=head->next){
        if(head->next==NULL){flag++;}}
        if(flag==0){
            head->next=head->next->next;
        }
        else printf("no such id in the record");
    }
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
    head1=(struct stu *)malloc(sizeof(struct stu));
    struct stu *temp;
    temp=head1;
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
    temp=temp->next;
    temp->sid=04;
    temp->maths_mark=55;
    temp->science_mark=55;
    temp->next=(struct stu *)malloc(sizeof(struct stu));
    temp=temp->next; temp->sid=06;
    temp->maths_mark=95;
    temp->science_mark=95;
    temp->next=NULL;
    while(1){int a;
        printf("1.Insert\n2.Display\n3.Delete\n4.Quit\n");
        scanf("%d",&a);
        if(a==1){int i;
            printf("inset after student id:");
            scanf("%d",&i);
            insert(head1,i);
        }
        else if(a==2) display(head1);
        else if(a==3) {
            int u;
            printf("delete record of student id:");
            scanf("%d",&u);
            delete(head1,u);
        }
        else if(a==4) break;
        else {printf("invaid option\n");
        }
    }
}