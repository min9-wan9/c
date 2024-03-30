#include<stdio.h>
#include<math.h>

int main()
{
	long long n,gan;
	scanf("%lld",&n);
	gan=n;
	int count=0;
	for(int i=2;i<=sqrt(gan);i++){
		if(n%i==0){
			while(n%i==0){
				count++;
				n/=i;
			}
			
		}
		if(count){
				printf("%d^%d ",i,count);
				count=0;
				if(n!=1) printf("* ");
			}
			
	}
	if(n!=1) printf("%lld^1",n);
	return 0;


}

