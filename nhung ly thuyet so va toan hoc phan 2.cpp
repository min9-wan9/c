#include<stdio.h>
#include<math.h>
//1. phan tich thua so nguyen to
//2. UCLN,BCNN
//3. to hop chap k cua N
//4. tam giac pascal

void pttsnt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			while(n%i==0){
				printf("%d ",i);
				n/=i;
			}
		}
	}
	if(n !=1) printf("%d\n",n);
}
int  ucll(int a, int b){
	while(b!=0){
		int r=a%b;// thuat toan acolit
		a=b;
		b=r;
	}
	return a;
}

void tohop(int k,int n){
	long long res=1;
	k=fmin(k,n-k);
	for(int i=1;i<=k;i++){
		res*=(n-i+1);
		res/=i;
	}
	printf("%lld ",res);
}

void pascal(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			tohop(j,i);
		}
		printf("\n");
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	pttsnt(n);
	printf("%d\n",ucll(10,5));
	
	pascal(n);
	return 0;


}

