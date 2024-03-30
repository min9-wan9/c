#include<stdio.h>
#include<math.h>
int tn(long long n){
	long long lat=0,gan=n;
	
	while(n){
		lat=lat*10+n%10;
		n/=10;
	}
	return gan==lat;
}
int check(long long n){
	int last=n%10;
	long long res=n/10,gan=0;
	while(res>=10){
		gan=gan*10+res%10;
		res/=10;
	}
	if((res==2*last || 2*res==last) && tn(gan)) return 1;
	else return 0;
}
int main()
{
	long long n;
	scanf("%lld",&n);
	if(check(n)) printf("YES");
	else printf("NO");
	return 0;
}

