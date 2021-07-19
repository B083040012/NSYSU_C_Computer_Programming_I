#include<stdio.h>
#include<stdlib.h>

int main(){
	
	while(1){
		double m,n,mm=1,nm=1,mnm=1,i;
		if((scanf("%lf %lf",&m,&n))==EOF)
			break;
		else{
			for(i=m;i>=1;i--)
				mm*=i;
			for(i=n;i>=1;i--)
				nm*=i;
			for(i=(m-n);i>=1;i--)
				mnm*=i;
			printf("\nC(%.0lf, %.0lf) = %.0lf\n\n",m,n,mm/(nm*mnm));
		}	
	}
	return 0;
}

