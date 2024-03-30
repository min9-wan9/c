#include<stdio.h>

int main()
{
	 int giaithua, i,n;
	giaithua=1;
	puts ("nhap n>0");
	scanf("%d",&n);
	if (n==0){
		printf("0!=1");
	}
	if (n>0){for (i=1;i<=n;i++){
		giaithua*=i;
	}
	printf("%d",giaithua);
	
	}
	


}

