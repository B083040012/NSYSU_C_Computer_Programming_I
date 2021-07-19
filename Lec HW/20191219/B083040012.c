#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

struct node{
	int data;
	struct node *prev;
};

struct node *back=NULL;
struct node *front=NULL;

void myenqueue(int num){
	struct node *new=malloc(sizeof(struct node));
	new->data=num;
	new->prev=NULL;
	if(back==NULL){
		front=new;
		back=new;
	}
	else{
		back->prev=new;
		back=new;
	}
}

int mydequeue(){
	struct node *temp;
	int value;
	if(front==NULL || back==NULL){
		return -1;
	}
	temp=front;
	value=temp->data;
	if(front==back){
		front=NULL;
		back=NULL;
	}
	else{
		front=front->prev;
	}
	free(temp);
	return value;
}

void printqueue(){
	printf("Queue:");
	struct node *print=front;
	while(print!=NULL){
		printf("%d ",print->data);
		print=print->prev;
	}
	printf("\n");
}

int main(){
	
	int size,count=1,num,value,num1;
	char func[8];
	FILE *fp=fopen("input.txt","r");
	printf("Insert the original numbers.\n");
	fscanf(fp,"%d",&size);
	while(count<=size){
		fscanf(fp,"%d",&num);
		//printf("aaa%d\n",num);
		myenqueue(num);
		count++;
	}
	printqueue();
	printf("---------------------------\n");
	while(!feof(fp)){
		fscanf(fp,"%s ",func);
		//printf("\nread:%s\n\n\n",func);
		if(strcmp(func,"Dequeue")==0){
			printf("Dequeue\n");
			value=mydequeue();
			if(value==-1){
				printf("Nothing in queue\n");
			}
			else{
				printf("Dequeue %d from queue.\n",value);	
			}
			printqueue();
			printf("---------------------------\n");
		}
		else if(strcmp(func,"Enqueue")==0){
			printf("Enqueue\n");
			fscanf(fp,"%d ",&num);
			//printf("\n\n\n\nnum=%d\n\n\n",num);
			printf("Enqueue %d into queue\n",num);
			myenqueue(num);
			printqueue();
			printf("---------------------------\n");
		}
	}
	fclose(fp);
	printf("Finish total input");
	
	return 0;
}

