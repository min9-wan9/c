#include<stdio.h>
int checkfibo(long long n){
	if(n==0 || n==1) return 1;
	else {
		long long fn2=0,fn1=1,fn;
		for(int i=2;i<=92;i++){
			fn=fn1+fn2;
			if(fn==n ) return 1;
			fn2=fn1;
			fn1=fn;
		}
	}
	return 0;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		long long n;
		scanf("%lld",&n);
		if(checkfibo(n)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;


}

