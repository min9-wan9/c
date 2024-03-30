#include<stdio.h>

int check(long long n){
	if(n==0 || n==1) return 1;
	else {
		long long f2=0,f1=1,f;
		for(int i=2;i<92;i++){
			f=f1+f2;
			f2=f1;
			f1=f;
			if(f==n) return 1;
		}
	}
	return 0;
}
int main()
{
	int n,dem=0;
	scanf("%d",&n);
	long long a[n];
	for(int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(check(a[i])) {
			printf("%lld ",a[i]);
			dem++;
		}
	}
	if(dem==0) printf("NONE");
	return 0;


}

