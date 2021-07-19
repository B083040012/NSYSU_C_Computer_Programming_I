#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
	
	int func=0;
	while(func!=3){
		char data[999];
		FILE *file=fopen("output.txt","a");
		printf("通訊錄系統\n");
		printf("1.新增資料\n");
		printf("2.顯示全部資料\n");
		printf("3.結束\n");
		printf("請選擇function:");
		scanf("%d",&func);
		fflush(stdin);
		switch(func){
			case 1:
				printf("請輸入 學號 姓名 電話:");
				fgets(data,sizeof(data),stdin);
				fputs(data,file);
				break;
			case 2:
				system("type output.txt");
				break;
			case 3:
				printf("結束系統");
				break;
		}
		fclose(file); 
	}

	return 0;
}

