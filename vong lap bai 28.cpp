#include<stdio.h>

int main()
{
	int n;
	long long sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		long long gan=1;
		for(int j=1;j<=i;j++){
			gan*=j;
		}
		sum+=gan;
	}
	printf("%lld",sum);
	return 0;


}

