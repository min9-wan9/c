#include<stdio.h>

int main()
{
	long long n,s;
	scanf("%lld%lld",&n,&s);
	int count=0;
	 if(s%n!= 0) count=s/n +1;
	 else count=s/n;
	printf("%d",count);
	return 0;


}

