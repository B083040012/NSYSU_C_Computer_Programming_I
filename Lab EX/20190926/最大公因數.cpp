#include<stdio.h>
#include<math.h>

int main(){
	int a, b, flag;
	printf("請輸入兩個數:");
	scanf("%d %d",&a,&b);
	
	while(a%b!=0){
		flag=b;
		b=a%b;
		a=flag;
	}
		
	printf("最大公因數:%d",b);
	return 0;
}

