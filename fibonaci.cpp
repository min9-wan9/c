#include<stdio.h>

void infibonaci(int n){
	if(n==1) printf("0 ");
	else if(n==2) printf("0 1");
	else {
		long long fn1=1,fn2=0,fn;
		printf("0 1 ");
		for(int i=2;i<n;i++){
			fn=fn1+fn2;
			printf("%lld ",fn);
			fn2=fn1;
			fn1=fn;
		}
	}
}

int  checkfibo(int n){
	if(n==0 || n==1 ) return 1;
	long long fn1=1, fn2=0,fn;
	for(int i=2;i<92;i++){
		fn=fn1+fn2;
		if(fn==n) return 1;
		fn2=fn1;
		fn1=fn;
	}
	return 0;
}
void infibo(int n){
	if(n==1) printf("0");
	else if(n==2) printf("1");
	else {
		long long fn1=1,fn2=0,fn;
		for(int i=2;i<n;i++){
			fn=fn1+fn2;
			fn2=fn1;
			fn1=fn;
		}
		printf("%lld",fn);
	}
	
}
int main()
{ int n;
	scanf("%d",&n);
	infibonaci(n);
	printf("\n");
	printf("%d\n ",checkfibo(n));
	infibo(n);
	return 0;

}

