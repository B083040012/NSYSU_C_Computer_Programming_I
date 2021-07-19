#include<stdio.h>
#include<math.h>

int main(){
	int i=0,j=0, sum=0;
	int id[9];
	char a;
	
	printf("請輸入身分證字號:");
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
		printf("\n無效");
	}
	else if(id[0]!=1 && id[0]!=2){
		printf("\n輸入格式錯誤,字母後第一位數字須為1或2");
	}
	else if(sum%10==0){
		printf("\n有效");
	}
	else
		printf("\n無效");
	
	

	return 0;
}

