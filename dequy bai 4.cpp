#include<stdio.h>
#include<math.h>
long long sum(int n){
	if(n==1) return -1;
	else {
		return pow(-1,n) *n+ sum(n-1);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%lld",sum(n));
	return 0;


}

