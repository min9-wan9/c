#include<stdio.h>

int main()
{
	int n;
	puts ("nhap so n>0");
	scanf("%d",&n);
	if (n<=0){
		printf("vui long nhap n>0 !");
	}else{
		int gan=n,a;
		int sum=0;
		while (gan!=0){
			a=gan%10;
			sum+=a;
			gan/=10;
		}
		printf("sum=%d\n",sum);
		
		printf("%d=",n);
		int i=2;
		while (n>1){
			if ( n % i ==0){
				printf("%d",i);
				if (n!=i){
					printf("x");
				}
				n/=i;
			}else
			{
				i++;
			}
		}
		
	
		
	}


}

