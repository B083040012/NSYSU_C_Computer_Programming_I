#include<stdio.h>
#include<math.h>

int main(){
	int i=0,j=0, sum=0;
	int id[9];
	char a;
	
	printf("�п�J�����Ҧr��:");
	scanf("%c",&a);
	
	while(i<=8){
		scanf("%d",&id[i]);
		i=i+1;
	}
	
	while(j<8){
		sum=sum+id[j]*(8-j);
		j=j+1;
	}
	sum=sum+((int(a)-55)%10)*9+1+id[8];
	
	if(10>int(a)-55 || int(a)-55>17){
		printf("\n�L��");
	}
	else if(id[0]!=1 && id[0]!=2){
		printf("\n��J�榡���~,�r����Ĥ@��Ʀr����1��2");
	}
	else if(sum%10==0){
		printf("\n����");
	}
	else
		printf("\n�L��");
	
	

	return 0;
}

