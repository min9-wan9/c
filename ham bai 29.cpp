#include<stdio.h>
#include<math.h>
int nt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int checkfibo(int n){
	if(n==0 || n==1) return 1;
	else{
		long long fn2=0,fn1=1,fn;
		for(int i=2;i<=20;i++){
			fn=fn1+fn2;
			if(fn==n) return 1;
			fn2=fn1;
			fn1=fn;
		}
	}
	return 0;
}
int tongcs(int n){
	int sum=0;
	while(n){
		sum+=n%10;
		n/=10;
	}
	if(checkfibo(sum)) return 1;
	else return 0;
}
int main()
{
	int  n;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		if(nt(i) && tongcs(i)) printf("%d ",i);
	}
	return 0;


}

