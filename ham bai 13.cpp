#include<stdio.h>

int lt(long long n){
	while(n){
		int gan=n%10;
		if(gan!=0 && gan!=6 && gan!=8) return 0;
		n/=10;
	}
	return 1;
}
int main()
{
	long long n;
	scanf("%lld",&n);
	printf("%d",lt(n));
	return 0;


}

