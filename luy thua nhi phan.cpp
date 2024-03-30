#include<stdio.h>
// luy thua nhi phan
void bt(int a,int b){
	long long res=1;
	for(int i=1;i<=b;i++){
		res*=a;
	}
	printf("%lld",res);
}

void nhiphan(long long a,int b){
	long long res=1;
	// xet tung bit
	while(b!=0) {
		if(b%2==1){
			// b la so le: bit cuoi cung hien tai cua b la so ` 
			res*=a;
			
		}
		a*=a;
		b/=2;
	}
	printf("\n%lld", res);
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	bt(a,b);
	nhiphan(a,b);
	return 0;


}

