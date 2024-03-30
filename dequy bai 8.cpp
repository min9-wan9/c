#include<stdio.h>
long long ucll(long long a, long long b){
	if(b==0) return a;
	else return ucll(b,a%b);
}
long long bcnn(long long a, long long b){
	return a/ucll(a,b) *b;
}
int main()
{
	long long a,b;
	scanf("%lld%lld",&a,&b);
	printf("%lld %lld",ucll(a,b),bcnn(a,b));
	return 0;


}

