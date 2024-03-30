#include<stdio.h>
#include<math.h>
int check(long long n){
	if(n==1 || n==2) return 1;
	else {
		long long f2=1,f1=2,fn;
		for(int i=2;i<=92;i++){
			fn=f1+f2;
			if(fn==n) return 1;
			f2=f1;
			f1=fn;
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
		if(check(n)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
	

}

