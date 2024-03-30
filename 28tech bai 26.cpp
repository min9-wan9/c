#include<stdio.h>
#include<math.h>
int main()
{
	long long a,b,c,d;
	scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
	long long min=fmin(fmin(a,b),fmin(c,d));
	long long max=fmax(fmax(a,b),fmax(c,d));
	printf("%lld %lld",max,min);
	return 0;
	
	return 0;
}

