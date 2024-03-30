#include<stdio.h>

int main()
{
	long long n,m,a,o;
	scanf("%d%d%d",&n,&m,&a);
	if(m%a==0 && n%a==0){
		o=(m/a)*(n/a);
		printf("%lld",o);
	}
	else if(m%a!=0 && n%a==0){
		o=(m/a +1) *(n/a) ;
		printf("%lld",o);
	}
	else if (m%a==0 && n%a!=0) {
		o=(m/a) *(n/a +1);
		printf("%lld",o);
	}
	else{
		o=(m/a +1) *(n/a +1);
		printf("%lld",o);
	}
	return 0;
}

