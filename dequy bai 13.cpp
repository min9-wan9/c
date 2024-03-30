#include<stdio.h>
int tongcs(long long n){
	if(n<10) return n;
	else return n%10 +tongcs(n/10);
}
int main()
{
	long long n;
	scanf("%lld",&n); 
	printf("%d",tongcs(n));
	return 0;


}

