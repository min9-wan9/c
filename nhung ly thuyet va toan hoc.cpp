#include<stdio.h>
#include<math.h>
// 1. so nguyen to
// 5. so hoan hao ( so co tong cac uoc thuc su bang chinh no)
int nt(int n){
	if(n<0) return 0;
	for (int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	
	return 1;
}

int hh (long long n){
	int sum=1;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			sum+=i;
			if(i!= sqrt(n)){
				sum+=n/i;
			}
		}
	}
	return sum==n;
}
int main()
{
	long long n;
	scanf("%lld",&n);
	if(hh(n))printf("YES");
	else printf("NO");
	
	return 0;


}

