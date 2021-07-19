#include<stdio.h>
#include<math.h>

int main(){
	
	int a ,i=1;
	scanf("%d",&a);
	while(i<=1000){
		if(i%a==0){
			printf("%d\n",i);
		}
		i++;
	}

	return 0;
}

