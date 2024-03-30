#include<stdio.h>

int main()
{
	long long n,m;
	scanf("%lld%lld",&n,&m);
	long long min=n/2 +n%2;
	long long max=n;
	if( m>max) printf("-1");
	else {
		long long sobuoc=(m+min-1)/m *m;
		printf("%lld",sobuoc);
	} 
	return 0;
}

