#include<stdio.h>
#include<math.h>
int n[10000000];
void sang(){
	for(int i=0;i<=1000000;i++){
		n[i]=1;
	}
	n[0]=n[1]=0;
	for(int i=2;i<=sqrt(1000000);i++){
		for(int j=i*i;j<=1000000;j+=i){
			n[j]=0;
		}
	}
}
int main()
{
	long long a;
	scanf("%lld",&a);
	sang();
	int dem=0;
	for(int i=0;i<=sqrt(a);i++){
		if(n[i]) dem++;
	}
	printf("%lld",dem);
	return 0;
}

