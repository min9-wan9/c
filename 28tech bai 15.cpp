#include<stdio.h>

int main()
{
	long long n,a,b;
	scanf("%lld%lld%lld",&n,&a,&b);
	long long tien;
	if(b<=2*a ) tien=(n/2)*b + (n%2) *a;
	else tien=n*a;
	printf("%lld",tien);
	return 0;

}

