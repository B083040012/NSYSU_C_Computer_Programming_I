#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

void myswap(int*a,int*b){
	int temp;
	if(*a>*b){
		temp=*a;
		*a=*b;
		*b=temp;
	}
}

int mysubtotal(int a,int b){
	if(a==b){
		return b;
	}
	else
		return mysubtotal(a+1,b)+a;
}

int main(){
	
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF){
		myswap(&a,&b);
		printf("%d到%d的總合為:%d\n",a,b,mysubtotal(a,b));
	}

	return 0;
}

