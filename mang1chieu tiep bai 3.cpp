#include<stdio.h>
#include<math.h>
// so co dung 3 uoc n=p2
int prime[1000000];
void sang(){
	for(int i=0;i<=1000000;i++){
		prime[i]=1;
	}
	prime[0]=prime[1]=0;
	for(int i=2;i<=sqrt(1000000);i++){
		if(prime[i]){
			for(int j=i*i;j<=1000000;j+=i){
			prime[j]=0;
		}
		}
		
	}
}

int main()
{
	sang();
	long long n;
	scanf("%lld",&n);
	for(long long i=2;i<sqrt(n);i++){
		if(prime[i]) printf("%lld ",1ll*i*i);
	}
	return 0;


}

