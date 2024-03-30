#include<stdio.h>

int main()
{
	int n,k,x;
	scanf("%d%d%d",&n,&k,&x);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=n;i>=x;i--){
		a[i]=a[i-1];
			}
 	a[x-1]=k;
 	for(int i=0;i<=n;i++){
 		printf("%d ",a[i]);
	 }
	 return 0;

}

