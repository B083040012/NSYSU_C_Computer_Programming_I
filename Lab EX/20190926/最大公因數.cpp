#include<stdio.h>
#include<math.h>

int main(){
	int a, b, flag;
	printf("�п�J��Ӽ�:");
	scanf("%d %d",&a,&b);
	
	while(a%b!=0){
		flag=b;
		b=a%b;
		a=flag;
	}
		
	printf("�̤j���]��:%d",b);
	return 0;
}

