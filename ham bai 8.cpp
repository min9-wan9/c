#include<stdio.h>
#include<math.h>
int main()
{
	long long a,b,c,d;
	scanf("%lld%lld",&a,&b);
	int count =0;
	c=fmin(a,b),d=fmax(a,b);
	for(int i=sqrt(c);i<=sqrt(d);i++){
		long long gan=1ll*i*i;
		if(gan>=c) count++;
	}
	printf("%d",count);
	return 0;

}

