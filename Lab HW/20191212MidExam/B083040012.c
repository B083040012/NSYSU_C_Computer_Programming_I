#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define ly (year%4==0 && year%100!=0) || (year%400==0)
#define bm month==1||month==3||month==5||month==7||month==8||month==10||month==12
#define sm month==4||month==6||month==9||month==11

int brick(int num){
	if(num==1){
		return 1;
	}
	else if(num==2){
		return 2;
	}
	else{
		return (brick(num-1)+brick(num-2));
	}
}

void sort(char *alpha,int size,int start){
	int i,k;
	char temp;
	for(i=size-2;i>=start-1;i--){
		temp=alpha[i];
		k=i;
		while((k<size-1) && (alpha[k+1]<temp)){
			alpha[k]=alpha[k+1];
			k++;
		}
		alpha[k]=temp;
	}
	for(i=start;i<size;i++){
		printf("00%X-%c ",&alpha[i],alpha[i]);
	}
}

long long func(int num){
	if(num==1){
		return 1;
	}
	else{
		return (func(num-1)*num);
	}
}

int main(){
	
	printf("�D�դ@\n");
	printf("1.\n");
	printf("------------------\n");
	int year,month,day,num1;
	char s[8];
	FILE *fp1=fopen("date.txt","r");
	FILE *fp2=fopen("date.txt","r");
	while(!feof(fp1)){
		fscanf(fp1,"%d",&num1);
		fscanf(fp2,"%s",&s);
		printf("%s",s);
		year=num1/10000;
		month=(num1%10000)/100;
		day=(num1%100);
		//printf("   %d %d %d  ",year,month,day);
		if((day<1) || (day>31) || (month>12) || (month<1) || (bm&&(day>31)) || (sm&&(day>30)) || ((ly)&&(month==2)&&(day>29)) || ((!ly)&&(year!=400)&&(month==2)&&(day>28))){
			printf(" Error!\n");
		}
		else{
			printf(" Correct!\n");
		}
	}
	fclose(fp1);
	fclose(fp2);
	
	FILE *fp3=fopen("date.txt","r");
	FILE *fp4=fopen("output.txt","w");
	int i;
	while(!feof(fp3)){
		fscanf(fp3,"%s",&s);
		for(i=7;i>=0;i--){
			fprintf(fp4,"%c",s[i]);
		}
		fprintf(fp4,"\n");
	}
	fclose(fp3);
	fclose(fp4);
	
	printf("\n\n\n");
	printf("2.\n");
	printf("--------------\n");
	int num2;
	while(1){
		printf("�п�J�j���ƶq n (��J0������J):");
		scanf("%d",&num2);
		if(num2==0){
			break;
		}
		else{
			printf("%d\n",brick(num2));
		}
	}
	
	printf("\n\n\n");
	printf("3.\n");
	printf("------------------\n");
	/*char input[9999];
	printf("�п�J�r��:");
	fgets(input,sizeof(input),stdin);
	perm(input,)*/
	
	printf("\n\n\n");
	printf("�D�դG\n");
	printf("4.\n---------------\n");
	char alpha[999];
	int count_a=0,count_e=0,count_f=0,count_h=0,count_i=0,count_l=0,count_m=0,count_o=0,count_p=0,count_r=0,count_u=0,count_v=0,count_w=0,count_y=0;
	FILE *fp5=fopen("123.txt","r");
	fgets(alpha,12,fp5);
	for(i=0;i<=10;i++){
		if(alpha[i]<='Z' && alpha[i]>='A'){
			alpha[i]=alpha[i]+32;
		}
		switch (alpha[i]){
			case 'a':
				count_a++;
				break;
			case 'e':
				count_e++;
				break;
			case 'f':
				count_f++;
				break;
			case 'h':
				count_h++;
				break;
			case 'i':
				count_i++;
				break;
			case 'l':
				count_l++;
				break;
			case 'm':
				count_m++;
				break;
			case 'o':
				count_o++;
				break;
			case 'p':
				count_p++;
				break;
			case 'r':
				count_r++;
				break;
			case 'u':
				count_u++;
				break;
			case 'v':
				count_v++;
				break;
			case 'w':
				count_w++;
				break;
			case 'y':
				count_y++;
				break;
			default:
				;
		}
	}
	printf("�Ĥ@��:\n");
	for(i=0;i<=10;i++){
		printf("00%X-%c ",&alpha[i],alpha[i]);
	}
	printf("\n");
	sort(alpha,1,0);
	printf("00%X-%c ",&alpha[1],alpha[1]);
	sort(alpha,6,2);
	printf("00%X-%c ",&alpha[6],alpha[6]);
	sort(alpha,11,7);
	
	
	fgets(alpha,13,fp5);
	fgets(alpha,13,fp5);
	for(i=0;i<=11;i++){
		if(alpha[i]<='Z' && alpha[i]>='A'){
			alpha[i]=alpha[i]+32;
			switch (alpha[i]){
				case 'a':
					count_a++;
					break;
				case 'e':
					count_e++;
					break;
				case 'f':
					count_f++;
					break;
				case 'h':
					count_h++;
					break;
				case 'i':
					count_i++;
					break;
				case 'l':
					count_l++;
					break;
				case 'm':
					count_m++;
					break;
				case 'o':
					count_o++;
					break;
				case 'p':
					count_p++;
					break;
				case 'r':
					count_r++;
					break;
				case 'u':
					count_u++;
					break;
				case 'v':
					count_v++;
					break;
				case 'w':
					count_w++;
					break;
				case 'y':
					count_y++;
					break;
				default:
					;
			}
		}
	}
	printf("\n�ĤG��:\n");
	for(i=0;i<=11;i++){
		printf("00%X-%c ",&alpha[i],alpha[i]);
	}
	printf("\n");
	sort(alpha,3,0);
	printf("00%X-%c ",&alpha[3],alpha[3]);
	sort(alpha,8,4);
	printf("00%X-%c ",&alpha[8],alpha[8]);
	sort(alpha,12,9);
	
	
	fgets(alpha,22,fp5);
	fgets(alpha,22,fp5);
	fgets(alpha,22,fp5);
	for(i=0;i<=20;i++){
		if(alpha[i]<='Z' && alpha[i]>='A'){
			alpha[i]=alpha[i]+32;
			/*switch (alpha[i]){
				case 'a':
					count_a++;
					break;
				case 'e':
					count_e++;
					break;
				case 'f':
					count_f++;
					break;
				case 'h':
					count_h++;
					break;
				case 'i':
					count_i++;
					break;
				case 'l':
					count_l++;
					break;
				case 'm':
					count_m++;
					break;
				case 'o':
					count_o++;
					break;
				case 'p':
					count_p++;
					break;
				case 'r':
					count_r++;
					break;
				case 'u':
					count_u++;
					break;
				case 'v':
					count_v++;
					break;
				case 'w':
					count_w++;
					break;
				case 'y':
					count_y++;
					break;
				default:
					;
			}*/
		}
	}
	printf("\n�ĤT��:\n");
	for(i=0;i<=20;i++){
		printf("00%X-%c ",&alpha[i],alpha[i]);
	}
	printf("\n");
	sort(alpha,5,0);
	printf("00%X-%c ",&alpha[5],alpha[5]);
	sort(alpha,7,6);
	printf("00%X-%c ",&alpha[7],alpha[7]);
	sort(alpha,13,8);
	printf("00%X-%c ",&alpha[13],alpha[13]);
	sort(alpha,21,14);
	
	fclose(fp5);
	
	FILE *fp6=fopen("123.txt","a");
	fprintf(fp6,"\na�X�{%d��\n",count_a);
	fprintf(fp6,"e�X�{%d��\n",count_e);
	fprintf(fp6,"f�X�{%d��\n",count_f);
	fprintf(fp6,"h�X�{%d��\n",count_h);
	fprintf(fp6,"i�X�{%d��\n",count_i);
	fprintf(fp6,"l�X�{%d��\n",count_l);
	fprintf(fp6,"m�X�{%d��\n",count_m);
	fprintf(fp6,"o�X�{%d��\n",count_o);
	fprintf(fp6,"p�X�{%d��\n",count_p);
	fprintf(fp6,"r�X�{%d��\n",count_r);
	fprintf(fp6,"u�X�{%d��\n",count_u);
	fprintf(fp6,"v�X�{%d��\n",count_v);
	fprintf(fp6,"w�X�{%d��\n",count_w);
	fprintf(fp6,"y�X�{%d��\n",count_y);
	
	printf("\n\n\n");
	printf("5.\n--------------");
	int num5,count=0;
	long long temp;
	while(1){
		count=0;
		printf("\n�п�Jn:");
		scanf("%d",&num5);
		if(num5==0){
			break;
		}
		else{
			temp=func(num5);
			while(temp>=1){
				count+=(temp%10);
				temp=temp/10;
			}
			printf("�ӼƩM=%d",count);
		}
	}
	
	/*printf("\n\n\n6.\n----------------");
	printf("�п�JN,M:");
	int n,m;
	while(1){
		scanf("%d %d",&n,&m);
		if((n<1 && n>100) || (m!=1 && m!=2)){
			printf("��J���~!\n");
		}
		else if(m==0 && n==0){
			break;
		}
		else{
			int mat[n][n];
			if(m==1){
				size=n;
				x=0;
				y=0;
				for(i=1;i<=n*n;i++){
					
				}
			}
		}
	}*/

	
	

	return 0;
}

