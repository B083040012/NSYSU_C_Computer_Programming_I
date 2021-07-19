#include<stdio.h>
#include<math.h>

int main(){
	
	int a ,i=1;
	scanf("%d",&a);
	
	do{
		if(i%a==0)
			printf("%d\n",i);
		i++;
	}while(i<=1000);

	return 0;
}

