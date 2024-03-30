#include<stdio.h>
void findfibo(long long n){
	if(n==1) printf("1");
	else if(n==2) printf("2");
	else {
		long long fn2=1,fn1=2,fn;
		for(int i=2;i<=92;i++){
			fn=fn1+fn2;
			if(fn>=n) {
				printf("%lld",fn);
				return ;
			}
			fn2=fn1;
			fn1=fn;
		}
	}
}
int main()
{
	long long n;
	scanf("%lld",&n);
	findfibo(n);
	return 0;


}

