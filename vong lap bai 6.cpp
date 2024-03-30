#include<stdio.h>
#include<math.h>
int main()
{
	long long n;
	scanf("%lld",&n);
	long long sum=0,i;
	for(i=1;i<=sqrt(n);i++){
		if(n%i==0) {
			if(n/i !=i){
				sum+=i + n/i;
			}else sum+=i;
		}
	}
	printf("%lld\n",sum);
	return 0;


}

