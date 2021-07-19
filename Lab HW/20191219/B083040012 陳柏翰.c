#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

struct ListNode{
	int val;
	struct ListNode *next;
};

struct ListNode *back=NULL;

void enter(int value){
	struct ListNode *new=malloc(sizeof(struct ListNode));
	new->val=value;
	new->next=NULL;
	new->next=back;
	back=new;
}

void dele(){
	struct ListNode *del=back;
	if(del==NULL){
		printf("Error!\n");
	}
	else{
		back=back->next;
		free(del);
		printf("delete complete!\n");
	}
}

void print(){
	struct ListNode *pri=back;
	if(pri==NULL){
		printf("Nothing in the list\n");
	}
	else{
		while(pri!=NULL){
			printf("*     *\n");
			printf("*     *\n");
			printf("* %2d  *\n",pri->val);
			printf("*******\n");
			pri=pri->next;
		}
	}	
}

int countlist(){
	int count=0;
	struct ListNode *con=back;
	while(con!=NULL){
		count++;
		con=con->next;
	}
	return count;
}

int main(){
	
	int function,val;
	
	while(1){
		printf("1.計算長度\n2.插入節點\n3.刪除節點\n4.顯示所有節點\n5.結束程式\n");
		printf("請選擇function:");
		scanf("%d",&function);
		if(function==5){
			break;
		}
		else if(function==1){
			printf("\n\n%d node(s)\n\n\n",countlist());
		}
		else if(function==2){
			printf("輸入val:");
			scanf("%d",&val);
			enter(val);
		}
		else if(function==3){
			dele();
		}
		else if(function==4){
			print();
		}
	}
	
	

	return 0;
}

