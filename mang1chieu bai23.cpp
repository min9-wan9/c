#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[n],b[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	b[0]=a[0];
	for(int i=1;i<n;i++){
		b[i]=b[i-1]+a[i];
	}
	for(int i=0;i<n;i++){
		printf("%d ",b[i]);
	}
	return 0;

}

