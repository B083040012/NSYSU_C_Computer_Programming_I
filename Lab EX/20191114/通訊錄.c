#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	
	int func=0;
	while(func!=3){
		char data[999];
		FILE *file=fopen("output.txt","a");
		printf("�q�T���t��\n");
		printf("1.�s�W���\n");
		printf("2.��ܥ������\n");
		printf("3.����\n");
		printf("�п��function:");
		scanf("%d",&func);
		fflush(stdin);
		switch(func){
			case 1:
				printf("�п�J �Ǹ� �m�W �q��:");
				fgets(data,sizeof(data),stdin);
				fputs(data,file);
				break;
			case 2:
				system("type output.txt");
				break;
			case 3:
				printf("�����t��");
				break;
		}
		fclose(file); 
	}

	return 0;
}

