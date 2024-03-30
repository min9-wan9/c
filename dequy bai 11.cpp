#include<stdio.h>
#define ll long long

void dq(ll n){
	if(n<2){
		printf("%d",n%2);
	
	}
	else {
		dq(n/2);
		int r=n%2;
		printf("%d",r);
	}
}
int main()
{
	ll n;
	scanf("%lld",&n);
	dq(n);
	return 0;


}

