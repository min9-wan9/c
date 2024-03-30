#include<stdio.h>
int in1(long long n){
	if(n<10){
		printf("%d ",n);
		return 0 ;
	}
	else {
		printf("%d ",n%10);
		return in1(n/10);
	}
}
void in2(long long n){
	if(n<10) printf("%d",n);
	else {
		in2(n/10);
		printf("%d ",n%10);
	}
}
int main()
{
	long long n;
	scanf("%lld",&n);
	in2(n);
	printf("\n");
	in1(n);
	return 0;


}

