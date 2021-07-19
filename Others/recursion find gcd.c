#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>


//use recursion to find gcd

int find_gcd(int a,int b){
	int temp_1;
	if(a<b){
		temp_1=a;
		a=b;
		b=temp_1;
	}
	if(a%b==0){
		return b;
	}
	else{
		find_gcd(b,a%b);
	}
}
int main(){
	int input1,input2;
	printf("Input two integers:");
	scanf("%d %d",&input1,&input2);
	printf("The greatest common divisor of(%d,%d)is %d",input1,input2,find_gcd(input1,input2));

	return 0;
}

