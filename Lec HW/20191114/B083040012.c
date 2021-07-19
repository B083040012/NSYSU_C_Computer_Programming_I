#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int main(){
	
	int i=0,count=0,num;
	char alpha[1001],search,letter,last;
	FILE *file=fopen("input1.txt","w"),*file_2;
	srand(time(NULL));
	while(i<=999){
		letter=(char)(rand()%123);
		if((letter>='a'&&letter<='z') || (letter>='A'&&letter<='Z')){
			alpha[i]=letter;
			i++;
		}
	}
	last=alpha[999];
	alpha[1000]='\0';
	fputs(alpha,file);
	fclose(file);
	file=fopen("input1.txt","r");
	system("type input1.txt");
	printf("\n\n%c",alpha[999]);
	fclose(file);
	
	file=fopen("input1.txt","a");
	while(1){
		printf("\n您在 input.txt 中想找尋數量的字元為:");
		scanf(" %c",&search);
		if(((search>='a'&&search<='z') || (search>='A'&&search<='Z'))){
			fgets(alpha,1000,file);
			if((search>='a'&&search<='z')){
				for(i=0;i<=999;i++){
					if(alpha[i]==search || alpha[i]==search-32){
						count++;
					}
				}
			}
			else if((search>='A'&&search<='Z')){
				for(i=0;i<=999;i++){
					if(alpha[i]==search || alpha[i]==search+32){
						count++;
					}
				}
			}
			printf("該字元'%c'在該文件中數量為:%d",search,count);
			count=0;
		}
		else if(search=='*'){
			printf("輸入結束");
			break;
		}
		else{
			printf("Wrong Input");
		}
	}
	fclose(file);
	
	while(1){
		file=fopen("input1.txt","r");
		fgets(alpha,1000,file);
		printf("\n每行的字元數:");
		scanf("%d",&num);
		file_2=fopen("input2.txt","w");
		if(num>0&&num<=1000){
			for(i=0;i<=998;i++){
				fprintf(file_2,"%c",alpha[i]);
				if((i+1)%num==0){
					fprintf(file_2,"\n");
				}
			}
			fprintf(file_2,"%c",last);	
		}
		else if(num==-1){
			printf("結束修改");
			break;
		}
		else{
			printf("輸入錯誤,在試一次");
		}
		fclose(file_2);
		file_2=fopen("input2.txt","r");
		system("type input2.txt");
		fclose(file_2);
	}
	
	
	
	return 0;
}

