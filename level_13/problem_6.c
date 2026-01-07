//create a queue
//nedd to have functions:
//add will add to the top(enqueue)
//delete needs to delete the bottom(dequeue)
//display the records from top to bottom
#include<stdio.h>
#include<stdlib.h>
struct stu{
    struct stu * pre;
    int sid;
    int maths_mark;
    int science_mark;
    struct stu * next;
};
struct stu * head1=NULL;
struct stu * bot=NULL;
void delete(){if(bot!=NULL){
    printf("\nsid:%d\nmaths mark:%d\nscience mark%d\n",bot->sid,bot->maths_mark,bot->science_mark);
    bot=bot->pre;
    bot->next=NULL;
    }
 else printf("noting to be deleted\n");  }
void insert(){if(head1==NULL){head1=(struct stu*)malloc(sizeof(struct stu));
bot =head1;head1->pre=NULL;
printf("enter the student id:");
    scanf("%d",&head1->sid);
    printf("maths marks:");
    scanf("%d",&head1->maths_mark);
    printf("science marks:");
    scanf("%d",&head1->science_mark);
    head1->next=NULL;
}
else{
    head1->pre=(struct stu*) malloc(sizeof(struct stu));
    head1->pre->next=head1;
    head1=head1->pre;
    printf("enter the student id:");
    scanf("%d",&head1->sid);
    printf("maths marks:");
    scanf("%d",&head1->maths_mark);
    printf("science marks:");
    scanf("%d",&head1->science_mark);
}

}

    

void display(){
    for(head1;head1!=NULL;head1=head1->next){
        printf("\nsid:%d\nmaths mark:%d\nscience mark%d\n",head1->sid,head1->maths_mark,head1->science_mark);
    }
}
int main(){int a;
    while(1){
        printf("1.Add\n2.Delete\n3.Display\n4.Quit\n");
        scanf("%d",&a);
        if(a==1){int i;
           insert();
        }
        else if(a==2) delete();
        else if(a==3) {
            display();
        }
        else if(a==4) break;
        else {printf("invaid option\n");
    }
}}