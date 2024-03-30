#include<stdio.h>
#include<math.h>
int main()
{
	long long n;
	scanf("%lld",&n);
	long long i;
	for(i=1;i<=sqrt(n);i++){
		long long gan=i*i;
		if(gan<=n) printf("%lld ",gan);
	}
	return 0;

}

