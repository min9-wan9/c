#include<stdio.h>
#include<math.h>
// sang so nguyen to chi ap dung cho so n<10^7;
int a[10000000];
int prime[10000001];
void sang(int prime[], int n){
	// gan
	for(int i=0;i<=n;i++){
		prime[i]=1;
	}
	prime[0]=prime[1]=0;
	// sang
	for(int i=2;i<=sqrt(n);i++){
		for(int j=i*i;j<=n;j+=i){
			prime[j]=0;
		}
	}
} 
int main()
{
	int n;
	scanf("%d",&n);
	sang(prime,n);
	for(int i=0;i<n;i++){
		if(prime[i]==1) printf("%d ",i);
	}
	return 1;

}

