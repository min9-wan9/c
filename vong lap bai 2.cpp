#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	long long sum=0;
	int i;
	for(i=1;i<=n;i++){
		sum=sum+ 1ll*i*i;
	}
	printf("%lld",sum);
	return 0;


}

