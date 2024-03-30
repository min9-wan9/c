#include<stdio.h>
#define max 1000000007
long long tong(int a[], int n){
	long res=0;
	for(int i=0;i<n;i++){
		res+=a[i] %max;
	}
	return res%max;
}
long long tich(int a[], int n){
	long long res=1;
	for(int i=0;i<n;i++){
		res*=a[i]%max;
	}
	return res%max;
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("%lld\n%lld",tong(a,n),tich(a,n));
	return 0;
	


}

