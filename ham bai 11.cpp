#include<stdio.h>
#include<math.h>

int nguyenTo(long long n){
	if(n==0 || n==1) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int tong(long long n){
	int sum=0;
	while(n){
		sum+=n%10;
		int gan=n%10;
		if(gan!=2 && gan!=3 && gan!=5 && gan!=7) return 0;
		n/=10;
	}
	if(nguyenTo(sum)) return 1;
	else return 0;
	
}

int main()
{
	long long a,b,c,d,sum=0;
	scanf("%lld%lld",&a,&b);
	for(long long i=1;i<=b;i++){
		if(tong(i )&& nguyenTo(i)) sum++;
		
	}
	printf("%lld",sum);
	return 0;


}

