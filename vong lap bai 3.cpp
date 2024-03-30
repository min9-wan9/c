#include<stdio.h>

int main()
{
	long long n,sum=0;
	scanf("%lld",&n);
	for(int i=0;i<=n;i+=3){
		sum+=i;
	}
	printf("%lld",sum);
	return 0;


}

