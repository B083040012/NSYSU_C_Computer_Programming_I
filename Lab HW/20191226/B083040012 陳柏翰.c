#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include<time.h>

struct node{
    int data;
    struct node *next;
};

struct node *back=NULL,*front=NULL;

void inqueue(int num){
    struct node *new=malloc(sizeof(struct node));
    new->data=num;
    new->next=NULL;
    if(back==NULL){
        back=front=new;
    }
    else{
        back->next=new;
        back=new;
    }
}

int dequeue(){
    struct node *temp=front;
    int value;
    if(front==NULL){
        return -1;
    }
    value=temp->data;
    if(front==back){
        front=back=NULL;
    }
    else{
        front=front->next;
    }
    return value;
}

void printqueue(){
    struct node *print=front;
    if(print==NULL){
        printf("empty\n");
        return;
    }
    else{
        while(print!=NULL){
            printf("%d ",print->data);
            print=print->next;
        }
    }
    printf("\n");
}

int main(void)
{
    int func,input,num;
    while(1){
        printf("1.�s�W�@�����\n2.�R���@�����\n3.�^�Ǧ�C�e�ݤ���\n4.�����{��\n�п��:");
        scanf("%d",&func);
        if(func==1){
            printf("�п�J�Ʀr:");
            scanf("%d",&input);
            inqueue(input);
            printqueue();
        }
        else if(func==2){
            if((num=dequeue())==-1){
                printf("Nothing in the queue\n");
            }
            else{
                printf("%d has been dequeued\n",num);
            }
            printqueue();
        }
        else if(func==3){
            if(front==NULL){
                printf("empty\n");
            }
            else{
                printf("%d\n",front->data);
            }
        }
        else if(func==4){
            break;
        }
    }

    system("pause");
    return 0;
}