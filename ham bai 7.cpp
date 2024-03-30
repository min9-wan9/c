#include<stdio.h>
#include<math.h>

int main()
{
	long long a,b;
	scanf("%lld%lld",&a,&b);
	long c,d;
	c=fmin(a,b), d=fmax(a,b);
	for(int i=sqrt(c); i<=sqrt(d);i++){
		long long gan=1ll*i*i;
		if(gan>=a) printf("%lld ",gan);
	}
	return 0;


}

