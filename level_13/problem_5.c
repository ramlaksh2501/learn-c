//crete stack using linked 
//with pop,push and display function
#include<stdio.h>
#include<stdlib.h>
struct stu{
    int sid;
    int maths_mark;
    int science_mark;
    struct stu * next;
};
struct stu * head1=NULL;
void pop(){if(head1!=NULL){printf("student id:%d\nmaths mark:%d\nscience marks:%d\n",head1->sid,head1->maths_mark,head1->science_mark);
    head1=head1->next;}
  else{printf("The stack is empty");}}
void push(){if(head1==NULL){head1=(struct stu*)malloc(sizeof(struct stu));
 printf("enter the student id:");
    scanf("%d",&head1->sid);
    printf("maths marks:");
    scanf("%d",&head1->maths_mark);
    printf("science marks:");
    scanf("%d",&head1->science_mark);
    head1->next=NULL;

}
else{
    struct stu* t;
    t=head1;
    head1=(struct stu *)malloc(sizeof(struct stu));
     printf("enter the student id to be inserted:");
    scanf("%d",&head1->sid);
    printf("maths marks:");
    scanf("%d",&head1->maths_mark);
    printf("science marks:");
    scanf("%d",&head1->science_mark);
    head1->next=t;
}

}

void display(struct stu * head){
    for(head;head!=NULL;head=head->next){
        printf("\nsid:%d\nmaths mark:%d\nscience mark%d\n",head->sid,head->maths_mark,head->science_mark);
    }
}
int main(){ while(1){int a;
        printf("1.Push\n2.Display\n3.Pop\n4.Quit\n");
        scanf("%d",&a);
        if(a==1){int i;
           push();
        }
        else if(a==2) display(head1);
        else if(a==3) {
            pop();
        }
        else if(a==4) break;
        else {printf("invaid option\n");
        }
    }
}