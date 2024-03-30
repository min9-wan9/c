#include<stdio.h>

int check(int b[],int n,int k){
	for(int i=0;i<n;i++){
		if(b[i]==k) return 0;
	}
	return 1;
}
int main()
{
	int n,count=0;
	scanf("%d",&n);
	int a[n],b[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(check(b,count,a[i])){
			b[count++]=a[i];
		}
	}
	for(int i=0;i<count;i++){
		printf("%d ",b[i]);
	}
	return 0;
}

