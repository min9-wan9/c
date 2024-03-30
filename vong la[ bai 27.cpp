#include<stdio.h>

int main()
{
	long long n;
	scanf("%lld",&n);
	int tong=0;
	while (n){
		tong+=n%10;
		n/=10;
	}
	while(tong>=10){
		int gan=0;
		while(tong){
			gan+=tong%10;
			tong/=10;
		}
		tong=gan;
	}
	printf("%d",tong);
	return 0;
}

