#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void sort(int *num){
	int i,j,temp;
	for(i=0;i<=49;i++){
		temp=num[i];
		j=i;
		while((j>0) && (num[j-1]>temp)){
			num[j]=num[j-1];
			j--;
		}
		num[j]=temp;
	}
}

double median(int *num){
	return (double)(num[24]+num[25])/2;
}

void mode(int *num,FILE *fp){
	int count=0,max=0,i=0;
	while(i<=48){
		while(num[i]==num[i+1]){
			count++;
			i++;
		}
		if(count>max){
			max=count;
		}
		i++;
		count=0;
	}
	//printf("%d",max);
	i=0;
	while(i<=48){
		while(num[i]==num[i+1]){
			count++;
			i++;
		}
		if(count==max){
			fprintf(fp,"%d ",num[i]);
		}
		i++;
		count=0;
	}
}

int main(){
	
	FILE *out1=fopen("output1.txt","w");
	int i,score_a[50],score_b[50],score[50]={0};
	char s[17];
	srand(time(NULL));
	for(i=0;i<=49;i++){
		score_a[i]=(rand())%101;
		score_b[i]=(rand())%101;
	}
	
	
	fprintf(out1,"Class A original\n\n");
	for(i=0;i<=49;i++){
		fprintf(out1,"%3d ",score_a[i]);
		if((i+1)%10==0){
			fprintf(out1,"\n");
		}
	}
	fprintf(out1,"\nClass B original\n\n");
	for(i=0;i<=49;i++){
		fprintf(out1,"%3d ",score_b[i]);
		if((i+1)%10==0){
			fprintf(out1,"\n");
		}
	}
	fclose(out1);
	
	
	out1=fopen("output1.txt","r");
	//fseek(out1,,SEEK_SET);
	fgets(s,sizeof(s),out1);
	fgets(s,sizeof(s),out1);
	for(i=0;i<=49;i++){
		fscanf(out1,"%d ",&score[i]);
		printf("%d ",score[i]);
	}
	fgets(s,sizeof(s),out1);
	fgets(s,sizeof(s),out1);
	for(i=0;i<=49;i++){
		fscanf(out1,"%d ",&score_b[i]);
		//printf("%d ",score_b[i]);
	}
	fclose(out1);
	
	sort(score_a);
	sort(score_b);
	
	out1=fopen("output1.txt","a");
	
	fprintf(out1,"\nClass A sort\n\n");
	for(i=0;i<=49;i++){
		fprintf(out1,"%3d ",score_a[i]);
		if((i+1)%10==0){
			fprintf(out1,"\n");
		}
	}
	fprintf(out1,"\nClass B sort\n\n");
	for(i=0;i<=49;i++){
		fprintf(out1,"%3d ",score_b[i]);
		if((i+1)%10==0){
			fprintf(out1,"\n");
		}
	}
	fclose(out1);
	
	int n=49,k=49,j=20,dis[21],f;
	FILE *out2=fopen("output2.txt","w");
	fprintf(out2,"Stem-and-leaf display Class A & Class B\n\n");
	fprintf(out2,"              Class A     Class B\n");
	for(i=100;i>=0;i-=10){
		j=0;
		while((score_a[k]>=i) && (score_a[k]<(i+10))){
			dis[j]=(score_a[k]%10);
			k--;
			j++;
		}
		for(f=20;f>=0;f--){
			if(f>=j){
				fprintf(out2," ");
			}
			else{
				fprintf(out2,"%d",dis[f]);
			}
		}
		fprintf(out2,"  %-2d ",i/10);
		while((score_b[n]>=i) && (score_b[n]<(i+10))){
			fprintf(out2,"%d",score_b[n]%10);
			n--;
		}
		fprintf(out2,"\n");
	}
	fprintf(out2,"\n\n\n");
	fprintf(out2,"median A : %.1lf\n",median(score_a));
	fprintf(out2,"mode   A : ");
	mode(score_a,out2);
	fprintf(out2,"\n\n");
	fprintf(out2,"median B : %.1lf\n",median(score_b));
	fprintf(out2,"mode   B : ");
	mode(score_b,out2);
	fclose(out2);

	return 0;
}

