#include<stdio.h>
void fibo(int n){
	if(n==1) printf("1");
	else if(n==2) printf("1\n1");
	else {
		printf("1\n1\n");
		long long fn1=1,fn2=1,fn;
		for(int i=3;i<=n;i++){
			fn=fn1+fn2;
			printf("%lld\n",fn);
			fn2=fn1;
			fn1=fn;
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	fibo(n);
	return 0;


}

