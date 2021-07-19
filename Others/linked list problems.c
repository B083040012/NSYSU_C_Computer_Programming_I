#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include<time.h>

struct node{
    int data;
    struct node *prev;
    struct node *back;
};

void inqueue(int num,struct node *last,struct node *first){
    struct node *new=malloc(sizeof(struct node));
    new->data=num;
    new->prev=new->back=NULL;
    if(last==NULL){
        last=first=new;
    }
    last->back=new;
    new->prev=last;
    last=new;
    printf("complete\n");
}

int findmiddle(struct node *last,struct node *first){
    struct node *from_last=last;
    struct node *from_first=first;
    while(!((from_last==from_first) || ((from_last->prev==from_first) && (from_first->back==from_last)))){
        from_last=from_last->prev;
        from_first=from_first->back;
    }
    if(from_last==from_first){
        return from_last->data;
    }
    else if((from_last->prev==from_first) && (from_first->back==from_last)){
        return from_last->data;
    }
}

void printqueue(struct node *last,struct node *first){
    struct node *current=last;
    while(current!=NULL){
        printf("%d ",current->data);
        current=current->prev;
    }
}

void dequeueall(struct node *last,struct node *first){
    struct node *cleaner=last;
    while(cleaner!=first){
        cleaner=cleaner->prev;
        free(cleaner->back);
    }
    free(cleaner);
    last=first=NULL;
}

int main(void)
{
    int size,i,input;
    //find the middle element in the queue
    struct node *head01=NULL;
    struct node *tail01=NULL;
    while(1){
        printf("Please enter the size of the queue\nEnter EOF to quit\n");
        if(scanf("%d",&size)==EOF){
            break;
        }
        printf("Input %d num into the queue\n",size);
        for(i=1;i<=size;i++){
            scanf("%d",&input);
            inqueue(input,tail01,head01);
        }
        printqueue(tail01,head01);
        printf("The middle element in the queue:%d\n",findmiddle(tail01,head01));
        dequeueall(tail01,head01);
    }

    system("pause");
    return 0;
}