#include<stdio.h>
#include<math.h>
int nt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int main()
{
	int n,dem=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<n-1;i++){
		long long res1=0,res2=0;
		for(int j=0;j<i;j++){
			res1+=a[j];
		}
		for(int j=i+1;j<n;j++){
			res2+=a[j];
		}
		if(nt(res1) && nt(res2)) printf("%d ",i);
	}
	return 0;
	


}

