#include<stdio.h>
#include<math.h>

int main()
{
	long long n;
	scanf("%lld",&n);
	long long res=0;
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			if(i!=sqrt(n)) res+=i + n/i;
			else res+=i;
		}
	}
	printf("%lld",res);
	return 0;

}

