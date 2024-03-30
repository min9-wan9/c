#include<stdio.h>

int main()
{
	long long a,b;
	
	scanf("%lld%lld",&a,&b);
	long long c=a,d=b,bc;
	while(b){
		int r=a%b;
		a=b;
		b=r;
	} 
	bc=c/a*d;
	printf("%lld %lld",a,bc);
	return 0;


}

