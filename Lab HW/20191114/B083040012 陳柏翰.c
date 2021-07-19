#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main(){
	
	int i=0,count=0,chance=3,flag=0;
	char str[14],temp[14]="congratulation",input;
	printf("Question\n");
	FILE *file;
	file=fopen("input.txt","r");
	
	fscanf(file,"%s",str);
	for(i=0;i<14;i++){
		if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'){
			str[i]='_';
		}
	}
	while(1){
		for(i=0;i<=13;i++){
			printf("%c",str[i]);
		}
		printf("\nEnter a character:");
		scanf(" %c",&input);
		//printf("\n%d",flag);
		for(i=0;i<=13;i++){
			if(temp[i]==input){
				str[i]=input;
				flag=1;
			}
		}
		printf("\n");
		if(flag==0){
			if(chance-=1>0){
				printf("Please try again,hp:%d\n",chance);
			}
			else{
				printf("\nGame Over!\n");
				break;
			}
		}
		else if(flag==1){
			if(str[0]=='c'&&str[1]=='o'&&str[2]=='n'&&str[3]=='g'&&str[4]=='r'&&str[5]=='a'&&str[6]=='t'&&str[7]=='u'&&str[8]=='l'&&str[9]=='a'&&str[10]=='t'&&str[11]=='i'&&str[12]=='o'&&str[13]=='n'){
				for(i=0;i<=count-1;i++){
					printf("%c",temp[i]);
				}
				break;
			}
		}
		flag=0;
	}

	return 0;
}

