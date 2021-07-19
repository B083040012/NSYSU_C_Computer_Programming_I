#include<stdio.h>
#include<stdlib.h>
#include<string.h>

long long acker(int m,int n){
	if(m==0){
		return n+1;
	}
	else if(n==0){
		return acker(m-1,1);
	}
	else
		return acker(m-1,acker(m,n-1));
}

int main(){
	
	int m,n;
	printf("½Ð¿é¤J¼Æ¦r:");
	scanf("%d %d",&m,&n);
	printf("acker of (%d,%d)=%lld",m,n,acker(m,n));

	return 0;
}

