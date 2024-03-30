#include<stdio.h>
#include<math.h>
int main()
{
	long long n,tich=1;
	scanf("%lld",&n);
	int i;
	for(i=1;i<=sqrt(n);i++){
		
		if(n%i==0) tich*=n;
	}
	printf("%lld",tich);
	return 0;
}

