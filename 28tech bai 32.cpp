#include<stdio.h>
#include<math.h>
int main()
{
	long long k1,k2,k3,k4;
	scanf("%lld%lld%lld%lld",&k1,&k2,&k3,&k4);
	// 32,256
	long long k=fmin(k1,fmin(k3,k4));
	long long tong;
	k1-=k;
	long long n=fmin(k1,k2);
	tong=k*256 +n*32;
	printf("%lld",tong);
	return 0;


}

