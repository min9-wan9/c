#include<stdio.h>
int check(long long n){
	while(n){
		if((n%10)%2==1) return 0;
		n/=10;
	}
	return 1;
}
int main()
{
	long long n;
	scanf("%d",&n);
	if(check(n)) printf("YES");
	else printf("NO");
	return 0;

}

