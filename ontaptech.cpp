#include<stdio.h>

int main()
{ 
	long long n,m,a;
	scanf("%lld%lld%lld",&n,&m,&a);
	long long sv;
	if(n%a==0 &&  m%a==0) sv=(n/a)*(m/a);
	else if( n%a==0 && m%a!=0) sv=(n/a)*((m/a)+1);
	else if(n%a!=0 && m%a==0) sv=((n/a)+1)*(m/a);
	else sv=((n/a)+1)*((m/a)+1);
	printf("%lld",sv);
	return 0; 
}

