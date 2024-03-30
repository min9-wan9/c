#include<stdio.h>

// merger
// tron cac phan tu tu chi so left =>mid va cac phan tu chi so mid+1 =>right
// thanh cac phan tu tang dan

void merge(int a[], int l, int m, int r){
	// tam thoi luu cac phan tu chi so l =>m vao 1 mang
	// luu cac phan tu chi so m+1 =>r vao 1 mang
	int n1=m-l+1, n2=r-m;
	int x[n1],y[n2];
	// dua cac phan tu tu chi so l => m vao trong mang x
	for(int i=0;i<n1;i++){
		x[i]=a[l+i];
	}
	// dua cac phan tu chi so m+1 =>r vao mang y
	for(int i=0;i<n2;i++){
		y[i]=a[m+1+i];
	}
	// tron 2 mang x,y => gan lai cho mang a[l,r]
	int index= l;
	int j=0,i=0;
	while(i<n1 && j<n2){
		if(x[i]<=y[j]){
			a[index++]=x[i++];
		}
		else {
			a[index++]= y[j++];
		}
	}
	while(i<n1){
		a[index++]=x[i++];
	}
	while(j<n2){
		a[index++]=y[j++];
	}	
}
void mergesort(int a[], int l, int r){
	if(l<r){
		int m=(l+r)/2;
		mergesort(a,l,m);
		mergesort(a,m+1,r);
		merge(a,l,m,r);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	mergesort(a,0,n-1);
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;


}

