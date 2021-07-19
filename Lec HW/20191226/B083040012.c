#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include<time.h>

struct node{
    int data;
    struct node *back;
    struct node *prev;
};

struct node *last=NULL;
struct node *first=NULL;

void myinsert(int num){
    struct node *new=malloc(sizeof(struct node)), *current;
    new->back=new->prev=NULL;
    new->data=num;
    if(last==NULL){
        last=first=new;
    }
    else if(last->data>new->data){
        new->prev=last;
        last->back=new;
        last=new;
    }
    else if(last->data==num){
        printf("number %d is in the list already\n",num);
        return;
    }
    else{
        current=last;
        while((current->prev!=NULL) && !((current->data<=new->data)&&(current->prev->data>new->data))){
            current=current->prev;
        }
        if(current->prev==NULL){
            new->back=first;
            first->prev=new;
            first=new;
        }
        else if(current->data==num){
            printf("number %d is in the list already\n",num);
            return;
        }
        else{
            new->prev=current->prev;
            current->prev->back=new;
            current->prev=new;
            new->back=current;
        }
    }
}

struct node *search(int num){
    struct node *goal;
    goal=last;
    while((goal!=NULL) && (goal->data!=num)){
        goal=goal->prev;
    }
    return goal;
}

int mydelete(int value){
    struct node *found;
    if((found=search(value))==NULL){
        //printf("\n\n\nNULL\n\n\n\n");
        return 0;
    }
    else if((found=search(value))==last){
        found->prev->back=NULL;
        last=found->prev;
        return 1;
    }
    else{
        found->back->prev=found->prev;
        found->prev->back=found->back;
        free(found);
        return 1;
    }
}

void printlist(){
    struct node *current=last;
    printf("list:");
    while(current!=NULL){
        printf("%d ",current->data);
        current=current->prev;
    }
    printf("\n");
}

int main(void)
{
    int size,count=1,num,value;
	char func[7];
	FILE *fp=fopen("input.txt","r");
	printf("Insert the original numbers.\n");
	fscanf(fp,"%d",&size);
	while(count<=size){
		fscanf(fp,"%d",&num);
		//printf("aaa%d\n",num);
		myinsert(num);
		count++;
	}
	printlist();
	printf("---------------------------\n");
    while(!feof(fp)){
        fscanf(fp,"%s",func);
        if(strcmp(func,"insert")==0){
            fscanf(fp,"%d ",&num);
            printf("Insert %d.\n",num);
            myinsert(num);
            printlist();
            printf("---------------------------\n");
        }
        else if(strcmp(func,"delete")==0){
            fscanf(fp,"%d ",&num);
            printf("Delete %d.\n",num);
            value=mydelete(num);
            if(value==0){
                printf("number %d is not in the list\n",num);
            }
            printlist();
            printf("---------------------------\n");
        }
    }
    fclose(fp);
    printf("Finish total input\n");

    system("pause");
    return 0;
}