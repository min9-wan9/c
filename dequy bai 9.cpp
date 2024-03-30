#include<stdio.h>

const long long mod = 1000000007;
#define ll long long
ll binpow(int a, int b){
	if(b==0) return 1;
	
		ll tmp= binpow(a,b/2);
		if(b%2==0){
			return (tmp%mod) * (tmp%mod) %mod;
		}
		else 
		return (tmp%mod)*(tmp%mod)%mod * (a%mod) %mod ;
	
}
int main()
{
	ll a,b;
	scanf("%lld%lld",&a,&b);
	printf("%lld",binpow(a,b));
	return 0;


}

