#include<stdio.h>

int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<=n-k;i++){
		long long  sum=0;
		for(int j=i;j<i+k;j++){
			sum+=a[j];
		}
		printf("%lld ",sum);
	}
	return 0;


}

