#include<stdio.h>
#include<math.h>

int main()
{
	long long n;
	scanf("%lld",&n);
	long long b=sqrt(n);
	if(b== sqrt(n)) printf("YES");
	else printf("NO");
	return 0;
}

