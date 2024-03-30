#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	long long res=(n*(n-1))/2;
	if(n==1) printf("1");
	else 
	printf("%lld",res);
	return 0;

}

