#include<stdio.h>
#include<math.h>
int ucll(int x, int y){
	while(y){
		int r=x%y;
		x=y;
		y=r;
	}
	return x;
}
int chuso(long long n, int x){
	int count=0;
	while(n){
		count++;
		n/=10;
	}
	if(count==x) return 1;
	else return 0;
}

int main()
{
	int x,y,z,count=0;
	long long n;
	scanf("%d%d%d%lld",&x,&y,&z,&n);
	int uc=ucll(x,y);
	int bc=x*y/uc;
	
	int uc1=ucll(bc,z);
	long long bc1=1ll*bc*z/uc1;
	for(int i=1;i<=pow(10,n)/bc1;i++){
		long long res=1ll*bc1*i;
		if(chuso(res,n)){
			count++;
			printf("%lld ",res);
			return 0;
	}}
	if(count==0) printf("-1");
	return 0;
}

