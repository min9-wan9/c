#include<stdio.h>
#include<math.h>


int count(int n){
	if(n==1) return 0;
	else {
		int res1=10,res2=10,res3=10;
		if(n%2==0) res1=1+count(n/2);
		if(n%3==0) res2=1+count(n/3);
		res3=1+count(n-1);
		return fmin(res1,fmin(res2,res3));
	}
}
int main()
{
	long long n;
	scanf("%lld",&n);
	printf("%d",count(n));
	return 0;

}

