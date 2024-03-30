#include<stdio.h>

int max(long long n,int r){
	if(n==0) return r;
	else {
		int gan=n%10;
		if(gan>r) {
			r=gan;
			return max(n/10,r);
		}
		else return  max(n/10,r);
	}	
}
int min(long long n, int r){
	if(n==0) return r;
	else {
		int gan=n%10;
		if(gan<r){
			r=gan;
			return min(n/10,r);
		}
		else return min(n/10,r);
	}
}
int main()
{
	long long n;
	scanf("%lld",&n);
	int r=n%10;
	printf("%d %d",max(n,r),min(n,r));
	return 0;
}

