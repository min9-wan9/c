#include<stdio.h>

int main()
{
	long long n,sum=0;
	scanf("%lld",&n); 
	while (n){
		sum++;
		n/=10; 
	} 
	printf("%lld",sum );
	return 0; 

}

