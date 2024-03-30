#include<stdio.h>
#include<math.h>

int nt(long long n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int hh(long long n){
	for(int p=2;p<=32;p++){
		if(nt(p)){
			long long tmp=(long long)pow(2,p)-1;
			if(nt(tmp)){
				long long num=(long long) pow(2,p-1)*tmp;
				if(num==n) return 1;
			}
		}
	}
	return 0;
}
int main()
{
	long long n;
	scanf("%lld",&n);
	if(hh(n)) printf("YES");
	else printf("NO");
	return 0;
	

}

