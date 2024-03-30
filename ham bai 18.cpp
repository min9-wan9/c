#include<stdio.h>

int main()
{
	long long n,count=0;
	scanf("%lld",&n);
	for(int i=0;i<=n/111;i++){
		long long gan=n-111*i;
		if(gan%11==0) count++;
	}
	if(count) printf("YES");
	else printf("NO");
	return 0;
	


}

