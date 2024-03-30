#include<stdio.h>

int main()
{
	int  n,u1,d ;
	scanf("%d%d%d",&n,&u1,&d);
	long long res=n*u1*1ll+ d*(1ll*n*(n-1))/2;
	printf("%ld",res);
	return 0;


}

