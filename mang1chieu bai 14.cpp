#include<stdio.h>
int gcd(int a, int b){
	while(b){
		int r=a%b;
		a=b;
		b=r;
	}
	return a;
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int uc=1;
	for(int i=0;i<n-1;i++){
		uc=gcd(uc,gcd(a[i],a[i+1]));
	}
	printf("%d",uc);
	return 0;


}

