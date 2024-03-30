#include<stdio.h>
long long check(long long n){
	if(n==1) return 1;
	else{
		long long f1=1,f2=1,fn;
		for(int i=2;i<=92;i++){
			fn=f1+f2;
			f2=f1;
			f1=fn;
			if(fn>=n) return fn;
		}
	}
	
}
int main()
{
	long long n;
	scanf("%lld",&n);
	printf("%lld",check(n));
	return 0;


}

