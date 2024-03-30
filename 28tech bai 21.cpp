#include<stdio.h>

int main()
{ 
	long long a,b,k;
	scanf("%lld%lld%lld",&a,&b,&k);
	long vitri;
	if(k%2==0) {
		vitri=(k/2)*(a-b);
	}else {
		vitri=(k/2+1)*a -(k/2)*b;
	}
	printf("%lld",vitri);
	return 0;


}

