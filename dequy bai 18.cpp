#include<stdio.h>

int sumc(long long n){
	if(n<10){
		if(n%2==0) return n;
		else return 0;
	}
	else {
		int r=n%10;
		if(r%2==0) return r+sumc(n/10);
		else return sumc(n/10);
	}
}
int suml(long long n){
	if(n<10){
		if(n%2!=0) return n;
		else return 0;
	}
	else {
		int r=n%10;
		if(r%2!=0) return r+suml(n/10);
		else return suml(n/10);
	}
}
int main()
{
	long long n;
	scanf("%lld",&n);
	printf("%d\n",sumc(n));
	printf("%d",suml(n));
	return 0;


}

