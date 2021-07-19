#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int insertion_sort(int*num,int size){
	int i,j,temp;
	for(i=1;i<=size-1;i++){
		temp=num[i];
		j=i;
		while((j>0) && (num[j-1]>temp)){
			num[j]=num[j-1];
			j--;
		}
		num[j]=temp;
	}
	/*for(i=0;i<=size-1;i++){
		printf("%d ",num[i]);
	}*/
	return 0;
}

int binary_searching(int *num,int size,int target,double *time){
	int min=0,max=size-1,g,i;
	clock_t start,end;
	start=clock();
	while(max>=min){
		if(num[(min+max)/2]==target){
			g=(min+max)/2;
			end=clock();
			*time=(double)(end-start)/CLOCKS_PER_SEC;
			return g+1;
		}
		else if(num[(min+max)/2]<target){
			min=(min+max)/2+1;
		}
		else{
			max=(min+max)/2-1;
		}
	}
	end=clock();
	*time=(double)(end-start)/CLOCKS_PER_SEC;
	/*for(i=0;i<=size-1;i++){
		printf("%d ",num[i]);
	}*/
	return -1;
}

int average(int *num,int size){
	int i,count=0;
	for(i=0;i<=size-1;i++){
		count+=num[i];
	}
	return count/size;
}

int median(int*num,int size){
	int m[size],temp,i,j;
	for(i=0;i<=size-1;i++){
		m[i]=num[i];
	}
	//insertion sort
	for(i=1;i<=size-1;i++){
		temp=m[i];
		j=i;
		while((j>0) && (m[j-1]>temp)){
			m[j]=m[j-1];
			j--;
		}
		m[j]=temp;
	}
	if(size%2==0){
		return ((m[size/2]+m[size/2-1])/2);
	}
	else{
		return m[size/2];
	}
}

int main(){
	
	printf("第一題:\n");
	FILE *file_1=fopen("input.txt","a");
	srand(time(NULL));
	int i,input_1;
	for(i=1;i<=10000;i++){
		input_1=rand()%10000+1;
		fprintf(file_1,"%d ",input_1);
	}
	fclose(file_1);
	
	printf("\n\n=============\n\n");
	printf("第二題:\n");
	int n,num_2,k=0;
	clock_t start,end;
	printf("請輸入一個數字:\n");
	scanf("%d",&n);
	FILE *file_2=fopen("input.txt","r");
	k=1;
	start=clock();
	for(i=1;i<=10000;i++){
		fscanf(file_2,"%d ",&num_2);
		if(num_2==n){
			printf("%d出現在第%d個位置\n",n,i);
			k=0;
			break;
		}
	}
	end=clock();
	fclose(file_2);
	if(k==1){
		printf("%d Not Found\n",n);
	}
	printf("執行時間:%.3lf sec\n",(double)(end-start)/CLOCKS_PER_SEC);
	
	printf("\n\n\n=========\n\n\n");
	printf("第三題:\n");
	int num_3[10000];
	printf("請輸入一個數字:\n");
	scanf("%d",&n);
	k=1;
	FILE *file_3=fopen("input.txt","r");
	for(i=0;i<=9999;i++){
		fscanf(file_3,"%d",&num_3[i]);
	}
	insertion_sort(num_3,10000);
	start=clock();
	for(i=0;i<=9999;i++){
		if(num_3[i]==n){
			printf("%d出現在第%d個位置\n",n,i+1);
			k=0;
			break;
		}
	}
	end=clock();
	fclose(file_3);
	if(k==1){
		printf("%d Not Found\n",n);
	}
	printf("執行時間:%.3lf sec\n",(double)(end-start)/CLOCKS_PER_SEC);
	
	printf("\n\n\n==========\n\n\n");
	printf("第四題:\n");
	int num_4[10000];
	double duration_4;
	printf("請輸入一個數字:\n");
	scanf("%d",&n);
	k=1;
	FILE *file_4=fopen("input.txt","r");
	for(i=0;i<=9999;i++){
		fscanf(file_4,"%d",&num_4[i]);
		//printf("%d ",num_4[i]);
	}
	if((binary_searching(num_3,10000,n,&duration_4))==-1){
		printf("%d Not Found\n",n);
	}
	else{
		printf("%d出現在第%d個位置\n",n,binary_searching(num_3,10000,n,&duration_4));
	}
	fclose(file_4);
	printf("執行時間:%.3lf sec",duration_4); 
	
	printf("\n\n\n=========\n\n\n");
	printf("第五題:\n");
	int num_5[10000];
	FILE *file_5=fopen("input.txt","r");
	for(i=0;i<=9999;i++){
		fscanf(file_5,"%d",&num_5[i]);
		//printf("%d ",num_4[i]);
	}
	printf("平均值:%d\n",average(num_5,10000));
	printf("中位數:%d\n",median(num_5,10000));
	fclose(file_5);
	
	printf("\n\n\n===========\n");
	printf("第六題:\n");
	char num_6[99999];
	while(1){
		printf("\nN=");
		scanf("%d",&n);
		if(n==-1){
			break;
		}
		else{
			FILE *file_6=fopen("output1.txt","w");
			printf("string:");
			for(i=1;i<=n;i++){
				printf("%d",i);
				fprintf(file_6,"%d",i);
			}
			fclose(file_6);
			//fprintf(file_6,"\0");
			k=0;
			file_6=fopen("output1.txt","a");
			while(!feof(file_6)){
				fgets(&num_6[k],1,file_6);
				printf("\n%d",num_6[k]);
				if((k+1)%100==0){
					fprintf(file_6,"\n");
				}
				k++;
			}
			fclose(file_6);
			i=0;
			int count_0=0,count_1=0,count_2=0,count_3=0,count_4=0,count_5=0,count_6=0,count_7=0,count_8=0,count_9=0;
			while(num_6[i]!='\0'){
				if(num_6[i]=='0'){
					count_0++;
					i++;
					continue;
				}
				if(num_6[i]=='1'){
					count_1++;
					i++;
					continue;
				}
				else if(num_6[i]=='2'){
					count_2++;
					i++;
					continue;
				}
				else if(num_6[i]=='3'){
					count_3++;
					i++;
					continue;
				}
				else if(num_6[i]=='4'){
					count_4++;
					i++;
					continue;
				}
				else if(num_6[i]=='5'){
					count_5++;
					i++;
					continue;
				}
				else if(num_6[i]=='6'){
					count_6++;
					i++;
					continue;
				}
				else if(num_6[i]=='7'){
					count_7++;
					i++;
					continue;
				}
				else if(num_6[i]=='8'){
					count_8++;
					i++;
					continue;
				}
				else if(num_6[i]=='9'){
					count_9++;
					i++;
					continue;
				}
			}
			printf("%d %d %d %d %d %d %d %d %d",count_0,count_1,count_2,count_3,count_4,count_5,count_6,count_7,count_8,count_9);
		}
	}
	

	return 0;
}

