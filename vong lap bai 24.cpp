#include<stdio.h>

int main()
{
	long long a,b;
	long long uc=1;
	scanf("%lld%lld",&a,&b);
	if(a<=b){
		for(int i=1;i<=a;i++){
			uc*=i;
		}
	} else {
		for(int i=1;i<=b;i++){
			uc*=i;
		}
	}
	printf("%lld",uc);
	return 0;


}

