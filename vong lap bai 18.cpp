#include<stdio.h>

int main()
{
	long long n;
	scanf("%lld",&n);
	int count =0;
	while (n){
		if(n%10==2 || n%10==3 || n%10==5 || n%10==7) count ++;
		n/=10; 
	} 
	printf("%d ",count);
	return 0; 

}

