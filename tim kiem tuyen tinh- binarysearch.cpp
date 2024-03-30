#include<stdio.h>
int binarysearch(int a[], int n,int x){
	int l=0,r=n-1;
	
	while(l<=r){
		int mid=(l+r)/2;
		if(a[mid]==x) return 1;
		else if(a[mid]<x) l=mid+1;
		else r=mid-1;
	}
	return 0;
}
int main()
{
	int n,x;
	scanf("%d%d",&n,&x);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("%d ",binarysearch(a,n,x));
	return 0;


}

