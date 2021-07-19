#include<stdio.h>
#include<math.h>

int main(){
	
	//題組一
	//第一題
	
	printf("題組(一)\n\n");
	printf("1.\n");
	printf("------------------\n");
	printf("B083040012 陳柏翰 資訊工程學系");
	
	//第二題
	
	printf("\n\n\n\n2.:\n"); 
	printf("------------------\n");
	double x=0,y=0,dis;
	int fun,flag=1;
	char move;
	printf("1.輸入移動方向(U,D,R,L)\n");
	printf("2.顯示目前座標,與目前座標離原點位置\n");
	printf("3.顯示是否位於原點\n");
	printf("4.返回原點\n");
	printf("5.結束程式\n");
	while(flag==1){
		printf("請選擇Function:");
		scanf("%d",&fun);
		switch(fun){
			case 1:
				printf("\n輸入移動方向(U,D,R,L) 輸入F代表輸入結束:");
				while(1){
					char move;
					scanf(" %c",&move);
					if(move=='U'||move=='D'||move=='L'||move=='R'){
						switch(move){
							case 'U':y++; break;
							case 'D':y--; break;
							case 'L':x--; break;
							case 'R':x++; break;
						}
					}
					else if(move=='F')
						break;
					else 
						printf("輸入錯誤\n");
				}
				break;
			case 2:
				printf("\n(%.0lf, %.0lf)",x,y);
				dis=sqrt(pow(x-0,2)+pow(y-0,2));
				printf(",%.2lf\n",dis);
			    break;
			case 3:
				if(x==0&&y==0)
					printf("是\n");
				else
					printf("否\n");
				break;
			case 4:
				x=0;
				y=0;
				printf("返回原點\n");
				break;
			case 5:
				flag=0;
				printf("結束程式");
				break;
				
		}
	}
	
	printf("\n\n\n3.\n");
	printf("------------------\n");
	int i,n,j,k,h=0,u,w;
	printf("請輸入 n:");
	scanf("%d",&n); 
	for(i=1;i<=pow(10,n);i++){
		w=i;
		u=i;
		for(k=0;k<=i/10;k++){
			for(j=0;j<=i/10;j++){
				if(u%10==w%10){
					h=1;
				}
				w=i/pow(10,j);
			}
			u=i/pow(10,k);
		}
		if(h==0){
			printf("%d ",i);
		}
		h=0;
	}
	
	
	printf("\n\n\n題組(二)");
	printf("\n\n\n4.\n");
	printf("-----------------");
	int in1,in2,sum=0,q,fac[999]={0};
	
	printf("\n請輸入兩個正整數:");
	scanf("%d %d",&in1,&in2);
	for(q=1;q<=in1;q++){
		sum+=q*(-pow(-1,q));
	}
	printf("sum=%d",sum);
	
	sum=0;
	printf("\n完全數有:");
	for(i=1;i<=in2;i++){
		for(q=1;q<i;q++){
			if(i%q==0){
				sum+=q;
			}
		}
		if(sum==i){
			printf("%d ",i);
		}
		sum=0;
	}
	
	flag=1;
	for(i=2;i<=in2||i<=in1;i++){
		if(in1%i==0&&in2%i==0){
			flag=0;
		}
	}
	if(flag==1){
		printf("\n%d %d互質",in1,in2);
	}
	else if(flag==0)
		printf("\n%d %d不互質",in1,in2);
		
	printf("\n\n\n\n5.\n");	
	printf("-------------\n");
	for(i=3;i<=11;i++){
		for(q=7;q<=15;q++){
			if(i%q!=1)
				printf("%d%c%d=%d ",i,37,q,i%q);
		}
		printf("\n");
	}
		
		
	
	
	
	
	
	
	
	

	return 0;
}

