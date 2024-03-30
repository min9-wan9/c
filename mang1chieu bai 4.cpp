#include<stdio.h>
void nhap(int arr[],int n){
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
}
int dem(int arr[],int n,int k){
	int count=0;
	for(int i=0;i<n;i++){
		if(arr[i]>=k)count++;
	}
	return count;
}
int nhohon(int arr[],int n, int k){
	int dem=0;
	for(int i=0;i<n;i++){
		if(arr[i]<k) dem++;
	}
	return dem;
}
int main()
{
	int n,k;
	scanf("%d",&n);
	int arr[n];
	nhap(arr,n);
	scanf("%d",&k);
	int lonhon=dem(arr,n,k), nho=nhohon(arr,n,k);
	printf("%d\n%d",nho,lonhon);
	return 0;

}

