#include<stdio.h>
#include<math.h>

int main(){
	
	//�D�դ@
	//�Ĥ@�D
	
	printf("�D��(�@)\n\n");
	printf("1.\n");
	printf("------------------\n");
	printf("B083040012 ���f�� ��T�u�{�Ǩt");
	
	//�ĤG�D
	
	printf("\n\n\n\n2.:\n"); 
	printf("------------------\n");
	double x=0,y=0,dis;
	int fun,flag=1;
	char move;
	printf("1.��J���ʤ�V(U,D,R,L)\n");
	printf("2.��ܥثe�y��,�P�ثe�y�������I��m\n");
	printf("3.��ܬO�_�����I\n");
	printf("4.��^���I\n");
	printf("5.�����{��\n");
	while(flag==1){
		printf("�п��Function:");
		scanf("%d",&fun);
		switch(fun){
			case 1:
				printf("\n��J���ʤ�V(U,D,R,L) ��JF�N���J����:");
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
						printf("��J���~\n");
				}
				break;
			case 2:
				printf("\n(%.0lf, %.0lf)",x,y);
				dis=sqrt(pow(x-0,2)+pow(y-0,2));
				printf(",%.2lf\n",dis);
			    break;
			case 3:
				if(x==0&&y==0)
					printf("�O\n");
				else
					printf("�_\n");
				break;
			case 4:
				x=0;
				y=0;
				printf("��^���I\n");
				break;
			case 5:
				flag=0;
				printf("�����{��");
				break;
				
		}
	}
	
	printf("\n\n\n3.\n");
	printf("------------------\n");
	int i,n,j,k,h=0,u,w;
	printf("�п�J n:");
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
	
	
	printf("\n\n\n�D��(�G)");
	printf("\n\n\n4.\n");
	printf("-----------------");
	int in1,in2,sum=0,q,fac[999]={0};
	
	printf("\n�п�J��ӥ����:");
	scanf("%d %d",&in1,&in2);
	for(q=1;q<=in1;q++){
		sum+=q*(-pow(-1,q));
	}
	printf("sum=%d",sum);
	
	sum=0;
	printf("\n�����Ʀ�:");
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
		printf("\n%d %d����",in1,in2);
	}
	else if(flag==0)
		printf("\n%d %d������",in1,in2);
		
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

