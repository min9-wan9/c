#include<stdio.h>
#define ll long long 
void dq(long long  n){
	if(n<16){
		if(n<=9) printf("%d",n);
		else printf("%c",n+55);
		
	}
	else {
		dq(n/16);
		int r=n%16;
		if(r<=9) printf("%d",r);
		else printf("%c",r+55);
	}
}
int main()
{
	long long n;
	scanf("%lld",&n);
	dq(n);
	return 0;


}

